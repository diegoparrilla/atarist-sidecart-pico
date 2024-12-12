/**
 * File: main.c
 * Author: Diego Parrilla Santamaría
 * Date: July 2023
 * Copyright: 2023 - GOODDATA LABS SL
 * Description: C file that launches the ROM emulator or configurator
 */

#include "include/romloader.h"
#include "include/romemul.h"
#include "include/floppyemul.h"
#include "include/rtcemul.h"
#include "include/gemdrvemul.h"

int main()
{
    // Set the clock frequency. 20% overclocking
    set_sys_clock_khz(RP2040_CLOCK_FREQ_KHZ, true);

    // Set the voltage
    vreg_set_voltage(RP2040_VOLTAGE);

    // Configure the input pins for ROM4 and ROM3
    gpio_init(SELECT_GPIO);
    gpio_set_dir(SELECT_GPIO, GPIO_IN);
    gpio_set_pulls(SELECT_GPIO, false, true); // Pull down (false, true)
    gpio_pull_down(SELECT_GPIO);

#if _DEBUG
    // Initialize chosen serial port
    stdio_init_all();
    setvbuf(stdout, NULL, _IONBF, 1); // specify that the stream should be unbuffered
#endif
    // Only startup information to display
    DPRINTF("\n\nSidecart ROM emulator. %s (%s). %s mode.\n\n", RELEASE_VERSION, RELEASE_DATE, _DEBUG ? "DEBUG" : "RELEASE");

#if _DEBUG
    // Show information about the frequency and voltage
    int current_clock_frequency_khz = RP2040_CLOCK_FREQ_KHZ;
    const char *current_voltage = VOLTAGE_VALUES[RP2040_VOLTAGE];
    DPRINTF("Clock frequency: %i KHz\n", current_clock_frequency_khz);
    DPRINTF("Voltage: %s\n", current_voltage);
#endif

    bool force_configurator = (gpio_get(SELECT_GPIO) != 0);

    // Init the CYW43 WiFi module
    if (cyw43_arch_init())
    {
        DPRINTF("Wi-Fi init failed\n");
        return -1;
    }

    // Load the config from FLASH
    load_all_entries();

    ConfigEntry *default_config_entry = find_entry(PARAM_BOOT_FEATURE);
    DPRINTF("BOOT_FEATURE: %s\n", default_config_entry->value);

    ConfigEntry *default_config_reboot_mode = find_entry(PARAM_SAFE_CONFIG_REBOOT);
    DPRINTF("SAFE_CONFIG_REBOOT: %s\n", default_config_reboot_mode->value);

    bool safe_config_reboot = default_config_reboot_mode->value[0] == 't' || default_config_reboot_mode->value[0] == 'T';

// Check the different modes
    DPRINTF("Testing the different modes\n");
    if ((!force_configurator) && (strcmp(default_config_entry->value, "ROM_EMULATOR") == 0))
    {
        DPRINTF("No SELECT button pressed. ROM_EMULATOR entry found in config. Launching.\n");

        // Check if Delay ROM emulation (ripper style boot) is true
        ConfigEntry *rom_delay_config_entry = find_entry(PARAM_DELAY_ROM_EMULATION);
        DPRINTF("DELAY_ROM_EMULATION: %s\n", rom_delay_config_entry->value);
        if ((strcmp(rom_delay_config_entry->value, "true") == 0) || (strcmp(rom_delay_config_entry->value, "TRUE") == 0) || (strcmp(rom_delay_config_entry->value, "T") == 0))
        {
            DPRINTF("Delaying ROM emulation.\n"); // Always print this line
            // The "D" character stands for "Delay"
            blink_morse('D');

            // While until the user presses the SELECT button again to launch the ROM emulator
            while (gpio_get(SELECT_GPIO) == 0)
            {
                tight_loop_contents();
                sleep_ms(1000); // Give me a break... to display the message
            }

            DPRINTF("SELECT button pressed.\n");
            // Now wait for the user to release the SELECT button
            while (gpio_get(SELECT_GPIO) != 0)
            {
                tight_loop_contents();
            }

            DPRINTF("SELECT button released. Launching ROM emulator.\n");
        }

        // Canonical way to initialize the ROM emulator:
        // No IRQ handler callbacks, copy the FLASH ROMs to RAM, and start the state machine
        init_romemul(NULL, NULL, true);

        DPRINTF("ROM Emulation started.\n"); // Always print this line

        // The "E" character stands for "Emulator"
        blink_morse('E');

        // Deinit the CYW43 WiFi module. DO NOT INTERRUPT, BUDDY!
        cyw43_arch_deinit();

        bool write_config_only_once = true;
        // Loop forever and block until the state machine put data into the FIFO
        while (true)
        {
            tight_loop_contents();
            sleep_ms(1000); // Give me a break... to display the message
            if (gpio_get(SELECT_GPIO) != 0)
            {
                select_button_action(safe_config_reboot, write_config_only_once);
                // Write config only once to avoid hitting the flash too much
                write_config_only_once = false;
            }
        }
    }

    if ((!force_configurator) && (strcmp(default_config_entry->value, "FLOPPY_EMULATOR") == 0))
    {
        DPRINTF("FLOPPY_EMULATOR entry found in config. Launching.\n");

        // Copy the ST floppy firmware emulator to RAM
        // Copy the firmware to RAM
        COPY_FIRMWARE_TO_RAM((uint16_t *)floppyemulROM, floppyemulROM_length);

        // Reserve memory for the protocol parser
        init_protocol_parser();
        DPRINTF("Floppy emulation started.\n"); // Print always

        // Hybrid way to initialize the ROM emulator:
        // IRQ handler callback to read the commands in ROM3, and NOT copy the FLASH ROMs to RAM
        // and start the state machine
        init_romemul(NULL, floppyemul_dma_irq_handler_lookup_callback, false);

        change_spi_speed();

        DPRINTF("Ready to accept commands.\n");

        init_floppyemul(safe_config_reboot);

        // You should never reach this line...
    }

    if ((!force_configurator) && (strcmp(default_config_entry->value, "RTC_EMULATOR") == 0))
    {
        DPRINTF("RTC_EMULATOR entry found in config. Launching.\n");

        char *rtc_type_str = find_entry(PARAM_RTC_TYPE)->value;
        if (strcmp(rtc_type_str, "SIDECART") == 0)
        {
            // Copy the ST RTC firmware emulator to RAM
            COPY_FIRMWARE_TO_RAM((uint16_t *)rtcemulROM, rtcemulROM_length);
        }
        else
        {
            ERASE_FIRMWARE_IN_RAM();
        }

        // Reserve memory for the protocol parser
        init_protocol_parser();
        DPRINTF("RTC emulation started.\n"); // Print always

        // Hybrid way to initialize the ROM emulator:
        // IRQ handler callback to read the commands in ROM3, and NOT copy the FLASH ROMs to RAM
        // and start the state machine
        init_romemul(NULL, rtcemul_dma_irq_handler_lookup_callback, false);

        DPRINTF("Ready to accept commands.\n");

        // The "T" character stands for "TIME"
        blink_morse('T');

        init_rtcemul(safe_config_reboot);

        // You should never reach this line...
    }

    if ((!force_configurator) && (strcmp(default_config_entry->value, "GEMDRIVE_EMULATOR") == 0))
    {
        DPRINTF("GEMDRIVE_EMULATOR entry found in config. Launching.\n");

        // Copy the GEMDRIVE firmware emulator to RAM
        COPY_FIRMWARE_TO_RAM((uint16_t *)gemdrvemulROM, gemdrvemulROM_length);

        // Reserve memory for the protocol parser
        init_protocol_parser();

        // Hybrid way to initialize the ROM emulator:
        // IRQ handler callback to read the commands in ROM3, and NOT copy the FLASH ROMs to RAM
        // and start the state machine
        init_romemul(NULL, gemdrvemul_dma_irq_handler_lookup_callback, false);

#if _DEBUG
        //  Check if the USB is connected. If so, check if the SD card is inserted and initialize the USB Mass storage device
        if (cyw43_arch_gpio_get(CYW43_WL_GPIO_VBUS_PIN))
        {
            DPRINTF("USB connected\n");
            usb_mass_init();
        }
#endif
        change_spi_speed();

        DPRINTF("Ready to accept commands.\n");

        // The "H" character stands for "HARDISK"
        blink_morse('H');

        init_gemdrvemul(safe_config_reboot);

        // You should never reach this line...
    }

    // Now if we enter a value that is not recognized, we enter the configuration mode by default always

    DPRINTF("If you are here, you must ALWAYS enter into configuration mode.\n");

    //  Check if the USB is connected. If so, check if the SD card is inserted and initialize the USB Mass storage device
    if (cyw43_arch_gpio_get(CYW43_WL_GPIO_VBUS_PIN))
    {

#if TUD_OPT_HIGH_SPEED
        DPRINTF("USB High Speed enabled. Configure serial USB speed\n");
        change_spi_speed();
#endif

        DPRINTF("USB connected\n");
        usb_mass_init();
    }

    DPRINTF("Launch configurator.\n");

    // Deinit the CYW43 WiFi module. Enter clean in the firmware configurator
    network_terminate();

    init_firmware();

    // Now the user needs to reset or poweroff the board to load the ROMs
    DPRINTF("Rebooting the board.\n");

    // Give a break to handle pending messages
    sleep_ms(1000);

    reboot();
    while (1);
    return 0;
}
