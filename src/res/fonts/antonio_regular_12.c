/*******************************************************************************
 * Size: 12 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ANTONIO_REGULAR_12
#define ANTONIO_REGULAR_12 1
#endif

#if ANTONIO_REGULAR_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x1f, 0x31, 0xf2, 0xf, 0x10, 0xf0, 0xe, 0x0,
    0xc0, 0xa, 0x0, 0x90, 0x6, 0x11, 0xf3,

    /* U+0022 "\"" */
    0xa6, 0xc3, 0x84, 0xb2, 0x73, 0x90, 0x41, 0x50,

    /* U+0023 "#" */
    0x0, 0xf, 0xc, 0x30, 0x3, 0xc0, 0xf0, 0x0,
    0x69, 0x3c, 0x0, 0x9e, 0xde, 0xe6, 0x0, 0xe1,
    0xb5, 0x0, 0xcf, 0xcf, 0xc1, 0x4, 0xb1, 0xe0,
    0x0, 0x78, 0x4b, 0x0, 0xa, 0x57, 0x80, 0x0,
    0xd2, 0xa5, 0x0,

    /* U+0024 "$" */
    0x0, 0xb0, 0x0, 0x6e, 0x40, 0x5e, 0x8f, 0x7,
    0xc0, 0xf3, 0x2f, 0x44, 0x10, 0x4e, 0x40, 0x24,
    0x4f, 0x16, 0xc0, 0xe5, 0x3f, 0x8f, 0x30, 0x5e,
    0x50, 0x0, 0xb0, 0x0,

    /* U+0025 "%" */
    0x8, 0xdd, 0x10, 0x3, 0xc0, 0x0, 0xf, 0x9,
    0x70, 0xa, 0x50, 0x0, 0x1f, 0x8, 0x80, 0x1e,
    0x0, 0x0, 0x1f, 0x8, 0x80, 0x78, 0x4e, 0xe4,
    0x1f, 0x8, 0x80, 0xd2, 0xb6, 0x5b, 0xf, 0x1a,
    0x74, 0xb0, 0xc4, 0x3d, 0x7, 0xec, 0x1b, 0x40,
    0xc4, 0x3d, 0x0, 0x0, 0x2e, 0x0, 0xc4, 0x3d,
    0x0, 0x0, 0x87, 0x0, 0xb5, 0x4b, 0x0, 0x0,
    0xe1, 0x0, 0x4d, 0xd4,

    /* U+0026 "&" */
    0x5, 0xed, 0x30, 0xd, 0x56, 0x90, 0xc, 0x57,
    0x80, 0x7, 0xac, 0x20, 0x1, 0xf7, 0x0, 0x9,
    0xf8, 0x4, 0x4e, 0x3e, 0xa7, 0x89, 0xa, 0xd0,
    0x89, 0xc, 0xe0, 0x2d, 0xe8, 0xa6,

    /* U+0027 "'" */
    0x4c, 0x3a, 0x19, 0x5,

    /* U+0028 "(" */
    0xb, 0xb2, 0xf0, 0x3f, 0x3, 0xf0, 0x3f, 0x3,
    0xf0, 0x3f, 0x3, 0xf0, 0x3f, 0x2, 0xf1, 0xa,
    0xb0,

    /* U+0029 ")" */
    0x6d, 0x20, 0xb7, 0xa, 0x80, 0xa9, 0xa, 0x90,
    0xa9, 0xa, 0x90, 0xa9, 0xa, 0x80, 0xb7, 0x6d,
    0x20,

    /* U+002A "*" */
    0x1, 0x93, 0x21, 0xcc, 0xc9, 0x7, 0xec, 0x40,
    0x79, 0x57, 0x0, 0x31, 0x0,

    /* U+002B "+" */
    0x0, 0x90, 0x0, 0x1c, 0x0, 0x5d, 0xfd, 0x10,
    0x1c, 0x0,

    /* U+002C "," */
    0x16, 0x14, 0xf3, 0xa, 0x10, 0xa0,

    /* U+002D "-" */
    0x6c, 0xc2,

    /* U+002E "." */
    0x20, 0xf0,

    /* U+002F "/" */
    0x0, 0xf, 0x0, 0x4, 0xc0, 0x0, 0x98, 0x0,
    0xd, 0x40, 0x1, 0xf0, 0x0, 0x5b, 0x0, 0x9,
    0x70, 0x0, 0xd3, 0x0, 0x1f, 0x0, 0x5, 0xb0,
    0x0,

    /* U+0030 "0" */
    0xb, 0xfd, 0x24, 0xe1, 0xa9, 0x6c, 0x7, 0xb6,
    0xc0, 0x7c, 0x6c, 0x7, 0xc6, 0xc0, 0x7c, 0x6c,
    0x7, 0xc6, 0xc0, 0x7b, 0x4e, 0x1b, 0x90, 0xaf,
    0xd2,

    /* U+0031 "1" */
    0x8, 0xca, 0xdc, 0x7, 0xc0, 0x7c, 0x7, 0xc0,
    0x7c, 0x7, 0xc0, 0x7c, 0x7, 0xc0, 0x7c,

    /* U+0032 "2" */
    0x6, 0xfc, 0x10, 0xd6, 0xb6, 0xf, 0x29, 0x90,
    0xf2, 0x98, 0x6, 0xc, 0x60, 0x2, 0xf1, 0x0,
    0xa9, 0x0, 0x2f, 0x10, 0x8, 0xa0, 0x0, 0xd5,
    0x0, 0xf, 0xee, 0x60,

    /* U+0033 "3" */
    0x9, 0xfc, 0x12, 0xf2, 0xb8, 0x4e, 0x8, 0xa1,
    0x30, 0x8a, 0x0, 0xb, 0x50, 0xe, 0xe1, 0x0,
    0xc, 0x81, 0x40, 0x8b, 0x4d, 0x8, 0xa2, 0xf2,
    0xb7, 0x9, 0xfc, 0x10,

    /* U+0034 "4" */
    0x0, 0x4f, 0x10, 0xa, 0xf1, 0x0, 0xcf, 0x10,
    0x48, 0xf1, 0x9, 0x4f, 0x10, 0xd0, 0xf1, 0x3b,
    0xf, 0x16, 0xff, 0xfe, 0x0, 0xf, 0x10, 0x0,
    0xf1,

    /* U+0035 "5" */
    0x2f, 0xff, 0x12, 0xf1, 0x10, 0x2f, 0xcb, 0x2,
    0xf3, 0xf2, 0x4, 0xd, 0x40, 0x0, 0xd5, 0x15,
    0xd, 0x53, 0xe0, 0xd4, 0x2f, 0x2e, 0x20, 0xaf,
    0xa0,

    /* U+0036 "6" */
    0x9, 0xfc, 0x12, 0xf2, 0xc6, 0x5d, 0x9, 0x85,
    0xd0, 0x11, 0x6e, 0xcd, 0x26, 0xe3, 0xaa, 0x6d,
    0x6, 0xc5, 0xd0, 0x6c, 0x5d, 0x6, 0xc2, 0xf2,
    0x99, 0x8, 0xfd, 0x20,

    /* U+0037 "7" */
    0x5f, 0xff, 0xc0, 0x0, 0x99, 0x0, 0xe, 0x30,
    0x4, 0xe0, 0x0, 0x8a, 0x0, 0xc, 0x60, 0x1,
    0xf2, 0x0, 0x3f, 0x0, 0x6, 0xd0, 0x0, 0x8b,
    0x0,

    /* U+0038 "8" */
    0x9, 0xfc, 0x12, 0xf1, 0xc7, 0x4e, 0x9, 0x94,
    0xe0, 0xa9, 0x1f, 0x1c, 0x50, 0xbf, 0xf0, 0x2f,
    0x1c, 0x55, 0xd0, 0x98, 0x5d, 0x9, 0x93, 0xf1,
    0xc7, 0xa, 0xfc, 0x10,

    /* U+0039 "9" */
    0x1c, 0xf9, 0x6, 0xd3, 0xf2, 0x99, 0xe, 0x59,
    0x90, 0xd5, 0x89, 0xd, 0x56, 0xc0, 0xe5, 0x1c,
    0xef, 0x50, 0x10, 0xd5, 0x6b, 0xd, 0x44, 0xe2,
    0xf2, 0xb, 0xf9, 0x0,

    /* U+003A ":" */
    0x2, 0x1, 0xf5, 0x5, 0x10, 0x0, 0x0, 0x0,
    0x20, 0x1f, 0x50, 0x51,

    /* U+003B ";" */
    0x2a, 0x43, 0xf6, 0x0, 0x0, 0x0, 0x18, 0x42,
    0xf8, 0x7, 0x50, 0xa1, 0x5, 0x0,

    /* U+003C "<" */
    0x0, 0x1, 0x0, 0x8b, 0x3d, 0xb2, 0xa9, 0x0,
    0x3d, 0xa1, 0x0, 0x9b, 0x0, 0x2,

    /* U+003D "=" */
    0x7f, 0xfd, 0x0, 0x0, 0x7f, 0xfd,

    /* U+003E ">" */
    0x10, 0x0, 0x7b, 0x10, 0x8, 0xe5, 0x0, 0x5e,
    0x7, 0xe6, 0x7c, 0x20, 0x20, 0x0,

    /* U+003F "?" */
    0xa, 0xfa, 0x1, 0xf3, 0xf1, 0x2f, 0xf, 0x31,
    0x81, 0xf2, 0x0, 0x5f, 0x0, 0x6d, 0x50, 0x9,
    0x70, 0x0, 0x11, 0x0, 0x7, 0x50, 0x0, 0x97,
    0x0,

    /* U+0040 "@" */
    0x0, 0x8d, 0xdc, 0x30, 0x9, 0xa0, 0x2, 0xc1,
    0x1e, 0x1c, 0xaa, 0x66, 0x4a, 0x67, 0x1d, 0x39,
    0x68, 0x83, 0xd, 0x2a, 0x67, 0x93, 0xd, 0x2a,
    0x59, 0x67, 0x3d, 0x48, 0x2c, 0xb, 0xb5, 0xd1,
    0xb, 0x70, 0x0, 0x0, 0x1, 0xae, 0xd3, 0x0,

    /* U+0041 "A" */
    0x2, 0xf7, 0x0, 0x4, 0xfa, 0x0, 0x7, 0xcd,
    0x0, 0x9, 0x7f, 0x0, 0xc, 0x5d, 0x20, 0xe,
    0x2b, 0x50, 0x1f, 0x8, 0x80, 0x3f, 0xff, 0xa0,
    0x6b, 0x3, 0xd0, 0x89, 0x1, 0xf0,

    /* U+0042 "B" */
    0x1f, 0xfe, 0x41, 0xf2, 0x8b, 0x1f, 0x26, 0xc1,
    0xf2, 0x8a, 0x1f, 0xff, 0x51, 0xf2, 0x6c, 0x1f,
    0x23, 0xf1, 0xf2, 0x4f, 0x1f, 0x27, 0xc1, 0xff,
    0xe4,

    /* U+0043 "C" */
    0x7, 0xfd, 0x21, 0xf4, 0xb9, 0x3f, 0x7, 0xb4,
    0xf0, 0x7b, 0x4f, 0x1, 0x34, 0xf0, 0x0, 0x4f,
    0x3, 0x54, 0xf0, 0x7b, 0x3f, 0x7, 0xb0, 0xf3,
    0xb8, 0x7, 0xec, 0x10,

    /* U+0044 "D" */
    0x2f, 0xfd, 0x32, 0xf0, 0x9b, 0x2f, 0x6, 0xd2,
    0xf0, 0x5d, 0x2f, 0x5, 0xd2, 0xf0, 0x5d, 0x2f,
    0x5, 0xd2, 0xf0, 0x5d, 0x2f, 0x9, 0xa2, 0xff,
    0xd3,

    /* U+0045 "E" */
    0x2f, 0xfe, 0x2f, 0x10, 0x2f, 0x10, 0x2f, 0x10,
    0x2f, 0xec, 0x2f, 0x21, 0x2f, 0x10, 0x2f, 0x10,
    0x2f, 0x10, 0x2f, 0xff,

    /* U+0046 "F" */
    0x2f, 0xff, 0x2f, 0x10, 0x2f, 0x0, 0x2f, 0x0,
    0x2f, 0xec, 0x2f, 0x21, 0x2f, 0x0, 0x2f, 0x0,
    0x2f, 0x0, 0x2f, 0x0,

    /* U+0047 "G" */
    0x7, 0xed, 0x21, 0xf4, 0x99, 0x3f, 0x6, 0xb4,
    0xf0, 0x5a, 0x4f, 0x0, 0x4, 0xf2, 0xfb, 0x4f,
    0x5, 0xc4, 0xf0, 0x5c, 0x3f, 0x6, 0xc0, 0xf2,
    0x9c, 0x7, 0xea, 0xb0,

    /* U+0048 "H" */
    0x2f, 0x14, 0xe2, 0xf1, 0x4e, 0x2f, 0x14, 0xe2,
    0xf1, 0x4e, 0x2f, 0xff, 0xe2, 0xf1, 0x4e, 0x2f,
    0x14, 0xe2, 0xf1, 0x4e, 0x2f, 0x14, 0xe2, 0xf1,
    0x4e,

    /* U+0049 "I" */
    0x1f, 0x21, 0xf2, 0x1f, 0x21, 0xf2, 0x1f, 0x21,
    0xf2, 0x1f, 0x21, 0xf2, 0x1f, 0x21, 0xf2,

    /* U+004A "J" */
    0x0, 0xf, 0x30, 0x0, 0xf3, 0x0, 0xf, 0x30,
    0x0, 0xf3, 0x0, 0xf, 0x30, 0x0, 0xf3, 0x56,
    0xf, 0x38, 0xa0, 0xf3, 0x6c, 0x3f, 0x11, 0xcf,
    0x80,

    /* U+004B "K" */
    0x2f, 0x14, 0xe0, 0x2f, 0x1b, 0x80, 0x2f, 0x2f,
    0x20, 0x2f, 0x8b, 0x0, 0x2f, 0xe5, 0x0, 0x2f,
    0xe6, 0x0, 0x2f, 0x7d, 0x0, 0x2f, 0x1f, 0x30,
    0x2f, 0x19, 0xa0, 0x2f, 0x13, 0xf1,

    /* U+004C "L" */
    0x2f, 0x10, 0x2f, 0x10, 0x2f, 0x10, 0x2f, 0x10,
    0x2f, 0x10, 0x2f, 0x10, 0x2f, 0x10, 0x2f, 0x10,
    0x2f, 0x10, 0x2f, 0xff,

    /* U+004D "M" */
    0x2f, 0x70, 0xd, 0xc2, 0xfa, 0x0, 0xfc, 0x2f,
    0xc0, 0x3f, 0xc2, 0xde, 0x5, 0xcc, 0x2e, 0xc2,
    0x8a, 0xc2, 0xe9, 0x5b, 0x7c, 0x2e, 0x68, 0xd5,
    0xc2, 0xe3, 0xcd, 0x5c, 0x2e, 0xf, 0xa5, 0xc2,
    0xe0, 0xd7, 0x5c,

    /* U+004E "N" */
    0x2e, 0x0, 0xf1, 0x2f, 0x40, 0xf1, 0x2f, 0xa0,
    0xf1, 0x2e, 0xe0, 0xf1, 0x2e, 0xa5, 0xf1, 0x2f,
    0x5b, 0xe1, 0x2f, 0xe, 0xe1, 0x2f, 0xa, 0xf1,
    0x2f, 0x4, 0xf1, 0x2f, 0x0, 0xf1,

    /* U+004F "O" */
    0x8, 0xfe, 0x31, 0xf3, 0x9a, 0x4f, 0x6, 0xc4,
    0xf0, 0x6d, 0x4f, 0x6, 0xd4, 0xf0, 0x6d, 0x4f,
    0x6, 0xd3, 0xf0, 0x6c, 0x1f, 0x3a, 0xa0, 0x8f,
    0xd2,

    /* U+0050 "P" */
    0x2f, 0xfe, 0x42, 0xf1, 0x8b, 0x2f, 0x15, 0xd2,
    0xf1, 0x5d, 0x2f, 0x18, 0xb2, 0xfe, 0xf4, 0x2f,
    0x20, 0x2, 0xf1, 0x0, 0x2f, 0x10, 0x2, 0xf1,
    0x0,

    /* U+0051 "Q" */
    0x8, 0xfe, 0x31, 0xf3, 0x9a, 0x4f, 0x6, 0xc4,
    0xf0, 0x6d, 0x4f, 0x6, 0xd4, 0xf0, 0x6d, 0x4f,
    0x6, 0xd3, 0xf0, 0x6c, 0x1f, 0x29, 0xa0, 0x9f,
    0xe3, 0x0, 0x1d, 0x20, 0x0, 0x21,

    /* U+0052 "R" */
    0x2f, 0xfe, 0x52, 0xf1, 0x7c, 0x2f, 0x15, 0xd2,
    0xf1, 0x7b, 0x2f, 0xef, 0x42, 0xf1, 0x7a, 0x2f,
    0x15, 0xc2, 0xf1, 0x5d, 0x2f, 0x15, 0xd2, 0xf1,
    0x4e,

    /* U+0053 "S" */
    0xb, 0xfc, 0x14, 0xe1, 0xd6, 0x5d, 0xa, 0x71,
    0xf4, 0x43, 0x5, 0xf4, 0x0, 0x6, 0xf1, 0x4c,
    0xb, 0x84, 0xe0, 0x8a, 0x2f, 0x2b, 0x80, 0x9f,
    0xd2,

    /* U+0054 "T" */
    0xdf, 0xf9, 0xb, 0x80, 0xb, 0x80, 0xb, 0x80,
    0xb, 0x80, 0xb, 0x80, 0xb, 0x80, 0xb, 0x80,
    0xb, 0x80, 0xb, 0x80,

    /* U+0055 "U" */
    0x3f, 0x5, 0xd3, 0xf0, 0x5d, 0x3f, 0x5, 0xd3,
    0xf0, 0x5d, 0x3f, 0x5, 0xd3, 0xf0, 0x5d, 0x3f,
    0x5, 0xd3, 0xf0, 0x5d, 0x1f, 0x39, 0xb0, 0x8f,
    0xe3,

    /* U+0056 "V" */
    0x89, 0x2, 0xf0, 0x6b, 0x4, 0xd0, 0x3e, 0x7,
    0xa0, 0xf, 0x19, 0x80, 0xe, 0x3b, 0x50, 0xb,
    0x6d, 0x30, 0x8, 0x9f, 0x0, 0x5, 0xde, 0x0,
    0x3, 0xfb, 0x0, 0x0, 0xf9, 0x0,

    /* U+0057 "W" */
    0x88, 0x8, 0x90, 0x98, 0x6a, 0xa, 0xc0, 0xa6,
    0x4c, 0xd, 0xe0, 0xc4, 0x2e, 0xe, 0xc1, 0xd2,
    0xf, 0x2c, 0xa3, 0xf0, 0xe, 0x69, 0x77, 0xe0,
    0xb, 0xb7, 0x5b, 0xc0, 0x9, 0xf4, 0x3f, 0xa0,
    0x7, 0xf2, 0xf, 0x80, 0x5, 0xf0, 0xe, 0x60,

    /* U+0058 "X" */
    0x79, 0xc, 0x42, 0xe1, 0xf0, 0xd, 0x8b, 0x0,
    0x9f, 0x60, 0x4, 0xf2, 0x0, 0x6f, 0x10, 0xb,
    0xf6, 0x0, 0xf7, 0xb0, 0x4d, 0x1f, 0x8, 0x90,
    0xb4,

    /* U+0059 "Y" */
    0xb7, 0x8, 0xa6, 0xb0, 0xc5, 0x1f, 0x2f, 0x10,
    0xca, 0xc0, 0x7, 0xf7, 0x0, 0x3f, 0x30, 0x1,
    0xf2, 0x0, 0x1f, 0x20, 0x1, 0xf2, 0x0, 0x1f,
    0x20,

    /* U+005A "Z" */
    0x2f, 0xff, 0x0, 0x5, 0xe0, 0x0, 0x9a, 0x0,
    0xd, 0x60, 0x2, 0xf1, 0x0, 0x6d, 0x0, 0xa,
    0x90, 0x0, 0xe5, 0x0, 0x3f, 0x10, 0x5, 0xff,
    0xf0,

    /* U+005B "[" */
    0xbf, 0xab, 0x70, 0xb7, 0xb, 0x70, 0xb7, 0xb,
    0x70, 0xb7, 0xb, 0x70, 0xb7, 0xb, 0xfa,

    /* U+005C "\\" */
    0x3d, 0x0, 0x0, 0xf1, 0x0, 0xb, 0x50, 0x0,
    0x79, 0x0, 0x3, 0xd0, 0x0, 0xf, 0x10, 0x0,
    0xc4, 0x0, 0x8, 0x80, 0x0, 0x4c, 0x0, 0x0,
    0xf0,

    /* U+005D "]" */
    0xf, 0xf6, 0x0, 0xc6, 0x0, 0xc6, 0x0, 0xc6,
    0x0, 0xc6, 0x0, 0xc6, 0x0, 0xc6, 0x0, 0xc6,
    0x0, 0xc6, 0xf, 0xf6,

    /* U+005E "^" */
    0x0, 0x66, 0x0, 0x0, 0xff, 0x0, 0x4, 0xcc,
    0x40, 0x8, 0x98, 0x80, 0xc, 0x55, 0xc0, 0xf,
    0x21, 0xf1,

    /* U+005F "_" */
    0xae, 0xee, 0x10,

    /* U+0060 "`" */
    0x0, 0x4, 0xb3, 0x4, 0x70,

    /* U+0061 "a" */
    0x8, 0xfd, 0x20, 0xf3, 0xb8, 0x2f, 0x9, 0xa0,
    0x4, 0xda, 0xb, 0xaa, 0xa3, 0xf0, 0x9a, 0x4f,
    0x9, 0xa2, 0xf0, 0xaa, 0xb, 0xec, 0xa0,

    /* U+0062 "b" */
    0x2f, 0x10, 0x2, 0xf1, 0x0, 0x2f, 0xbe, 0x32,
    0xf4, 0x9a, 0x2f, 0x17, 0xb2, 0xf1, 0x7c, 0x2f,
    0x17, 0xc2, 0xf1, 0x7c, 0x2f, 0x17, 0xc2, 0xf4,
    0x9a, 0x2f, 0xbe, 0x40,

    /* U+0063 "c" */
    0x8, 0xfd, 0x11, 0xf3, 0xc6, 0x3f, 0xa, 0x84,
    0xf0, 0x33, 0x4f, 0x0, 0x4, 0xf0, 0x54, 0x3f,
    0xa, 0x81, 0xf2, 0xc6, 0x9, 0xfc, 0x10,

    /* U+0064 "d" */
    0x0, 0x9, 0xa0, 0x0, 0x9a, 0x9, 0xec, 0xa1,
    0xf2, 0xba, 0x3f, 0x9, 0xa4, 0xf0, 0x9a, 0x4f,
    0x9, 0xa4, 0xf0, 0x9a, 0x3f, 0x9, 0xa2, 0xf1,
    0xba, 0xb, 0xec, 0xa0,

    /* U+0065 "e" */
    0x8, 0xfc, 0x11, 0xf2, 0xc6, 0x3f, 0xa, 0x84,
    0xe0, 0xa8, 0x4f, 0xdd, 0x84, 0xf0, 0x11, 0x3f,
    0xa, 0x82, 0xf2, 0xc6, 0x9, 0xfc, 0x10,

    /* U+0066 "f" */
    0x7, 0xf5, 0xc, 0x60, 0x8f, 0xe5, 0xd, 0x60,
    0xd, 0x60, 0xd, 0x60, 0xd, 0x60, 0xd, 0x60,
    0xd, 0x60, 0xd, 0x60, 0xd, 0x60,

    /* U+0067 "g" */
    0x9, 0xec, 0xa2, 0xf2, 0xca, 0x4e, 0x9, 0xa4,
    0xe0, 0x9a, 0x4e, 0x9, 0xa4, 0xe0, 0x9a, 0x2f,
    0x2b, 0xa0, 0xae, 0xc9, 0x2, 0xc, 0x81, 0xcf,
    0xc1,

    /* U+0068 "h" */
    0x2f, 0x10, 0x2, 0xf1, 0x0, 0x2f, 0x9f, 0x62,
    0xf5, 0x8d, 0x2f, 0x15, 0xe2, 0xf1, 0x5e, 0x2f,
    0x15, 0xe2, 0xf1, 0x5e, 0x2f, 0x15, 0xe2, 0xf1,
    0x5e, 0x2f, 0x15, 0xe0,

    /* U+0069 "i" */
    0x2f, 0x10, 0x10, 0x2f, 0x12, 0xf1, 0x2f, 0x12,
    0xf1, 0x2f, 0x12, 0xf1, 0x2f, 0x12, 0xf1, 0x2f,
    0x10,

    /* U+006A "j" */
    0xf, 0x40, 0x10, 0xf, 0x40, 0xf4, 0xf, 0x40,
    0xf4, 0xf, 0x40, 0xf4, 0xf, 0x40, 0xf4, 0xf,
    0x48, 0xe1,

    /* U+006B "k" */
    0x2f, 0x10, 0x0, 0x2f, 0x10, 0x0, 0x2f, 0x16,
    0xc0, 0x2f, 0x1c, 0x60, 0x2f, 0x4e, 0x0, 0x2f,
    0xa8, 0x0, 0x2f, 0xf4, 0x0, 0x2f, 0xa9, 0x0,
    0x2f, 0x3f, 0x10, 0x2f, 0x1c, 0x70, 0x2f, 0x15,
    0xe0,

    /* U+006C "l" */
    0x2f, 0x12, 0xf1, 0x2f, 0x12, 0xf1, 0x2f, 0x12,
    0xf1, 0x2f, 0x12, 0xf1, 0x2f, 0x12, 0xf1, 0x2f,
    0x10,

    /* U+006D "m" */
    0x2f, 0x9e, 0x7c, 0xe2, 0x2f, 0x59, 0xf2, 0xc8,
    0x2f, 0x16, 0xd0, 0x99, 0x2f, 0x16, 0xd0, 0x99,
    0x2f, 0x16, 0xd0, 0x99, 0x2f, 0x16, 0xd0, 0x99,
    0x2f, 0x16, 0xd0, 0x99, 0x2f, 0x16, 0xd0, 0x99,
    0x2f, 0x16, 0xd0, 0x99,

    /* U+006E "n" */
    0x2f, 0x9f, 0x72, 0xf4, 0x8d, 0x2f, 0x15, 0xe2,
    0xf1, 0x5e, 0x2f, 0x15, 0xe2, 0xf1, 0x5e, 0x2f,
    0x15, 0xe2, 0xf1, 0x5e, 0x2f, 0x15, 0xe0,

    /* U+006F "o" */
    0x8, 0xfc, 0x11, 0xf2, 0xc7, 0x3f, 0x9, 0x94,
    0xf0, 0x9a, 0x4f, 0x9, 0xa4, 0xf0, 0x99, 0x3f,
    0x9, 0x91, 0xf2, 0xc7, 0x9, 0xfc, 0x10,

    /* U+0070 "p" */
    0x2f, 0xae, 0x42, 0xf4, 0x9a, 0x2f, 0x17, 0xc2,
    0xf1, 0x7c, 0x2f, 0x17, 0xc2, 0xf1, 0x7c, 0x2f,
    0x17, 0xc2, 0xf4, 0xaa, 0x2f, 0xbe, 0x32, 0xf1,
    0x0,

    /* U+0071 "q" */
    0xb, 0xec, 0xa2, 0xf1, 0xca, 0x4e, 0x9, 0xa4,
    0xe0, 0x9a, 0x4e, 0x9, 0xa4, 0xe0, 0x9a, 0x3e,
    0x9, 0xa2, 0xf2, 0xca, 0x9, 0xec, 0xa0, 0x0,
    0x9a,

    /* U+0072 "r" */
    0x2f, 0x98, 0x2f, 0x50, 0x2f, 0x10, 0x2f, 0x10,
    0x2f, 0x10, 0x2f, 0x10, 0x2f, 0x10, 0x2f, 0x10,
    0x2f, 0x10,

    /* U+0073 "s" */
    0x1c, 0xf9, 0x6, 0xc2, 0xf1, 0x6c, 0xe, 0x31,
    0xf5, 0x20, 0x5, 0xf5, 0x1, 0x26, 0xf1, 0x6c,
    0xe, 0x44, 0xe2, 0xe4, 0xb, 0xfb, 0x0,

    /* U+0074 "t" */
    0xe, 0x40, 0xaf, 0xe3, 0xe, 0x40, 0xe, 0x40,
    0xe, 0x40, 0xe, 0x40, 0xe, 0x40, 0xe, 0x40,
    0xe, 0x40, 0xa, 0xf3,

    /* U+0075 "u" */
    0x3f, 0x6, 0xd3, 0xf0, 0x6d, 0x3f, 0x6, 0xd3,
    0xf0, 0x6d, 0x3f, 0x6, 0xd3, 0xf0, 0x6d, 0x3f,
    0x6, 0xd2, 0xf1, 0x8d, 0xb, 0xeb, 0xd0,

    /* U+0076 "v" */
    0xa6, 0xf, 0x18, 0x81, 0xf0, 0x6a, 0x3d, 0x4,
    0xc5, 0xa0, 0x2e, 0x78, 0x0, 0xf9, 0x60, 0xd,
    0xc4, 0x0, 0xbf, 0x10, 0x9, 0xf0, 0x0,

    /* U+0077 "w" */
    0xa5, 0x3f, 0x8, 0x78, 0x75, 0xf2, 0xa5, 0x68,
    0x7d, 0x4b, 0x34, 0xa9, 0x96, 0xd1, 0x3b, 0xb4,
    0x9e, 0x1, 0xcc, 0x1b, 0xd0, 0xd, 0xc0, 0xeb,
    0x0, 0xd9, 0xd, 0x90, 0xb, 0x70, 0xb7, 0x0,

    /* U+0078 "x" */
    0x97, 0x1f, 0x4, 0xc5, 0xa0, 0xe, 0xc5, 0x0,
    0xaf, 0x0, 0x7, 0xd0, 0x0, 0xbf, 0x10, 0x1e,
    0xb6, 0x5, 0xa6, 0xb0, 0xa6, 0x1f, 0x10,

    /* U+0079 "y" */
    0x98, 0xc, 0x56, 0xa0, 0xe2, 0x4d, 0xf, 0x1,
    0xf2, 0xd0, 0xe, 0x6a, 0x0, 0xba, 0x80, 0x9,
    0xd5, 0x0, 0x6f, 0x20, 0x4, 0xf0, 0x5, 0xfb,
    0x0,

    /* U+007A "z" */
    0x6f, 0xf9, 0x0, 0xc7, 0x0, 0xf2, 0x4, 0xe0,
    0x9, 0xa0, 0xd, 0x50, 0x1f, 0x10, 0x6d, 0x0,
    0x8f, 0xf8,

    /* U+007B "{" */
    0x0, 0xcc, 0x2, 0xf1, 0x3, 0xf0, 0x3, 0xf0,
    0x6, 0xe0, 0xf, 0x70, 0x8, 0xe0, 0x3, 0xf0,
    0x3, 0xf0, 0x2, 0xf1, 0x0, 0xcc,

    /* U+007C "|" */
    0x71, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3,
    0xf3, 0xf3, 0xf3, 0xf3,

    /* U+007D "}" */
    0xf, 0x80, 0x5, 0xe0, 0x3, 0xf0, 0x3, 0xf0,
    0x2, 0xf2, 0x0, 0xbc, 0x2, 0xf4, 0x3, 0xf0,
    0x3, 0xf0, 0x4, 0xf0, 0xf, 0x80,

    /* U+007E "~" */
    0x0, 0x0, 0x0, 0xc, 0xd6, 0x6a, 0x2c, 0x5d,
    0xf4, 0x0, 0x0, 0x20
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 47, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 50, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 89, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 23, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 83, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 86, .adv_w = 204, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 92, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 39, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 180, .adv_w = 53, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 53, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 90, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 227, .adv_w = 76, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 237, .adv_w = 43, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 243, .adv_w = 65, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 245, .adv_w = 50, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 73, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 86, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 60, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 84, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 85, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 84, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 84, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 84, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 84, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 471, .adv_w = 84, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 84, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 52, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 539, .adv_w = 53, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 553, .adv_w = 68, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 567, .adv_w = 68, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 573, .adv_w = 68, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 587, .adv_w = 75, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 612, .adv_w = 132, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 88, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 89, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 86, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 735, .adv_w = 89, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 760, .adv_w = 72, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 780, .adv_w = 70, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 800, .adv_w = 88, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 828, .adv_w = 92, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 853, .adv_w = 49, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 868, .adv_w = 80, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 893, .adv_w = 84, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 923, .adv_w = 67, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 943, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 978, .adv_w = 95, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1008, .adv_w = 89, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1033, .adv_w = 83, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1058, .adv_w = 89, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1088, .adv_w = 89, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1113, .adv_w = 82, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1138, .adv_w = 60, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1158, .adv_w = 90, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1183, .adv_w = 86, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1213, .adv_w = 127, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1253, .adv_w = 76, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1278, .adv_w = 78, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1303, .adv_w = 72, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1328, .adv_w = 72, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1343, .adv_w = 81, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1368, .adv_w = 72, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1388, .adv_w = 97, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1406, .adv_w = 70, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1409, .adv_w = 61, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1414, .adv_w = 87, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1437, .adv_w = 88, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1465, .adv_w = 83, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1488, .adv_w = 88, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1516, .adv_w = 84, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1539, .adv_w = 58, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1561, .adv_w = 87, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1586, .adv_w = 91, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1614, .adv_w = 47, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1631, .adv_w = 50, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1649, .adv_w = 81, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1682, .adv_w = 47, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1699, .adv_w = 134, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1735, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1758, .adv_w = 86, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1781, .adv_w = 88, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1806, .adv_w = 87, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1831, .adv_w = 61, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1849, .adv_w = 75, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1872, .adv_w = 57, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1892, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1915, .adv_w = 71, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1938, .adv_w = 109, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1970, .adv_w = 70, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1993, .adv_w = 74, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2018, .adv_w = 64, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2036, .adv_w = 75, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2058, .adv_w = 50, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2070, .adv_w = 75, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2092, .adv_w = 105, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    34, 36,
    34, 40,
    34, 48,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 66,
    34, 86,
    34, 87,
    34, 88,
    34, 90,
    35, 13,
    35, 15,
    36, 34,
    37, 13,
    37, 15,
    37, 34,
    37, 55,
    37, 56,
    37, 58,
    39, 13,
    39, 15,
    39, 34,
    40, 55,
    43, 13,
    43, 15,
    44, 36,
    44, 40,
    44, 48,
    44, 52,
    44, 66,
    44, 70,
    44, 80,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 52,
    45, 53,
    45, 55,
    45, 56,
    45, 58,
    45, 88,
    45, 90,
    48, 13,
    48, 15,
    48, 34,
    48, 57,
    49, 13,
    49, 15,
    49, 34,
    49, 43,
    51, 55,
    51, 56,
    51, 58,
    55, 13,
    55, 15,
    55, 34,
    55, 36,
    55, 40,
    55, 43,
    55, 48,
    55, 66,
    55, 70,
    55, 72,
    55, 80,
    56, 15,
    56, 34,
    56, 48,
    56, 66,
    56, 68,
    56, 70,
    56, 72,
    58, 13,
    58, 15,
    58, 34,
    58, 48,
    58, 66,
    58, 84,
    67, 13,
    67, 15,
    68, 15,
    76, 70,
    76, 80,
    80, 66,
    80, 87,
    80, 88,
    80, 89,
    83, 13,
    83, 15,
    83, 66,
    83, 72,
    83, 80,
    87, 13,
    87, 15,
    88, 13,
    88, 15,
    88, 66,
    90, 13,
    90, 15,
    90, 80
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -2, -2, -2, -3, -2, -4, -5, -4,
    0, -1, -1, -1, -2, -6, -8, -1,
    -6, -7, -1, -1, -1, -1, -10, -11,
    -3, -1, -2, -6, 0, -1, -1, 0,
    -1, 0, 0, -2, -2, -2, -2, -1,
    -1, -3, -3, -4, 0, -1, -2, -3,
    -1, -1, -22, -24, -3, -4, -1, -1,
    0, -7, -6, -4, 0, 0, -4, 0,
    -1, -1, -1, -1, -4, -3, -1, -1,
    -1, -1, 0, -1, -1, -3, 0, -1,
    -1, -3, -4, -4, 0, 0, -1, 0,
    0, 0, -1, -7, -1, -1, -1, -2,
    -5, -2, -7, -1, -5, -8, 0
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 103,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t antonio_regular_12 = {
#else
lv_font_t antonio_regular_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ANTONIO_REGULAR_12*/

