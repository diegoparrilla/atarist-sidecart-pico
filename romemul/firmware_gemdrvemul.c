#include "include/firmware_gemdrvemul.h"

const uint16_t gemdrvemulROM[] = {
    0xABCD, 0xEF42, 0x0000, 0x0000, 0x08FA, 0x001E, 0x0000, 0x0000, 0x9AD2, 0x58CC, 0x0000, 0x0022, 0x454D, 0x554C, 0x0000, 0x7E3F,
    0x3F3C, 0x0025, 0x4E4E, 0x548F, 0x51CF, 0xFFF6, 0x4879, 0x000B, 0xFFFF, 0x4E4D, 0x588F, 0x0800, 0x0001, 0x6700, 0x0004, 0x4E75,
    0x4879, 0x00FA, 0x1478, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x4AB9, 0x00FB, 0x0018, 0x6704, 0x6100, 0x0268, 0x4AB9, 0x00FB, 0x41C4,
    0x6610, 0x4879, 0x00FA, 0x14F4, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x600E, 0x4879, 0x00FA, 0x14D1, 0x3F3C, 0x0009, 0x4E41, 0x5C8F,
    0x4879, 0x00FA, 0x15F7, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x6100, 0x114A, 0x6100, 0x00F2, 0x4879, 0x00FA, 0x1519, 0x3F3C, 0x0009,
    0x4E41, 0x5C8F, 0x6100, 0x01A0, 0x4A40, 0x6600, 0x00C4, 0x4879, 0x00FA, 0x15F7, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x4879, 0x00FA,
    0x15A2, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x6100, 0x0376, 0x4879, 0x00FA, 0x15F7, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x4879, 0x00FA,
    0x158C, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x1039, 0x00FB, 0x41BF, 0x0280, 0x0000, 0x00FF, 0x3F00, 0x3F3C, 0x0002, 0x4E41, 0x588F,
    0x2F3C, 0x0002, 0x003A, 0x4E41, 0x588F, 0x2F3C, 0x0002, 0x005C, 0x4E41, 0x588F, 0x2F3C, 0x0002, 0x0020, 0x4E41, 0x588F, 0x2F3C,
    0x0002, 0x0020, 0x4E41, 0x588F, 0x2F3C, 0x0002, 0x0020, 0x4E41, 0x588F, 0x4879, 0x00FA, 0x15F7, 0x3F3C, 0x0009, 0x4E41, 0x5C8F,
    0x6100, 0x030A, 0x4879, 0x00FA, 0x14BD, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x6100, 0x104E, 0x6100, 0x0318, 0x4A40, 0x6600, 0x0012,
    0x4879, 0x00FA, 0x15F7, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x4E75, 0x4879, 0x00FA, 0x15C1, 0x3F3C, 0x0009, 0x4E41, 0x3F3C, 0x0007,
    0x4E41, 0x508F, 0x4E75, 0x4879, 0x00FA, 0x14AA, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x2039, 0x00FB, 0x417C, 0x4840, 0xC0BC, 0x0000,
    0xFFFF, 0x3200, 0xE049, 0x3400, 0xC47C, 0x00FF, 0xD27C, 0x0030, 0x3001, 0x0280, 0x0000, 0x00FF, 0x3F00, 0x3F3C, 0x0002, 0x4E41,
    0x588F, 0x2F3C, 0x0002, 0x002E, 0x4E41, 0x588F, 0x3002, 0x4840, 0xE188, 0x7201, 0x48E7, 0xFF00, 0x2C00, 0xE19E, 0x2606, 0x0801,
    0x0000, 0x6704, 0xE88B, 0x6002, 0xE19E, 0x0283, 0x0000, 0x000F, 0x0C83, 0x0000, 0x000A, 0x6D08, 0x0683, 0x0000, 0x0037, 0x6006,
    0x0683, 0x0000, 0x0030, 0x3F03, 0x3F3C, 0x0002, 0x4E41, 0x588F, 0x51C9, 0xFFCA, 0x4CDF, 0x00FF, 0x2F3C, 0x0002, 0x002E, 0x4E41,
    0x588F, 0x2F3C, 0x0002, 0x002E, 0x4E41, 0x588F, 0x2F3C, 0x0002, 0x002E, 0x4E41, 0x588F, 0x4879, 0x00FA, 0x15F7, 0x3F3C, 0x0009,
    0x4E41, 0x5C8F, 0x4E75, 0x2E39, 0x00FB, 0x0008, 0x3F07, 0x7200, 0x303C, 0x0400, 0x6100, 0x0FC6, 0x3E1F, 0x4A40, 0x665E, 0x4A79,
    0x00FB, 0x000C, 0x6704, 0x7000, 0x4E75, 0x3007, 0x0280, 0x0000, 0x00FF, 0x80FC, 0x000A, 0x0280, 0x00FF, 0x00FF, 0x0680, 0x0030,
    0x0030, 0x4840, 0x3F00, 0x4840, 0x3F00, 0x3F3C, 0x0002, 0x4E41, 0x588F, 0x3F3C, 0x0002, 0x4E41, 0x588F, 0x4879, 0x00FA, 0x15F4,
    0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x3C3C, 0x0032, 0x3F3C, 0x0025, 0x4E4E, 0x548F, 0x51CE, 0xFFF6, 0x51CF, 0xFF92, 0x70FF, 0x4E75,
    0x4AB9, 0x00FB, 0x0010, 0x6720, 0x4879, 0x00FA, 0x1572, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x4879, 0x00FA, 0x15F7, 0x3F3C, 0x0009,
    0x4E41, 0x5C8F, 0x6000, 0x0108, 0x4879, 0x00FA, 0x1537, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x2E39, 0x00FB, 0x0008, 0x3007, 0x0280,
    0x0000, 0x00FF, 0x80FC, 0x000A, 0x0280, 0x00FF, 0x00FF, 0x0680, 0x0030, 0x0030, 0x4840, 0x3F00, 0x4840, 0x3F00, 0x3F3C, 0x0002,
    0x4E41, 0x588F, 0x3F3C, 0x0002, 0x4E41, 0x588F, 0x4879, 0x00FA, 0x15F4, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x2F07, 0x3E3C, 0x0032,
    0x3F3C, 0x0025, 0x4E4E, 0x548F, 0x51CF, 0xFFF6, 0x2E1F, 0x4AB9, 0x00FB, 0x0014, 0x6608, 0x51CF, 0xFFA4, 0x6000, 0x00D4, 0x4879,
    0x00FA, 0x15F7, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x4879, 0x00FA, 0x1556, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x2E39, 0x00FB, 0x0008,
    0x3007, 0x0280, 0x0000, 0x00FF, 0x80FC, 0x000A, 0x0280, 0x00FF, 0x00FF, 0x0680, 0x0030, 0x0030, 0x4840, 0x3F00, 0x4840, 0x3F00,
    0x3F3C, 0x0002, 0x4E41, 0x588F, 0x3F3C, 0x0002, 0x4E41, 0x588F, 0x4879, 0x00FA, 0x15F4, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x2F07,
    0x3E3C, 0x0032, 0x3F3C, 0x0025, 0x4E4E, 0x548F, 0x51CF, 0xFFF6, 0x2E1F, 0x4AB9, 0x00FB, 0x0010, 0x6606, 0x51CF, 0xFFA4, 0x6050,
    0x4879, 0x00FA, 0x15F7, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x4879, 0x00FB, 0x0010, 0x3F3C, 0x0006, 0x3F3C, 0x0019, 0x4E4E, 0x508F,
    0x7000, 0x3F3C, 0x0017, 0x4E4E, 0x548F, 0xD0BC, 0x3C00, 0x0000, 0x2E00, 0x3F07, 0x3F3C, 0x002D, 0x4E41, 0x588F, 0x4847, 0x3F07,
    0x3F3C, 0x002B, 0x4E41, 0x588F, 0x7000, 0x4E75, 0x7000, 0x4E75, 0x4879, 0x00FA, 0x15FF, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x70FF,
    0x4E75, 0x303C, 0x0405, 0x7200, 0x6000, 0x0DD2, 0x3039, 0x00FB, 0x41C2, 0x7201, 0xE1A9, 0x2038, 0x04C2, 0xD081, 0x21C0, 0x04C2,
    0x3F39, 0x00FB, 0x41C2, 0x3F3C, 0x000E, 0x4E41, 0x588F, 0x4E75, 0xB0BC, 0x0001, 0x0010, 0x6708, 0x2F3C, 0x00FA, 0x04E6, 0x6006,
    0x2F3C, 0x00FA, 0x04BA, 0x3F3C, 0x0021, 0x3F3C, 0x0005, 0x4E4D, 0x508F, 0x2600, 0x283C, 0x00FA, 0x04B6, 0x7208, 0x303C, 0x0401,
    0x6100, 0x0D7A, 0x4A40, 0x6602, 0x4E75, 0x70FF, 0x4E75, 0x5842, 0x5241, 0x5344, 0x4744, 0x0000, 0x0000, 0x1238, 0x8E21, 0x0238,
    0x0001, 0x8E21, 0x0839, 0x0000, 0x00FB, 0x0020, 0x672A, 0x0CB9, 0x0001, 0x0010, 0x00FB, 0x4178, 0x6604, 0x11C1, 0x8E21, 0x2F39,
    0x00FA, 0x04B6, 0x4E75, 0x0839, 0x0000, 0x00FB, 0x0020, 0x6708, 0x2F39, 0x00FA, 0x04B6, 0x4E75, 0x0817, 0x0005, 0x6704, 0x204F,
    0x6004, 0x4E68, 0x5D88, 0x4A79, 0x0000, 0x059E, 0x6702, 0x5448, 0x48E7, 0x7F3E, 0x3628, 0x0006, 0xB67C, 0x0036, 0x6700, 0x00B8,
    0xB67C, 0x0039, 0x6700, 0x00FC, 0xB67C, 0x003A, 0x6700, 0x0166, 0xB67C, 0x003B, 0x6700, 0x01D0, 0xB67C, 0x003C, 0x6700, 0x0330,
    0xB67C, 0x0047, 0x6700, 0x021C, 0xB67C, 0x003D, 0x6700, 0x026A, 0xB67C, 0x003E, 0x6700, 0x02D6, 0xB67C, 0x0056, 0x6700, 0x03F8,
    0xB67C, 0x0057, 0x6700, 0x053E, 0xB67C, 0x003F, 0x6700, 0x05E4, 0xB67C, 0x0040, 0x6700, 0x071A, 0xB67C, 0x0043, 0x6700, 0x04AE,
    0xB67C, 0x004E, 0x6700, 0x0828, 0xB67C, 0x004F, 0x6700, 0x08CE, 0xB67C, 0x004B, 0x6700, 0x0910, 0xB67C, 0x0041, 0x6700, 0x0346,
    0xB67C, 0x0042, 0x6700, 0x0444, 0x4CDF, 0x7CFE, 0x0CB9, 0x0001, 0x0010, 0x00FB, 0x4178, 0x6604, 0x11C1, 0x8E21, 0x2F39, 0x00FA,
    0x04B6, 0x4E75, 0x2628, 0x0008, 0x7204, 0x303C, 0x041A, 0x6100, 0x0C4C, 0x6000, 0xFFD4, 0x3628, 0x0008, 0x5343, 0xB679, 0x00FB,
    0x41C2, 0x6600, 0xFFC4, 0x2868, 0x000A, 0x7202, 0x303C, 0x0436, 0x6100, 0x0C2A, 0x2039, 0x00FB, 0x4140, 0x4A80, 0x660E, 0x2A79,
    0x00FB, 0x4144, 0x28DD, 0x28DD, 0x28DD, 0x28DD, 0x4CDF, 0x7CFE, 0x0CB9, 0x0001, 0x0010, 0x00FB, 0x4178, 0x6604, 0x11C1, 0x8E21,
    0x4E73, 0x2868, 0x0008, 0x0C2C, 0x003A, 0x0001, 0x660E, 0x1014, 0xB039, 0x00FB, 0x41BF, 0x6600, 0xFF70, 0x602A, 0x303C, 0x0403,
    0x7200, 0x6100, 0x0BD8, 0x3F3C, 0x0019, 0x4E41, 0x548F, 0x2F00, 0x303C, 0x0405, 0x7200, 0x6100, 0x0BC4, 0x201F, 0xB079, 0x00FB,
    0x41C2, 0x6600, 0xFF44, 0x303C, 0x0439, 0x720C, 0x2C3C, 0x0000, 0x0100, 0x6100, 0x0CC2, 0x3039, 0x00FB, 0x40F8, 0x48C0, 0x4CDF,
    0x7CFE, 0x0CB9, 0x0001, 0x0010, 0x00FB, 0x4178, 0x6604, 0x11C1, 0x8E21, 0x4E73, 0x2868, 0x0008, 0x0C2C, 0x003A, 0x0001, 0x660E,
    0x1014, 0xB039, 0x00FB, 0x41BF, 0x6600, 0xFEFE, 0x602A, 0x303C, 0x0403, 0x7200, 0x6100, 0x0B66, 0x3F3C, 0x0019, 0x4E41, 0x548F,
    0x2F00, 0x303C, 0x0405, 0x7200, 0x6100, 0x0B52, 0x201F, 0xB079, 0x00FB, 0x41C2, 0x6600, 0xFED2, 0x303C, 0x043A, 0x720C, 0x2C3C,
    0x0000, 0x0100, 0x6100, 0x0C50, 0x3039, 0x00FB, 0x40FC, 0x48C0, 0x4CDF, 0x7CFE, 0x0CB9, 0x0001, 0x0010, 0x00FB, 0x4178, 0x6604,
    0x11C1, 0x8E21, 0x4E73, 0x2868, 0x0008, 0x303C, 0x0403, 0x7200, 0x6100, 0x0B0A, 0x3F3C, 0x0019, 0x4E41, 0x548F, 0x2F00, 0x303C,
    0x0405, 0x7200, 0x6100, 0x0AF6, 0x201F, 0xB079, 0x00FB, 0x41C2, 0x6600, 0xFE76, 0x303C, 0x043B, 0x720C, 0x2C3C, 0x0000, 0x0100,
    0x6100, 0x0BF4, 0x3039, 0x00FB, 0x00DC, 0x48C0, 0x4CDF, 0x7CFE, 0x0CB9, 0x0001, 0x0010, 0x00FB, 0x4178, 0x6604, 0x11C1, 0x8E21,
    0x4E73, 0x2868, 0x0008, 0x3628, 0x000C, 0x4A43, 0x670C, 0x5343, 0xB679, 0x00FB, 0x41C2, 0x6600, 0xFE30, 0x7202, 0x303C, 0x0447,
    0x6100, 0x0A9A, 0x303C, 0x007F, 0x4BF9, 0x00FB, 0x0024, 0x4A15, 0x6706, 0x18DD, 0x51C8, 0xFFF8, 0x18BC, 0x0000, 0x303C, 0x0000,
    0x48C0, 0x4CDF, 0x7CFE, 0x0CB9, 0x0001, 0x0010, 0x00FB, 0x4178, 0x6604, 0x11C1, 0x8E21, 0x4E73, 0x2868, 0x0008, 0x3628, 0x000C,
    0x0C2C, 0x003A, 0x0001, 0x660E, 0x1014, 0xB039, 0x00FB, 0x41BF, 0x6600, 0xFDD6, 0x602A, 0x303C, 0x0403, 0x7200, 0x6100, 0x0A3E,
    0x3F3C, 0x0019, 0x4E41, 0x548F, 0x2F00, 0x303C, 0x0405, 0x7200, 0x6100, 0x0A2A, 0x201F, 0xB079, 0x00FB, 0x41C2, 0x6600, 0xFDAA,
    0x303C, 0x043D, 0x720C, 0x2C3C, 0x0000, 0x0100, 0x6100, 0x0B28, 0x2039, 0x00FB, 0x00E0, 0x4CDF, 0x7CFE, 0x0CB9, 0x0001, 0x0010,
    0x00FB, 0x4178, 0x6604, 0x11C1, 0x8E21, 0x4E73, 0x3628, 0x0008, 0xC6BC, 0x0000, 0xFFFF, 0xC6BC, 0x0000, 0xFFFF, 0xB6B9, 0x00FB,
    0x41B8, 0x6D00, 0xFD64, 0x7202, 0x303C, 0x043E, 0x6100, 0x09CE, 0x3039, 0x00FB, 0x40F4, 0x48C0, 0x4CDF, 0x7CFE, 0x0CB9, 0x0001,
    0x0010, 0x00FB, 0x4178, 0x6604, 0x11C1, 0x8E21, 0x4E73, 0x2868, 0x0008, 0x3628, 0x000C, 0x0C2C, 0x003A, 0x0001, 0x660E, 0x1014,
    0xB039, 0x00FB, 0x41BF, 0x6600, 0xFD20, 0x602A, 0x303C, 0x0403, 0x7200, 0x6100, 0x0988, 0x3F3C, 0x0019, 0x4E41, 0x548F, 0x2F00,
    0x303C, 0x0405, 0x7200, 0x6100, 0x0974, 0x201F, 0xB079, 0x00FB, 0x41C2, 0x6600, 0xFCF4, 0x303C, 0x043C, 0x720C, 0x2C3C, 0x0000,
    0x0100, 0x6100, 0x0A72, 0x3039, 0x00FB, 0x4120, 0x48C0, 0x4CDF, 0x7CFE, 0x0CB9, 0x0001, 0x0010, 0x00FB, 0x4178, 0x6604, 0x11C1,
    0x8E21, 0x4E73, 0x2868, 0x0008, 0x0C2C, 0x003A, 0x0001, 0x660E, 0x1014, 0xB039, 0x00FB, 0x41BF, 0x6600, 0xFCAE, 0x602A, 0x303C,
    0x0403, 0x7200, 0x6100, 0x0916, 0x3F3C, 0x0019, 0x4E41, 0x548F, 0x2F00, 0x303C, 0x0405, 0x7200, 0x6100, 0x0902, 0x201F, 0xB079,
    0x00FB, 0x41C2, 0x6600, 0xFC82, 0x303C, 0x0441, 0x720C, 0x2C3C, 0x0000, 0x0100, 0x6100, 0x0A00, 0x3039, 0x00FB, 0x4124, 0x48C0,
    0x4CDF, 0x7CFE, 0x0CB9, 0x0001, 0x0010, 0x00FB, 0x4178, 0x6604, 0x11C1, 0x8E21, 0x4E73, 0x2A68, 0x000A, 0x2C68, 0x000E, 0x0C2C,
    0x003A, 0x0001, 0x660E, 0x1014, 0xB039, 0x00FB, 0x41BF, 0x6600, 0xFC38, 0x602A, 0x303C, 0x0403, 0x7200, 0x6100, 0x08A0, 0x3F3C,
    0x0019, 0x4E41, 0x548F, 0x2F00, 0x303C, 0x0405, 0x7200, 0x6100, 0x088C, 0x201F, 0xB079, 0x00FB, 0x41C2, 0x6600, 0xFC0C, 0x4FEF,
    0xFF00, 0x284F, 0x363C, 0x007F, 0x18DD, 0x51CB, 0xFFFC, 0x363C, 0x007F, 0x18DE, 0x51CB, 0xFFFC, 0x284F, 0x303C, 0x0456, 0x720C,
    0x2C3C, 0x0000, 0x0100, 0x6100, 0x096E, 0x4FEF, 0x0100, 0x2039, 0x00FB, 0x4130, 0x4CDF, 0x7CFE, 0x0CB9, 0x0001, 0x0010, 0x00FB,
    0x4178, 0x6604, 0x11C1, 0x8E21, 0x4E73, 0x2828, 0x0008, 0x3628, 0x000C, 0x3A28, 0x000E, 0xC6BC, 0x0000, 0xFFFF, 0xB6B9, 0x00FB,
    0x41B8, 0x6D00, 0xFBA4, 0x720C, 0x303C, 0x0442, 0x6100, 0x080E, 0x2039, 0x00FB, 0x4128, 0x4CDF, 0x7CFE, 0x0CB9, 0x0001, 0x0010,
    0x00FB, 0x4178, 0x6604, 0x11C1, 0x8E21, 0x4E73, 0x2868, 0x0008, 0x3628, 0x000C, 0x3828, 0x000E, 0x0C2C, 0x003A, 0x0001, 0x660E,
    0x1014, 0xB039, 0x00FB, 0x41BF, 0x6600, 0xFB5E, 0x602A, 0x303C, 0x0403, 0x7200, 0x6100, 0x07C6, 0x3F3C, 0x0019, 0x4E41, 0x548F,
    0x2F00, 0x303C, 0x0405, 0x7200, 0x6100, 0x07B2, 0x201F, 0xB079, 0x00FB, 0x41C2, 0x6600, 0xFB32, 0x303C, 0x0443, 0x720C, 0x2C3C,
    0x0000, 0x0080, 0x6100, 0x08B0, 0x2039, 0x00FB, 0x412C, 0x4CDF, 0x7CFE, 0x0CB9, 0x0001, 0x0010, 0x00FB, 0x4178, 0x6604, 0x11C1,
    0x8E21, 0x4E73, 0x2868, 0x0008, 0x3828, 0x000C, 0x3628, 0x000E, 0x2A2C, 0x0000, 0x2C2C, 0x0004, 0xC6BC, 0x0000, 0xFFFF, 0xC8BC,
    0x0000, 0xFFFF, 0x0C2C, 0x003A, 0x0001, 0x660E, 0x1014, 0xB039, 0x00FB, 0x41BF, 0x6600, 0xFAD2, 0x602A, 0x303C, 0x0403, 0x7200,
    0x6100, 0x073A, 0x3F3C, 0x0019, 0x4E41, 0x548F, 0x2F00, 0x303C, 0x0405, 0x7200, 0x6100, 0x0726, 0x201F, 0xB079, 0x00FB, 0x41C2,
    0x6600, 0xFAA6, 0x2F0C, 0x7210, 0x303C, 0x0457, 0x6100, 0x070E, 0x285F, 0x4DF9, 0x00FB, 0x4138, 0x196E, 0x0002, 0x0000, 0x196E,
    0x0003, 0x0001, 0x4DF9, 0x00FB, 0x4134, 0x196E, 0x0002, 0x0002, 0x196E, 0x0003, 0x0003, 0x2039, 0x00FB, 0x413C, 0x4CDF, 0x7CFE,
    0x0CB9, 0x0001, 0x0010, 0x00FB, 0x4178, 0x6604, 0x11C1, 0x8E21, 0x4E73, 0x3628, 0x0008, 0x2828, 0x000A, 0x2868, 0x000E, 0xC6BC,
    0x0000, 0xFFFF, 0xB6B9, 0x00FB, 0x41B8, 0x6D00, 0xFA3C, 0x6116, 0x4CDF, 0x7CFE, 0x0CB9, 0x0001, 0x0010, 0x00FB, 0x4178, 0x6604,
    0x11C1, 0x8E21, 0x4E73, 0x2A04, 0x4286, 0x4AB9, 0x00FB, 0x41C4, 0x6624, 0x2A79, 0x0000, 0x04C6, 0x48ED, 0x00F8, 0x0100, 0x720C,
    0x303C, 0x0481, 0x6100, 0x0676, 0x2A79, 0x0000, 0x04C6, 0x4CED, 0x00F8, 0x0100, 0x6012, 0x48E7, 0x1F00, 0x720C, 0x303C, 0x0481,
    0x6100, 0x065A, 0x4CDF, 0x00F8, 0x4A40, 0x6706, 0x70BF, 0x6000, 0x00BE, 0x2039, 0x00FB, 0x00E4, 0x48C0, 0x6B00, 0x00B2, 0x4A80,
    0x6700, 0x00AA, 0x4BF9, 0x00FB, 0x00E8, 0x2E0C, 0x0807, 0x0000, 0x670E, 0x2E00, 0x5387, 0x18DD, 0x51CF, 0xFFFC, 0x6000, 0x007E,
    0x2E00, 0xE28F, 0x0807, 0x0001, 0x6712, 0x5387, 0x38DD, 0x51CF, 0xFFFC, 0x0800, 0x0000, 0x6764, 0x18DD, 0x6060, 0x2E00, 0xE48F,
    0x4A87, 0x6752, 0x5387, 0xBEBC, 0x0000, 0x0008, 0x6D36, 0x2F01, 0x2207, 0xE689, 0xCEBC, 0x0000, 0x0007, 0x5381, 0x28DD, 0x28DD,
    0x28DD, 0x28DD, 0x28DD, 0x28DD, 0x28DD, 0x28DD, 0x51C9, 0xFFEE, 0x221F, 0xBEBC, 0x0000, 0x0004, 0x6D0A, 0x28DD, 0x28DD, 0x28DD,
    0x28DD, 0x5987, 0x28DD, 0x51CF, 0xFFFC, 0x2E00, 0xCEBC, 0x0000, 0x0003, 0x6708, 0x5387, 0x18DD, 0x51CF, 0xFFFC, 0xDC80, 0xB0BC,
    0x0000, 0x4000, 0x6606, 0x9A80, 0x6A00, 0xFF00, 0x2006, 0x4E75, 0x3628, 0x0008, 0x2828, 0x000A, 0x2868, 0x000E, 0xC6BC, 0x0000,
    0xFFFF, 0xB6B9, 0x00FB, 0x41B8, 0x6D00, 0xF8FE, 0x6116, 0x4CDF, 0x7CFE, 0x0CB9, 0x0001, 0x0010, 0x00FB, 0x4178, 0x6604, 0x11C1,
    0x8E21, 0x4E73, 0x2A04, 0x4286, 0x3E3C, 0x0003, 0x4A47, 0x6606, 0x70BF, 0x6000, 0x00D8, 0x4AB9, 0x00FB, 0x41C4, 0x662C, 0x2A79,
    0x0000, 0x04C6, 0x48ED, 0x10F8, 0x0100, 0x303C, 0x0488, 0x720C, 0x2C3C, 0x0000, 0x0800, 0x6100, 0x063E, 0x2207, 0x2A79, 0x0000,
    0x04C6, 0x4CED, 0x10F8, 0x0100, 0x601A, 0x48E7, 0x1F08, 0x303C, 0x0488, 0x720C, 0x2C3C, 0x0000, 0x0800, 0x6100, 0x061A, 0x2207,
    0x4CDF, 0x10F8, 0x4A40, 0x6706, 0x70BF, 0x6000, 0x0080, 0x5347, 0x2439, 0x00FB, 0x40E8, 0x4A82, 0x6708, 0xB2B9, 0x00FB, 0x40EC,
    0x668A, 0xD9C2, 0x4AB9, 0x00FB, 0x41C4, 0x662A, 0x2A79, 0x0000, 0x04C6, 0x48ED, 0x10F8, 0x0100, 0x2839, 0x00FB, 0x40E8, 0x7208,
    0x303C, 0x0489, 0x6100, 0x04B6, 0x2A79, 0x0000, 0x04C6, 0x4CED, 0x10F8, 0x0100, 0x6018, 0x48E7, 0x1F08, 0x2839, 0x00FB, 0x40E8,
    0x7208, 0x303C, 0x0489, 0x6100, 0x0494, 0x4CDF, 0x10F8, 0x2039, 0x00FB, 0x40E8, 0x48C0, 0x6B14, 0x4A80, 0x670E, 0xDC80, 0xB07C,
    0x0800, 0x6606, 0x9A80, 0x6A00, 0xFF20, 0x2006, 0x4E75, 0x2868, 0x0008, 0x3828, 0x000C, 0x0C2C, 0x003A, 0x0001, 0x6600, 0x0010,
    0x1014, 0xB039, 0x00FB, 0x41BF, 0x672E, 0x6000, 0xF7DC, 0x303C, 0x0403, 0x7200, 0x6100, 0x0446, 0x3F3C, 0x0019, 0x4E41, 0x548F,
    0x2F00, 0x303C, 0x0405, 0x7200, 0x6100, 0x0432, 0x201F, 0xB079, 0x00FB, 0x41C2, 0x6600, 0xF7B2, 0x303C, 0x0403, 0x7200, 0x6100,
    0x041C, 0x3F3C, 0x002F, 0x4E41, 0x548F, 0x2F00, 0x303C, 0x0405, 0x7200, 0x6100, 0x0408, 0x2617, 0x2A0C, 0x303C, 0x044E, 0x720C,
    0x2C3C, 0x0000, 0x00C0, 0x6100, 0x050E, 0x2A5F, 0x3039, 0x00FB, 0x00A4, 0x48C0, 0x49F9, 0x00FB, 0x00A8, 0x243C, 0x0000, 0x002B,
    0x1ADC, 0x51CA, 0xFFFC, 0x4CDF, 0x7CFE, 0x0CB9, 0x0001, 0x0010, 0x00FB, 0x4178, 0x6604, 0x11C1, 0x8E21, 0x4E73, 0x303C, 0x0403,
    0x7200, 0x6100, 0x03B8, 0x3F3C, 0x002F, 0x4E41, 0x548F, 0x2F00, 0x303C, 0x0405, 0x7200, 0x6100, 0x03A4, 0x2617, 0x7204, 0x303C,
    0x048A, 0x6100, 0x0398, 0x2039, 0x00FB, 0x00D4, 0x4A80, 0x6710, 0x2600, 0x7204, 0x303C, 0x044F, 0x6100, 0x0382, 0x6000, 0xFF8C,
    0x201F, 0x6000, 0xF704, 0x2808, 0x3628, 0x0008, 0x2868, 0x000A, 0x2A0C, 0x2C28, 0x000E, 0x2E28, 0x0012, 0x0C2C, 0x003A, 0x0001,
    0x660E, 0x1014, 0xB039, 0x00FB, 0x41BF, 0x6600, 0xF6DC, 0x602A, 0x303C, 0x0403, 0x7200, 0x6100, 0x0344, 0x3F3C, 0x0019, 0x4E41,
    0x548F, 0x2F00, 0x303C, 0x0405, 0x7200, 0x6100, 0x0330, 0x201F, 0xB079, 0x00FB, 0x41C2, 0x6600, 0xF6B0, 0x7214, 0x303C, 0x044B,
    0x6100, 0x031A, 0x0C79, 0x0000, 0x00FB, 0x4164, 0x670C, 0x0C79, 0x0003, 0x00FB, 0x4164, 0x6600, 0xF690, 0x4243, 0x303C, 0x043D,
    0x720C, 0x2C3C, 0x0000, 0x0100, 0x6100, 0x040C, 0x2039, 0x00FB, 0x00E0, 0x6B00, 0x0224, 0x3600, 0x283C, 0x0000, 0x001C, 0x4AB9,
    0x00FB, 0x41C4, 0x661A, 0x2879, 0x0000, 0x04C6, 0x49EC, 0x0200, 0x6100, 0xFC34, 0x2879, 0x0000, 0x04C6, 0x49EC, 0x0200, 0x6010,
    0x9FFC, 0x0000, 0x001C, 0x284F, 0x2F0C, 0x6100, 0xFC1A, 0x285F, 0xB0BC, 0x0000, 0x001C, 0x6600, 0x01F6, 0x0C6C, 0x601A, 0x0000,
    0x6600, 0x01EC, 0x303C, 0x0484, 0x720C, 0x2C3C, 0x0000, 0x001C, 0x6100, 0x03A4, 0x4AB9, 0x00FB, 0x41C4, 0x6706, 0xDFFC, 0x0000,
    0x001C, 0x303C, 0x0403, 0x7200, 0x6100, 0x0272, 0x2079, 0x00FB, 0x4168, 0x4868, 0x0012, 0x4868, 0x000E, 0x42A7, 0x3F3C, 0x0005,
    0x3F3C, 0x004B, 0x4E41, 0x4FEF, 0x0010, 0x2840, 0x303C, 0x0405, 0x7200, 0x6100, 0x0248, 0x4BF9, 0x00FB, 0x4100, 0x262D, 0x0002,
    0x282D, 0x0006, 0x2A2D, 0x000A, 0x2C2D, 0x000E, 0x2E0C, 0xDEBC, 0x0000, 0x0100, 0x2947, 0x0008, 0x2943, 0x000C, 0xDE83, 0x2947,
    0x0010, 0x2944, 0x0014, 0xDE84, 0x2947, 0x0018, 0x2945, 0x001C, 0x303C, 0x0483, 0x720C, 0x2C3C, 0x0000, 0x0100, 0x6100, 0x0318,
    0x4BF9, 0x00FB, 0x4100, 0x49F9, 0x00FB, 0x4278, 0x286C, 0x0008, 0x282D, 0x0002, 0xD8AD, 0x0006, 0xD8AD, 0x000E, 0xD8BC, 0x0000,
    0xFFFF, 0x2639, 0x00FB, 0x00E0, 0x6100, 0xFB3C, 0x2639, 0x00FB, 0x00E0, 0x7202, 0x303C, 0x043E, 0x6100, 0x01C2, 0x3039, 0x00FB,
    0x40F4, 0x48C0, 0x6B00, 0x00F2, 0x4BF9, 0x00FB, 0x4278, 0x2A6D, 0x0008, 0x220D, 0x2C4D, 0x49F9, 0x00FB, 0x4100, 0xDBEC, 0x0002,
    0xDBEC, 0x0006, 0xDBEC, 0x000E, 0x4A95, 0x671A, 0x7000, 0xDDDD, 0xD396, 0x101D, 0x6710, 0xB03C, 0x0001, 0x6606, 0xDCFC, 0x00FE,
    0x60F0, 0xDCC0, 0x60EA, 0x2879, 0x00FB, 0x4278, 0x2A6C, 0x0018, 0x2A2C, 0x001C, 0x6100, 0x00E0, 0x0C79, 0x0003, 0x00FB, 0x4164,
    0x6700, 0x0090, 0x2079, 0x00FB, 0x4168, 0x317C, 0x0006, 0x0008, 0x2039, 0x00FB, 0x417C, 0xC0BC, 0x0000, 0xFFFF, 0xB07C, 0x1500,
    0x6428, 0x263C, 0x0000, 0x0014, 0x282F, 0x0032, 0x7208, 0x303C, 0x0487, 0x6100, 0x0128, 0x2F7C, 0x00FA, 0x111E, 0x0032, 0x2079,
    0x00FB, 0x4168, 0x317C, 0x0004, 0x0008, 0x42A8, 0x000A, 0x2179, 0x00FB, 0x4278, 0x000E, 0x42A8, 0x0012, 0x6000, 0xF48C, 0x48E7,
    0x7FFE, 0x303C, 0x0403, 0x7200, 0x6100, 0x00F2, 0x2F39, 0x00FB, 0x4278, 0x3F3C, 0x0049, 0x4E41, 0x5C8F, 0x303C, 0x0405, 0x7200,
    0x6100, 0x00DA, 0x48C0, 0x4CDF, 0x7FFE, 0x2F39, 0x00FB, 0x41C8, 0x4E75, 0x2039, 0x00FB, 0x4278, 0x4CDF, 0x7CFE, 0x0CB9, 0x0001,
    0x0010, 0x00FB, 0x4178, 0x6604, 0x11C1, 0x8E21, 0x4E73, 0x4AB9, 0x00FB, 0x41C4, 0x6706, 0xDFFC, 0x0000, 0x001C, 0x2639, 0x00FB,
    0x00E0, 0x7202, 0x303C, 0x043E, 0x6100, 0x0092, 0x3039, 0x00FB, 0x40F4, 0x48C0, 0x60C2, 0x4A85, 0x6706, 0x421D, 0x5385, 0x66FA,
    0x4E75, 0x2038, 0x05A0, 0x6700, 0x001A, 0x2040, 0x2018, 0x6700, 0x0012, 0xB0BC, 0x5F4D, 0x4348, 0x6704, 0x5848, 0x60EE, 0x2818,
    0x6002, 0x4284, 0x2F04, 0x263C, 0x0000, 0x0000, 0x7208, 0x303C, 0x0487, 0x6100, 0x0048, 0x201F, 0x4E75, 0x3F3C, 0x0030, 0x4E41,
    0x548F, 0xC0BC, 0x0000, 0xFFFF, 0x0C78, 0x00FC, 0x0004, 0x6608, 0x3239, 0x00FC, 0x0002, 0x6006, 0x3239, 0x00E0, 0x0002, 0xC2BC,
    0x0000, 0xFFFF, 0x4841, 0x8081, 0x263C, 0x0000, 0x0001, 0x2800, 0x7208, 0x303C, 0x0487, 0x6100, 0x0004, 0x4E75, 0x205F, 0x2C3C,
    0x0000, 0x002A, 0x4AB9, 0x00FB, 0x41C4, 0x6608, 0x2479, 0x0000, 0x04C6, 0x6006, 0x4FEF, 0xFFD6, 0x244F, 0x264A, 0x43F9, 0x00FA,
    0x130C, 0xE44E, 0x5346, 0x24D9, 0x51CE, 0xFFFC, 0x2448, 0x2439, 0x00FB, 0x0004, 0x5841, 0x207C, 0x00FB, 0x0000, 0x4840, 0x1039,
    0x00FB, 0xABCD, 0x4840, 0x2248, 0xD2C0, 0x1011, 0x2008, 0x3001, 0x2240, 0x1011, 0x4A41, 0x6700, 0x0088, 0x3002, 0x2240, 0x1011,
    0xB27C, 0x0002, 0x6700, 0x007A, 0x4842, 0x3002, 0x2240, 0x1011, 0xB27C, 0x0004, 0x6700, 0x006A, 0x3003, 0x2240, 0x1011, 0xB27C,
    0x0006, 0x6700, 0x005C, 0x4843, 0x3003, 0x2240, 0x1011, 0xB27C, 0x0008, 0x6700, 0x004C, 0x3004, 0x2240, 0x1011, 0xB27C, 0x000A,
    0x6700, 0x003E, 0x4844, 0x3004, 0x2240, 0x1011, 0xB27C, 0x000C, 0x672E, 0x3005, 0x2240, 0x1011, 0xB27C, 0x000E, 0x6722, 0x4845,
    0x3005, 0x2240, 0x1011, 0xB27C, 0x0010, 0x6714, 0x3006, 0x2240, 0x1011, 0xB27C, 0x0012, 0x6708, 0x4846, 0x3006, 0x2240, 0x1011,
    0x4842, 0x2C3C, 0x000F, 0xFFFF, 0x7000, 0x4ED3, 0xB4B9, 0x00FB, 0x0000, 0x6706, 0x5386, 0x66F4, 0x5380, 0x2C3C, 0x0000, 0x0001,
    0x5386, 0x66FC, 0x4AB9, 0x00FB, 0x41C4, 0x6704, 0x4FEF, 0x002A, 0x4ED2, 0x4E71, 0x4E71, 0x205F, 0x2E3C, 0x0000, 0x002A, 0x4AB9,
    0x00FB, 0x41C4, 0x6608, 0x2479, 0x0000, 0x04C6, 0x6006, 0x4FEF, 0xFFD6, 0x244F, 0x264A, 0x43F9, 0x00FA, 0x144E, 0xE44F, 0x5B47,
    0x24D9, 0x24D9, 0x24D9, 0x24D9, 0x24D9, 0x51CF, 0xFFFC, 0x2448, 0x2439, 0x00FB, 0x0004, 0x5841, 0xD246, 0x5241, 0xE249, 0xE349,
    0x207C, 0x00FB, 0x0000, 0x4840, 0x1039, 0x00FB, 0xABCD, 0x4840, 0x2248, 0xD2C0, 0x1011, 0x2008, 0x3001, 0x2240, 0x1211, 0x3002,
    0x2240, 0x1211, 0x4842, 0x3002, 0x2240, 0x1211, 0x3003, 0x2240, 0x1211, 0x4843, 0x3003, 0x2240, 0x1211, 0x3004, 0x2240, 0x1211,
    0x4844, 0x3004, 0x2240, 0x1211, 0x3005, 0x2240, 0x1211, 0x4845, 0x3005, 0x2240, 0x1211, 0xE24E, 0x5346, 0x4287, 0x200C, 0x0800,
    0x0000, 0x6716, 0x2008, 0x161C, 0xE14B, 0x161C, 0x3003, 0x2240, 0x1211, 0xDE43, 0x51CE, 0xFFF0, 0x6048, 0x2008, 0xBCBC, 0x0000,
    0x0004, 0x6D00, 0x0032, 0x2206, 0xE489, 0xCCBC, 0x0000, 0x0003, 0x5381, 0x301C, 0xDE40, 0x2240, 0x1011, 0x301C, 0xDE40, 0x2240,
    0x1011, 0x301C, 0xDE40, 0x2240, 0x1011, 0x301C, 0xDE40, 0x2240, 0x1011, 0x51C9, 0xFFDE, 0x301C, 0xDE40, 0x2240, 0x1211, 0x51CE,
    0xFFF6, 0x4842, 0x2C3C, 0x000F, 0xFFFF, 0x7000, 0x4ED3, 0xB4B9, 0x00FB, 0x0000, 0x6706, 0x5386, 0x66F4, 0x5380, 0x2C3C, 0x0000,
    0x0001, 0x5386, 0x66FC, 0x4AB9, 0x00FB, 0x41C4, 0x6704, 0x4FEF, 0x002A, 0x4ED2, 0x4E71, 0x4E71, 0x5369, 0x6465, 0x6361, 0x7254,
    0x7269, 0x6467, 0x6520, 0x6D75, 0x6C74, 0x6964, 0x6576, 0x6963, 0x650D, 0x0A0A, 0x4745, 0x4D44, 0x5249, 0x5645, 0x202D, 0x2076,
    0x302E, 0x302E, 0x320D, 0x0A0D, 0x0A00, 0x5B2E, 0x2E5D, 0x2054, 0x4F53, 0x2076, 0x6572, 0x7369, 0x6F6E, 0x3A20, 0x005B, 0x2E2E,
    0x5D20, 0x5365, 0x7420, 0x7665, 0x6374, 0x6F72, 0x732E, 0x2E2E, 0x005B, 0x2E2E, 0x5D20, 0x5573, 0x696E, 0x6720, 0x7374, 0x6163,
    0x6B20, 0x6173, 0x2074, 0x656D, 0x7020, 0x6275, 0x6666, 0x6572, 0x2E2E, 0x2E00, 0x5B2E, 0x2E5D, 0x2055, 0x7369, 0x6E67, 0x205F,
    0x6473, 0x6B62, 0x7566, 0x2061, 0x7320, 0x7465, 0x6D70, 0x2062, 0x7566, 0x6665, 0x722E, 0x2E2E, 0x005B, 0x2E2E, 0x5D20, 0x4D6F,
    0x756E, 0x7469, 0x6E67, 0x206D, 0x6963, 0x726F, 0x5344, 0x2063, 0x6172, 0x642E, 0x2E2E, 0x005B, 0x2E2E, 0x5D20, 0x4E65, 0x7477,
    0x6F72, 0x6B20, 0x696E, 0x6974, 0x6961, 0x6C69, 0x7A61, 0x7469, 0x6F6E, 0x2E2E, 0x2E00, 0x5B2E, 0x2E5D, 0x204E, 0x5450, 0x2073,
    0x796E, 0x6368, 0x726F, 0x6E69, 0x7A61, 0x7469, 0x6F6E, 0x2E2E, 0x2E00, 0x5B2E, 0x2E5D, 0x2052, 0x5443, 0x2061, 0x6C72, 0x6561,
    0x6479, 0x2073, 0x7461, 0x7274, 0x6564, 0x2E00, 0x5B2E, 0x2E5D, 0x2045, 0x6D75, 0x6C61, 0x7469, 0x6E67, 0x2064, 0x7269, 0x7665,
    0x2000, 0x5B2E, 0x2E5D, 0x2047, 0x454D, 0x4452, 0x4956, 0x4520, 0x6472, 0x6976, 0x6572, 0x206C, 0x6F61, 0x6465, 0x642E, 0x2E2E,
    0x000D, 0x0A45, 0x7272, 0x6F72, 0x2063, 0x6F6D, 0x6D75, 0x6E69, 0x6361, 0x7469, 0x6F6E, 0x2E20, 0x506F, 0x7765, 0x7220, 0x6379,
    0x636C, 0x6520, 0x7468, 0x6520, 0x636F, 0x6D70, 0x7574, 0x6572, 0x2E0D, 0x0A00, 0x0808, 0x000D, 0x5B4F, 0x4B5D, 0x0D0A, 0x0054,
    0x696D, 0x656F, 0x7574, 0x210D, 0x0A00, 0x0000, 0x0000, 0x0000
};
uint16_t gemdrvemulROM_length = sizeof(gemdrvemulROM) / sizeof(gemdrvemulROM[0]);

