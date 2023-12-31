/*******************************************************************************
 * Size: 16 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ANTONIO_REGULAR_16
#define ANTONIO_REGULAR_16 1
#endif

#if ANTONIO_REGULAR_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0xdf, 0xce, 0xbd, 0xac, 0x9b, 0x8a, 0x8a, 0x79,
    0x68, 0x57, 0x35, 0x0, 0xab, 0xde,

    /* U+0022 "\"" */
    0x3f, 0x3c, 0xa2, 0xf2, 0xa9, 0xf, 0x9, 0x70,
    0xd0, 0x76, 0xa, 0x5, 0x40, 0x0, 0x0,

    /* U+0023 "#" */
    0x0, 0xe, 0x60, 0xf5, 0x0, 0x1f, 0x32, 0xf2,
    0x0, 0x4f, 0x5, 0xf0, 0x0, 0x7d, 0x8, 0xc0,
    0x0, 0xaa, 0xb, 0x90, 0x4f, 0xff, 0xff, 0xf9,
    0x2, 0xf5, 0x3f, 0x51, 0x4, 0xf1, 0x5f, 0x0,
    0xbf, 0xff, 0xff, 0xf3, 0x1b, 0xb2, 0xca, 0x20,
    0xd, 0x70, 0xe6, 0x0, 0xf, 0x42, 0xf3, 0x0,
    0x4f, 0x15, 0xf0, 0x0, 0x7e, 0x8, 0xc0, 0x0,

    /* U+0024 "$" */
    0x0, 0x3c, 0x0, 0x0, 0x4c, 0x0, 0x8, 0xff,
    0xc0, 0x2f, 0x96, 0xf5, 0x4f, 0x40, 0xf8, 0x3f,
    0x70, 0xe9, 0xd, 0xe2, 0x21, 0x3, 0xfd, 0x10,
    0x0, 0x4f, 0xd0, 0x3, 0x16, 0xf7, 0x3f, 0x50,
    0xeb, 0x2f, 0x60, 0xcc, 0xf, 0xc5, 0xfa, 0x5,
    0xff, 0xd2, 0x0, 0x1e, 0x0, 0x0, 0x1e, 0x0,

    /* U+0025 "%" */
    0x1c, 0xfd, 0x40, 0x0, 0x9, 0xc0, 0x0, 0x9,
    0xd2, 0xae, 0x0, 0x0, 0xe6, 0x0, 0x0, 0xba,
    0x6, 0xf0, 0x0, 0x5f, 0x0, 0x0, 0xc, 0xa0,
    0x6f, 0x10, 0xc, 0x90, 0x0, 0x0, 0xca, 0x6,
    0xf1, 0x2, 0xf3, 0x0, 0x0, 0xc, 0xa0, 0x6f,
    0x10, 0x8d, 0x4, 0xef, 0xc2, 0xca, 0x6, 0xf0,
    0xe, 0x60, 0xdb, 0x4e, 0x9a, 0xd1, 0x9e, 0x5,
    0xf1, 0xf, 0x60, 0xac, 0x3e, 0xff, 0x60, 0xba,
    0x0, 0xf6, 0xa, 0xc0, 0x2, 0x10, 0x2f, 0x40,
    0xf, 0x60, 0xac, 0x0, 0x0, 0x8, 0xd0, 0x0,
    0xf6, 0xa, 0xc0, 0x0, 0x0, 0xe7, 0x0, 0xf,
    0x60, 0xac, 0x0, 0x0, 0x5f, 0x10, 0x0, 0xda,
    0x2d, 0x90, 0x0, 0xb, 0xb0, 0x0, 0x4, 0xdf,
    0xc1,

    /* U+0026 "&" */
    0x0, 0x8e, 0xe5, 0x0, 0x4, 0xf6, 0x7f, 0x0,
    0x7, 0xf0, 0x1f, 0x10, 0x6, 0xf2, 0x3f, 0x0,
    0x1, 0xf6, 0xab, 0x0, 0x0, 0xbe, 0xf2, 0x0,
    0x0, 0x6f, 0x80, 0x0, 0x1, 0xef, 0x90, 0x11,
    0xb, 0xe8, 0xf1, 0xc8, 0x3f, 0x61, 0xfc, 0xf1,
    0x6f, 0x10, 0x8f, 0x80, 0x6f, 0x0, 0x6f, 0x50,
    0x3f, 0x85, 0xfe, 0xd0, 0x7, 0xee, 0x82, 0xf4,

    /* U+0027 "'" */
    0x1f, 0x50, 0xf4, 0xe, 0x20, 0xc1, 0xa, 0x0,
    0x0,

    /* U+0028 "(" */
    0x3d, 0xbc, 0xe3, 0xea, 0xf, 0xa0, 0xfa, 0xf,
    0xa0, 0xfa, 0xf, 0xa0, 0xfa, 0xf, 0xa0, 0xfa,
    0xf, 0xa0, 0xfa, 0xd, 0xc0, 0x6f, 0xb0, 0x1,

    /* U+0029 ")" */
    0x4f, 0x90, 0x18, 0xf3, 0x3, 0xf6, 0x3, 0xf6,
    0x3, 0xf6, 0x3, 0xf6, 0x3, 0xf6, 0x3, 0xf6,
    0x3, 0xf6, 0x3, 0xf6, 0x3, 0xf6, 0x3, 0xf6,
    0x3, 0xf6, 0x6, 0xf4, 0x4f, 0xc0, 0x2, 0x0,

    /* U+002A "*" */
    0x0, 0xd, 0x50, 0x0, 0xc7, 0xb6, 0xd5, 0x3,
    0xbf, 0xe6, 0x0, 0x6d, 0xee, 0x91, 0xa, 0x4b,
    0x4a, 0x40, 0x0, 0xb4, 0x0,

    /* U+002B "+" */
    0x0, 0x0, 0x0, 0x0, 0x7b, 0x0, 0x0, 0x7b,
    0x0, 0x2f, 0xff, 0xf7, 0x2, 0x8c, 0x21, 0x0,
    0x7b, 0x0,

    /* U+002C "," */
    0xd, 0xd1, 0xff, 0x3, 0xc0, 0x77, 0x4, 0x10,

    /* U+002D "-" */
    0x4f, 0xff, 0x30, 0x22, 0x20,

    /* U+002E "." */
    0x56, 0xab,

    /* U+002F "/" */
    0x0, 0x0, 0xf6, 0x0, 0x4, 0xf2, 0x0, 0x8,
    0xe0, 0x0, 0xb, 0xa0, 0x0, 0xf, 0x70, 0x0,
    0x3f, 0x30, 0x0, 0x7f, 0x0, 0x0, 0xbb, 0x0,
    0x0, 0xf7, 0x0, 0x3, 0xf3, 0x0, 0x7, 0xf0,
    0x0, 0xb, 0xb0, 0x0, 0xe, 0x70, 0x0, 0x3f,
    0x30, 0x0,

    /* U+0030 "0" */
    0x4, 0xdf, 0xe5, 0x0, 0xde, 0x6d, 0xf0, 0x1f,
    0x70, 0x5f, 0x33, 0xf6, 0x4, 0xf5, 0x3f, 0x60,
    0x4f, 0x53, 0xf6, 0x4, 0xf5, 0x3f, 0x60, 0x4f,
    0x53, 0xf6, 0x4, 0xf5, 0x3f, 0x60, 0x4f, 0x53,
    0xf6, 0x4, 0xf5, 0x2f, 0x60, 0x4f, 0x41, 0xf8,
    0x6, 0xf3, 0xd, 0xe6, 0xde, 0x0, 0x3d, 0xfd,
    0x50,

    /* U+0031 "1" */
    0x0, 0xbb, 0x3b, 0xfb, 0x89, 0xfb, 0x0, 0xeb,
    0x0, 0xeb, 0x0, 0xeb, 0x0, 0xeb, 0x0, 0xeb,
    0x0, 0xeb, 0x0, 0xeb, 0x0, 0xeb, 0x0, 0xeb,
    0x0, 0xeb, 0x0, 0xeb,

    /* U+0032 "2" */
    0x9, 0xfd, 0x30, 0x6f, 0x9d, 0xc0, 0x9f, 0x7,
    0xf0, 0xbd, 0x6, 0xf1, 0xbd, 0x7, 0xf0, 0x78,
    0x9, 0xe0, 0x0, 0xe, 0x90, 0x0, 0x7f, 0x30,
    0x1, 0xfa, 0x0, 0x8, 0xf2, 0x0, 0xe, 0xa0,
    0x0, 0x4f, 0x40, 0x0, 0x8f, 0x43, 0x30, 0xaf,
    0xff, 0xf0,

    /* U+0033 "3" */
    0x2, 0xcf, 0xc3, 0x0, 0xbe, 0x7d, 0xd0, 0xf,
    0x90, 0x6f, 0x20, 0xe7, 0x5, 0xf3, 0x0, 0x0,
    0x6f, 0x20, 0x0, 0x1b, 0xe0, 0x0, 0x3f, 0xf4,
    0x0, 0x0, 0x5d, 0xb0, 0x0, 0x0, 0x7f, 0x10,
    0x73, 0x5, 0xf4, 0x1f, 0x70, 0x5f, 0x40, 0xf8,
    0x6, 0xf2, 0xc, 0xe6, 0xde, 0x0, 0x2c, 0xfc,
    0x30,

    /* U+0034 "4" */
    0x0, 0x5, 0xf7, 0x0, 0x0, 0xaf, 0x70, 0x0,
    0xe, 0xf7, 0x0, 0x4, 0xcf, 0x70, 0x0, 0x88,
    0xf7, 0x0, 0xd, 0x4f, 0x70, 0x2, 0xf0, 0xf7,
    0x0, 0x7b, 0xf, 0x70, 0xc, 0x70, 0xf7, 0x1,
    0xf3, 0xf, 0x70, 0x3f, 0xff, 0xff, 0x90, 0x33,
    0x3f, 0x92, 0x0, 0x0, 0xf7, 0x0, 0x0, 0xf,
    0x70,

    /* U+0035 "5" */
    0xdf, 0xff, 0x7d, 0xc7, 0x73, 0xda, 0x0, 0xd,
    0xa0, 0x0, 0xde, 0xfe, 0x2d, 0xd5, 0xf8, 0x97,
    0xc, 0xa0, 0x0, 0xcc, 0x0, 0xc, 0xc4, 0x20,
    0xcc, 0xf9, 0xc, 0xcf, 0x90, 0xcb, 0xce, 0x7f,
    0x73, 0xdf, 0xb1,

    /* U+0036 "6" */
    0x2, 0xcf, 0xd3, 0x0, 0xce, 0x7d, 0xd0, 0xf,
    0x80, 0x8f, 0x2, 0xf7, 0x6, 0xe1, 0x2f, 0x70,
    0x0, 0x2, 0xfc, 0xff, 0x80, 0x2f, 0xc5, 0xbf,
    0x12, 0xf7, 0x4, 0xf5, 0x2f, 0x70, 0x3f, 0x62,
    0xf7, 0x2, 0xf6, 0x1f, 0x70, 0x2f, 0x60, 0xf9,
    0x4, 0xf4, 0xb, 0xf7, 0xcf, 0x0, 0x2c, 0xfe,
    0x60,

    /* U+0037 "7" */
    0x1f, 0xff, 0xff, 0x60, 0x66, 0x69, 0xf4, 0x0,
    0x0, 0x9e, 0x0, 0x0, 0xe, 0xa0, 0x0, 0x4,
    0xf5, 0x0, 0x0, 0x8f, 0x0, 0x0, 0xd, 0xc0,
    0x0, 0x1, 0xf8, 0x0, 0x0, 0x4f, 0x50, 0x0,
    0x8, 0xf1, 0x0, 0x0, 0xbf, 0x0, 0x0, 0xd,
    0xd0, 0x0, 0x0, 0xfb, 0x0, 0x0, 0x1f, 0x90,
    0x0,

    /* U+0038 "8" */
    0x3, 0xcf, 0xd3, 0x0, 0xce, 0x5d, 0xd0, 0xf,
    0x90, 0x8f, 0x11, 0xf8, 0x7, 0xf2, 0xf, 0x90,
    0x8f, 0x0, 0xbc, 0x1c, 0xc0, 0x3, 0xff, 0xf4,
    0x0, 0xbe, 0x4e, 0xb0, 0xf, 0x90, 0x9f, 0x2,
    0xf7, 0x7, 0xf2, 0x2f, 0x60, 0x7f, 0x21, 0xf8,
    0x7, 0xf0, 0xd, 0xd6, 0xdd, 0x0, 0x3c, 0xfc,
    0x30,

    /* U+0039 "9" */
    0x6, 0xef, 0xa0, 0x2f, 0xb8, 0xf7, 0x6f, 0x30,
    0xeb, 0x7f, 0x20, 0xdc, 0x7f, 0x20, 0xdc, 0x6f,
    0x20, 0xdc, 0x3f, 0x71, 0xec, 0xb, 0xff, 0xfc,
    0x0, 0x22, 0xdc, 0x17, 0x20, 0xdc, 0x2f, 0x50,
    0xdc, 0x1f, 0x60, 0xea, 0xd, 0xc7, 0xf6, 0x3,
    0xdf, 0xa0,

    /* U+003A ":" */
    0xdf, 0x2c, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xcf, 0x2d, 0xf2,

    /* U+003B ";" */
    0x33, 0xf, 0xf3, 0xff, 0x30, 0x0, 0x0, 0x0,
    0x0, 0xdf, 0x5e, 0xf5, 0xf, 0x22, 0xe0, 0x69,
    0x0,

    /* U+003C "<" */
    0x0, 0x0, 0x70, 0x2, 0xcf, 0x7, 0xfd, 0x37,
    0xf7, 0x0, 0x7f, 0x60, 0x0, 0x8f, 0xb2, 0x0,
    0x3d, 0xf0, 0x0, 0x9,

    /* U+003D "=" */
    0x0, 0x0, 0x0, 0x5f, 0xff, 0xf3, 0x13, 0x33,
    0x30, 0x0, 0x0, 0x0, 0x5f, 0xff, 0xf3, 0x13,
    0x33, 0x30,

    /* U+003E ">" */
    0x34, 0x0, 0x0, 0x4f, 0x90, 0x0, 0x6, 0xfd,
    0x30, 0x0, 0x1b, 0xf2, 0x0, 0x9, 0xf2, 0x5,
    0xee, 0x50, 0x4f, 0xb1, 0x0, 0x45, 0x0, 0x0,

    /* U+003F "?" */
    0x2d, 0xfb, 0xb, 0xe8, 0xf5, 0xeb, 0xf, 0x8e,
    0xb0, 0xf9, 0xc9, 0xf, 0x90, 0x2, 0xf7, 0x0,
    0x7f, 0x30, 0x9f, 0xa0, 0x2f, 0x60, 0x2, 0xf4,
    0x0, 0x2, 0x0, 0x0, 0x51, 0x0, 0x1f, 0x40,
    0x1, 0xf4, 0x0,

    /* U+0040 "@" */
    0x0, 0x6, 0xcf, 0xeb, 0x20, 0x0, 0xa, 0xe6,
    0x23, 0x9e, 0x10, 0x5, 0xf2, 0x0, 0x0, 0x99,
    0x0, 0xb8, 0xb, 0xe6, 0xd1, 0xf0, 0xf, 0x46,
    0xc4, 0xad, 0xe, 0x12, 0xf1, 0xa6, 0x3, 0xd0,
    0xd3, 0x3f, 0xc, 0x40, 0x3d, 0xd, 0x44, 0xf0,
    0xb5, 0x4, 0xd0, 0xe3, 0x3f, 0x8, 0xa0, 0x9e,
    0x2f, 0x1, 0xf2, 0x1d, 0xf7, 0x8f, 0x80, 0xd,
    0x60, 0x1, 0x0, 0x10, 0x0, 0x8c, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xdb, 0x42, 0x30, 0x0, 0x0,
    0x1, 0x9e, 0xfe, 0x0, 0x0,

    /* U+0041 "A" */
    0x0, 0x7f, 0xa0, 0x0, 0x9, 0xfc, 0x0, 0x0,
    0xcf, 0xf0, 0x0, 0xe, 0xbf, 0x10, 0x1, 0xf6,
    0xf4, 0x0, 0x3f, 0x3f, 0x70, 0x5, 0xf0, 0xc9,
    0x0, 0x8e, 0xa, 0xc0, 0xa, 0xc0, 0x8e, 0x0,
    0xda, 0x16, 0xf1, 0xf, 0xff, 0xff, 0x41, 0xf8,
    0x44, 0xf6, 0x4f, 0x40, 0xe, 0x96, 0xf2, 0x0,
    0xcb,

    /* U+0042 "B" */
    0xcf, 0xfe, 0x80, 0xce, 0x5a, 0xf3, 0xce, 0x3,
    0xf6, 0xce, 0x2, 0xf6, 0xce, 0x3, 0xf5, 0xce,
    0x6, 0xf2, 0xcf, 0xff, 0xb0, 0xce, 0x38, 0xf3,
    0xce, 0x0, 0xf8, 0xce, 0x0, 0xfa, 0xce, 0x0,
    0xfa, 0xce, 0x1, 0xf8, 0xce, 0x59, 0xf4, 0xcf,
    0xfe, 0x80,

    /* U+0043 "C" */
    0x1, 0xbf, 0xd5, 0x0, 0xaf, 0x8c, 0xf0, 0xe,
    0xb0, 0x5f, 0x30, 0xf9, 0x4, 0xf4, 0xf, 0x90,
    0x4f, 0x50, 0xf9, 0x1, 0x72, 0xf, 0x90, 0x0,
    0x0, 0xf9, 0x0, 0x0, 0xf, 0x90, 0x2b, 0x30,
    0xf9, 0x4, 0xf5, 0xf, 0x90, 0x4f, 0x50, 0xeb,
    0x6, 0xf3, 0x9, 0xf7, 0xde, 0x0, 0x1b, 0xfe,
    0x40,

    /* U+0044 "D" */
    0xef, 0xfd, 0x50, 0xed, 0x5c, 0xf1, 0xeb, 0x4,
    0xf5, 0xeb, 0x2, 0xf7, 0xeb, 0x2, 0xf7, 0xeb,
    0x2, 0xf7, 0xeb, 0x2, 0xf7, 0xeb, 0x2, 0xf7,
    0xeb, 0x2, 0xf7, 0xeb, 0x2, 0xf7, 0xeb, 0x2,
    0xf7, 0xeb, 0x4, 0xf5, 0xed, 0x5c, 0xf1, 0xef,
    0xfd, 0x50,

    /* U+0045 "E" */
    0xef, 0xff, 0x3e, 0xd5, 0x51, 0xec, 0x0, 0xe,
    0xc0, 0x0, 0xec, 0x0, 0xe, 0xc1, 0x10, 0xef,
    0xff, 0x1e, 0xd4, 0x40, 0xec, 0x0, 0xe, 0xc0,
    0x0, 0xec, 0x0, 0xe, 0xc0, 0x0, 0xed, 0x55,
    0x1e, 0xff, 0xf4,

    /* U+0046 "F" */
    0xef, 0xff, 0x4e, 0xd5, 0x51, 0xeb, 0x0, 0xe,
    0xb0, 0x0, 0xeb, 0x0, 0xe, 0xc1, 0x10, 0xef,
    0xff, 0x1e, 0xc4, 0x40, 0xeb, 0x0, 0xe, 0xb0,
    0x0, 0xeb, 0x0, 0xe, 0xb0, 0x0, 0xeb, 0x0,
    0xe, 0xb0, 0x0,

    /* U+0047 "G" */
    0x1, 0xbf, 0xd5, 0x0, 0x9f, 0x8c, 0xf0, 0xe,
    0xb0, 0x4f, 0x30, 0xf9, 0x3, 0xf5, 0xf, 0x90,
    0x3f, 0x50, 0xf9, 0x1, 0x51, 0xf, 0x90, 0x0,
    0x0, 0xf9, 0x4f, 0xf5, 0xf, 0x90, 0x5f, 0x50,
    0xf9, 0x2, 0xf5, 0xf, 0x90, 0x2f, 0x50, 0xeb,
    0x3, 0xf5, 0x9, 0xf5, 0xaf, 0x50, 0x1b, 0xfb,
    0xa5,

    /* U+0048 "H" */
    0xec, 0x0, 0xf9, 0xec, 0x0, 0xf9, 0xec, 0x0,
    0xf9, 0xec, 0x0, 0xf9, 0xec, 0x0, 0xf9, 0xec,
    0x11, 0xf9, 0xef, 0xff, 0xf9, 0xed, 0x44, 0xf9,
    0xec, 0x0, 0xf9, 0xec, 0x0, 0xf9, 0xec, 0x0,
    0xf9, 0xec, 0x0, 0xf9, 0xec, 0x0, 0xf9, 0xec,
    0x0, 0xf9,

    /* U+0049 "I" */
    0xce, 0xce, 0xce, 0xce, 0xce, 0xce, 0xce, 0xce,
    0xce, 0xce, 0xce, 0xce, 0xce, 0xce,

    /* U+004A "J" */
    0x0, 0x0, 0xf9, 0x0, 0x0, 0xf9, 0x0, 0x0,
    0xf9, 0x0, 0x0, 0xf9, 0x0, 0x0, 0xf9, 0x0,
    0x0, 0xf9, 0x0, 0x0, 0xf9, 0x0, 0x0, 0xf9,
    0x0, 0x0, 0xf9, 0x5f, 0x30, 0xf9, 0x5f, 0x30,
    0xf9, 0x4f, 0x41, 0xf8, 0x1f, 0xb9, 0xf4, 0x6,
    0xee, 0x80,

    /* U+004B "K" */
    0xec, 0x0, 0xfa, 0xec, 0x5, 0xf4, 0xec, 0xb,
    0xe0, 0xec, 0x1f, 0x80, 0xec, 0x7f, 0x20, 0xec,
    0xdc, 0x0, 0xee, 0xf6, 0x0, 0xee, 0xf7, 0x0,
    0xec, 0xcd, 0x0, 0xec, 0x6f, 0x40, 0xec, 0xf,
    0xa0, 0xec, 0xa, 0xf1, 0xec, 0x4, 0xf6, 0xec,
    0x0, 0xdc,

    /* U+004C "L" */
    0xec, 0x0, 0xe, 0xc0, 0x0, 0xec, 0x0, 0xe,
    0xc0, 0x0, 0xec, 0x0, 0xe, 0xc0, 0x0, 0xec,
    0x0, 0xe, 0xc0, 0x0, 0xec, 0x0, 0xe, 0xc0,
    0x0, 0xec, 0x0, 0xe, 0xc0, 0x0, 0xed, 0x55,
    0x1e, 0xff, 0xf4,

    /* U+004D "M" */
    0xef, 0x30, 0x1, 0xff, 0xef, 0x60, 0x4, 0xff,
    0xef, 0x90, 0x6, 0xff, 0xef, 0xb0, 0x9, 0xff,
    0xec, 0xe0, 0xc, 0xcf, 0xea, 0xf1, 0xe, 0xaf,
    0xe8, 0xf4, 0x1f, 0x8f, 0xe8, 0xc6, 0x3f, 0x6f,
    0xe8, 0x99, 0x6c, 0x6f, 0xe9, 0x7c, 0x99, 0x7f,
    0xe9, 0x4e, 0xb6, 0x7f, 0xe9, 0x1f, 0xf4, 0x7f,
    0xe9, 0xe, 0xf1, 0x7f, 0xe9, 0xb, 0xe0, 0x7f,

    /* U+004E "N" */
    0xe8, 0x0, 0xac, 0xed, 0x0, 0xac, 0xef, 0x20,
    0xac, 0xef, 0x80, 0xac, 0xef, 0xd0, 0xac, 0xea,
    0xf2, 0x9c, 0xe9, 0xc8, 0x9c, 0xe9, 0x7d, 0x8c,
    0xea, 0x2f, 0xbc, 0xea, 0xd, 0xfc, 0xea, 0x8,
    0xfc, 0xea, 0x3, 0xfc, 0xea, 0x0, 0xdc, 0xea,
    0x0, 0x8c,

    /* U+004F "O" */
    0x1, 0xbf, 0xe5, 0x0, 0xaf, 0x8c, 0xf1, 0xe,
    0xb0, 0x4f, 0x40, 0xf9, 0x3, 0xf6, 0xf, 0x90,
    0x3f, 0x60, 0xf9, 0x3, 0xf6, 0xf, 0x90, 0x3f,
    0x60, 0xf9, 0x3, 0xf6, 0xf, 0x90, 0x3f, 0x60,
    0xf9, 0x3, 0xf6, 0xf, 0x90, 0x3f, 0x60, 0xeb,
    0x5, 0xf4, 0xa, 0xf7, 0xcf, 0x10, 0x1b, 0xfd,
    0x40,

    /* U+0050 "P" */
    0xef, 0xfe, 0x70, 0xed, 0x4b, 0xf2, 0xec, 0x3,
    0xf6, 0xec, 0x2, 0xf7, 0xec, 0x2, 0xf7, 0xec,
    0x3, 0xf6, 0xec, 0x18, 0xf3, 0xef, 0xff, 0xa0,
    0xed, 0x42, 0x0, 0xec, 0x0, 0x0, 0xec, 0x0,
    0x0, 0xec, 0x0, 0x0, 0xec, 0x0, 0x0, 0xec,
    0x0, 0x0,

    /* U+0051 "Q" */
    0x1, 0xbf, 0xe5, 0x0, 0xaf, 0x8c, 0xf1, 0xe,
    0xb0, 0x4f, 0x40, 0xf9, 0x3, 0xf6, 0xf, 0x90,
    0x3f, 0x60, 0xf9, 0x3, 0xf6, 0xf, 0x90, 0x3f,
    0x60, 0xf9, 0x3, 0xf6, 0xf, 0x90, 0x3f, 0x60,
    0xf9, 0x3, 0xf6, 0xf, 0x90, 0x3f, 0x60, 0xeb,
    0x4, 0xf4, 0xb, 0xf7, 0xcf, 0x10, 0x1c, 0xff,
    0x60, 0x0, 0x3, 0xf5, 0x0, 0x0, 0x4, 0xa0,
    0x0, 0x0, 0x0, 0x0,

    /* U+0052 "R" */
    0xef, 0xff, 0x90, 0xed, 0x4a, 0xf4, 0xec, 0x2,
    0xf6, 0xec, 0x2, 0xf7, 0xec, 0x2, 0xf6, 0xec,
    0x6, 0xf3, 0xef, 0xff, 0xa0, 0xec, 0x38, 0xf2,
    0xec, 0x2, 0xf5, 0xec, 0x2, 0xf6, 0xec, 0x1,
    0xf7, 0xec, 0x1, 0xf7, 0xec, 0x1, 0xf7, 0xec,
    0x0, 0xf8,

    /* U+0053 "S" */
    0x3, 0xdf, 0xc2, 0x0, 0xde, 0x7f, 0xb0, 0x1f,
    0x70, 0xae, 0x2, 0xf6, 0x8, 0xf0, 0xe, 0xc0,
    0x7d, 0x0, 0x7f, 0x90, 0x0, 0x0, 0xaf, 0x80,
    0x0, 0x0, 0xaf, 0x50, 0x7, 0x30, 0xdd, 0x1,
    0xf7, 0x7, 0xf1, 0x1f, 0x70, 0x6f, 0x20, 0xf9,
    0x7, 0xf1, 0xb, 0xe7, 0xdd, 0x0, 0x2c, 0xfd,
    0x30,

    /* U+0054 "T" */
    0xcf, 0xff, 0xc4, 0x8f, 0x94, 0x4, 0xf5, 0x0,
    0x4f, 0x50, 0x4, 0xf5, 0x0, 0x4f, 0x50, 0x4,
    0xf5, 0x0, 0x4f, 0x50, 0x4, 0xf5, 0x0, 0x4f,
    0x50, 0x4, 0xf5, 0x0, 0x4f, 0x50, 0x4, 0xf5,
    0x0, 0x4f, 0x50,

    /* U+0055 "U" */
    0xfa, 0x2, 0xf7, 0xfa, 0x2, 0xf7, 0xfa, 0x2,
    0xf7, 0xfa, 0x2, 0xf7, 0xfa, 0x2, 0xf7, 0xfa,
    0x2, 0xf7, 0xfa, 0x2, 0xf7, 0xfa, 0x2, 0xf7,
    0xfa, 0x2, 0xf7, 0xfa, 0x2, 0xf7, 0xfa, 0x2,
    0xf7, 0xdb, 0x3, 0xf6, 0x9f, 0x7b, 0xf2, 0x1b,
    0xfd, 0x60,

    /* U+0056 "V" */
    0x7f, 0x10, 0xd, 0xa4, 0xf3, 0x0, 0xf8, 0x1f,
    0x60, 0x2f, 0x50, 0xf8, 0x4, 0xf3, 0xc, 0xb0,
    0x6f, 0x0, 0xad, 0x8, 0xe0, 0x7, 0xf0, 0xac,
    0x0, 0x4f, 0x2c, 0x90, 0x2, 0xf4, 0xe7, 0x0,
    0xf, 0x8f, 0x50, 0x0, 0xcc, 0xf2, 0x0, 0xa,
    0xff, 0x0, 0x0, 0x7f, 0xd0, 0x0, 0x5, 0xfb,
    0x0,

    /* U+0057 "W" */
    0x6f, 0x0, 0x5f, 0x10, 0x6f, 0x14, 0xf2, 0x7,
    0xf4, 0x7, 0xf0, 0x2f, 0x40, 0xaf, 0x60, 0x9d,
    0x0, 0xf6, 0xc, 0xf9, 0xa, 0xb0, 0xe, 0x70,
    0xec, 0xb0, 0xc9, 0x0, 0xc9, 0x1f, 0x7d, 0xd,
    0x70, 0xa, 0xb3, 0xf2, 0xf0, 0xf5, 0x0, 0x8d,
    0x5d, 0xf, 0x3f, 0x40, 0x6, 0xe8, 0xb0, 0xe7,
    0xf2, 0x0, 0x4f, 0xa8, 0xb, 0xbf, 0x0, 0x2,
    0xfe, 0x60, 0x9e, 0xe0, 0x0, 0xf, 0xf4, 0x7,
    0xfc, 0x0, 0x0, 0xef, 0x10, 0x4f, 0xa0, 0x0,
    0xc, 0xf0, 0x2, 0xf8, 0x0,

    /* U+0058 "X" */
    0x5f, 0x10, 0xbc, 0x1f, 0x50, 0xe7, 0xc, 0xa3,
    0xf3, 0x7, 0xe7, 0xf0, 0x3, 0xfe, 0xb0, 0x0,
    0xef, 0x60, 0x0, 0xaf, 0x20, 0x0, 0xdf, 0x10,
    0x1, 0xff, 0x50, 0x5, 0xfd, 0xa0, 0xa, 0xc7,
    0xe0, 0xe, 0x82, 0xf3, 0x2f, 0x40, 0xe8, 0x6f,
    0x0, 0x9c,

    /* U+0059 "Y" */
    0xbd, 0x0, 0x5f, 0x46, 0xf2, 0x9, 0xf0, 0x1f,
    0x70, 0xdb, 0x0, 0xdb, 0x1f, 0x60, 0x8, 0xf5,
    0xf2, 0x0, 0x3f, 0xde, 0x0, 0x0, 0xef, 0x90,
    0x0, 0xa, 0xf5, 0x0, 0x0, 0x7f, 0x20, 0x0,
    0x7, 0xf2, 0x0, 0x0, 0x7f, 0x20, 0x0, 0x7,
    0xf2, 0x0, 0x0, 0x7f, 0x20, 0x0, 0x7, 0xf2,
    0x0,

    /* U+005A "Z" */
    0xd, 0xff, 0xf6, 0x4, 0x59, 0xf5, 0x0, 0x8,
    0xf1, 0x0, 0xc, 0xd0, 0x0, 0x1f, 0x90, 0x0,
    0x4f, 0x50, 0x0, 0x9f, 0x10, 0x0, 0xdd, 0x0,
    0x1, 0xf9, 0x0, 0x5, 0xf5, 0x0, 0x9, 0xf1,
    0x0, 0xd, 0xd0, 0x0, 0xf, 0xc5, 0x51, 0x1f,
    0xff, 0xf5,

    /* U+005B "[" */
    0x4f, 0xff, 0x4f, 0x73, 0x4f, 0x50, 0x4f, 0x50,
    0x4f, 0x50, 0x4f, 0x50, 0x4f, 0x50, 0x4f, 0x50,
    0x4f, 0x50, 0x4f, 0x50, 0x4f, 0x50, 0x4f, 0x50,
    0x4f, 0x73, 0x4f, 0xff,

    /* U+005C "\\" */
    0xf, 0x70, 0x0, 0xc, 0xa0, 0x0, 0x8, 0xe0,
    0x0, 0x4, 0xf2, 0x0, 0x1, 0xf5, 0x0, 0x0,
    0xd9, 0x0, 0x0, 0x9d, 0x0, 0x0, 0x6f, 0x0,
    0x0, 0x2f, 0x40, 0x0, 0xe, 0x80, 0x0, 0xb,
    0xb0, 0x0, 0x7, 0xf0, 0x0, 0x3, 0xf2, 0x0,
    0x0, 0xf6,

    /* U+005D "]" */
    0xbf, 0xf8, 0x24, 0xf8, 0x1, 0xf8, 0x1, 0xf8,
    0x1, 0xf8, 0x1, 0xf8, 0x1, 0xf8, 0x1, 0xf8,
    0x1, 0xf8, 0x1, 0xf8, 0x1, 0xf8, 0x1, 0xf8,
    0x24, 0xf8, 0xbf, 0xf8,

    /* U+005E "^" */
    0x0, 0x88, 0x0, 0x4, 0xff, 0x40, 0x8, 0xed,
    0x80, 0xc, 0xa9, 0xc0, 0xf, 0x76, 0xf0, 0x4f,
    0x32, 0xf4, 0x8f, 0x0, 0xf8, 0xcc, 0x0, 0xbc,

    /* U+005F "_" */
    0x0, 0x0, 0x0, 0xaf, 0xff, 0xf7, 0x13, 0x33,
    0x31,

    /* U+0060 "`" */
    0x4, 0x0, 0xf, 0xb3, 0x4, 0x8a,

    /* U+0061 "a" */
    0x1, 0xbf, 0xd4, 0x0, 0x9f, 0x7c, 0xe0, 0xc,
    0xc0, 0x7f, 0x10, 0xca, 0x6, 0xf3, 0x0, 0x2,
    0xbf, 0x30, 0x1a, 0xec, 0xf3, 0xb, 0xe1, 0x6f,
    0x30, 0xfa, 0x6, 0xf3, 0xf, 0x90, 0x6f, 0x30,
    0xfa, 0x6, 0xf3, 0xc, 0xd4, 0xcf, 0x30, 0x3e,
    0xea, 0xf3,

    /* U+0062 "b" */
    0xdc, 0x0, 0x0, 0xdc, 0x0, 0x0, 0xdc, 0xcf,
    0x70, 0xdf, 0x7c, 0xf1, 0xdd, 0x4, 0xf4, 0xdc,
    0x4, 0xf5, 0xdc, 0x4, 0xf5, 0xdc, 0x4, 0xf5,
    0xdc, 0x4, 0xf5, 0xdc, 0x4, 0xf5, 0xdc, 0x4,
    0xf5, 0xdd, 0x5, 0xf4, 0xdf, 0x7b, 0xf1, 0xdc,
    0xbf, 0x70,

    /* U+0063 "c" */
    0x2, 0xcf, 0xd3, 0x0, 0xaf, 0x7e, 0xc0, 0xe,
    0xa0, 0x8f, 0x0, 0xf9, 0x8, 0xf0, 0xf, 0x90,
    0x37, 0x0, 0xf9, 0x0, 0x0, 0xf, 0x90, 0x0,
    0x0, 0xf9, 0x5, 0xa0, 0xf, 0x90, 0x8f, 0x0,
    0xfa, 0x9, 0xf0, 0xb, 0xe7, 0xec, 0x0, 0x2c,
    0xfc, 0x30,

    /* U+0064 "d" */
    0x0, 0x0, 0x6f, 0x30, 0x0, 0x6, 0xf3, 0x2,
    0xde, 0xaf, 0x30, 0xbf, 0x6d, 0xf3, 0xf, 0xa0,
    0x8f, 0x30, 0xf9, 0x6, 0xf3, 0xf, 0x90, 0x6f,
    0x30, 0xf9, 0x6, 0xf3, 0xf, 0x90, 0x6f, 0x30,
    0xf9, 0x6, 0xf3, 0xf, 0x90, 0x6f, 0x30, 0xfa,
    0x7, 0xf3, 0xc, 0xe4, 0xdf, 0x30, 0x3e, 0xd9,
    0xf3,

    /* U+0065 "e" */
    0x1, 0xbf, 0xd3, 0x0, 0xaf, 0x6d, 0xc0, 0xe,
    0xa0, 0x8f, 0x0, 0xf9, 0x8, 0xf0, 0xf, 0x90,
    0x8f, 0x10, 0xff, 0xff, 0xf1, 0xf, 0xa2, 0x22,
    0x0, 0xf9, 0x3, 0x70, 0xf, 0x90, 0x8f, 0x0,
    0xfa, 0x9, 0xf0, 0xb, 0xe6, 0xec, 0x0, 0x2c,
    0xfd, 0x30,

    /* U+0066 "f" */
    0x0, 0xbf, 0x70, 0x5f, 0x82, 0x6, 0xf2, 0x7,
    0xff, 0xf8, 0x18, 0xf5, 0x10, 0x7f, 0x20, 0x7,
    0xf2, 0x0, 0x7f, 0x20, 0x7, 0xf2, 0x0, 0x7f,
    0x20, 0x7, 0xf2, 0x0, 0x7f, 0x20, 0x7, 0xf2,
    0x0, 0x7f, 0x20,

    /* U+0067 "g" */
    0x2, 0xde, 0xbf, 0x20, 0xaf, 0x6e, 0xf2, 0xe,
    0xa0, 0x8f, 0x20, 0xf9, 0x7, 0xf2, 0xf, 0x90,
    0x7f, 0x20, 0xf9, 0x7, 0xf2, 0xf, 0x90, 0x7f,
    0x20, 0xf9, 0x7, 0xf2, 0xf, 0x90, 0x7f, 0x20,
    0xcd, 0x2b, 0xf2, 0x6, 0xff, 0xdf, 0x20, 0x2,
    0x27, 0xf1, 0x8, 0x65, 0xdd, 0x0, 0x8e, 0xfc,
    0x30,

    /* U+0068 "h" */
    0xdc, 0x0, 0x0, 0xdc, 0x0, 0x0, 0xdc, 0x8f,
    0xb0, 0xdf, 0x8a, 0xf5, 0xdc, 0x1, 0xf7, 0xdc,
    0x1, 0xf8, 0xdc, 0x1, 0xf8, 0xdc, 0x1, 0xf8,
    0xdc, 0x1, 0xf8, 0xdc, 0x1, 0xf8, 0xdc, 0x1,
    0xf8, 0xdc, 0x1, 0xf8, 0xdc, 0x1, 0xf8, 0xdc,
    0x1, 0xf8,

    /* U+0069 "i" */
    0xdc, 0x66, 0xdc, 0xdc, 0xdc, 0xdc, 0xdc, 0xdc,
    0xdc, 0xdc, 0xdc, 0xdc, 0xdc, 0xdc,

    /* U+006A "j" */
    0x9, 0xf0, 0x4, 0x70, 0x9, 0xf0, 0x9, 0xf0,
    0x9, 0xf0, 0x9, 0xf0, 0x9, 0xf0, 0x9, 0xf0,
    0x9, 0xf0, 0x9, 0xf0, 0x9, 0xf0, 0x9, 0xf0,
    0x9, 0xf0, 0x9, 0xf0, 0x1b, 0xf0, 0x6f, 0x90,

    /* U+006B "k" */
    0xdc, 0x0, 0x0, 0xdc, 0x0, 0x0, 0xdc, 0x2,
    0xf7, 0xdc, 0x8, 0xf1, 0xdc, 0xe, 0xa0, 0xdc,
    0x5f, 0x30, 0xdc, 0xcc, 0x0, 0xde, 0xf6, 0x0,
    0xdd, 0xf7, 0x0, 0xdc, 0xbd, 0x0, 0xdc, 0x4f,
    0x40, 0xdc, 0xd, 0xb0, 0xdc, 0x7, 0xf2, 0xdc,
    0x1, 0xf9,

    /* U+006C "l" */
    0xdc, 0xdc, 0xdc, 0xdc, 0xdc, 0xdc, 0xdc, 0xdc,
    0xdc, 0xdc, 0xdc, 0xdc, 0xdc, 0xdc,

    /* U+006D "m" */
    0xdc, 0x9f, 0xb3, 0xde, 0x60, 0xdf, 0x8b, 0xfd,
    0x7d, 0xf0, 0xdc, 0x3, 0xf7, 0x8, 0xf1, 0xdc,
    0x2, 0xf7, 0x7, 0xf2, 0xdc, 0x2, 0xf7, 0x7,
    0xf2, 0xdc, 0x2, 0xf7, 0x7, 0xf2, 0xdc, 0x2,
    0xf7, 0x7, 0xf2, 0xdc, 0x2, 0xf7, 0x7, 0xf2,
    0xdc, 0x2, 0xf7, 0x7, 0xf2, 0xdc, 0x2, 0xf7,
    0x7, 0xf2, 0xdc, 0x2, 0xf7, 0x7, 0xf2, 0xdc,
    0x2, 0xf7, 0x7, 0xf2,

    /* U+006E "n" */
    0xdc, 0x8f, 0xb0, 0xdf, 0x7a, 0xf5, 0xdc, 0x1,
    0xf7, 0xdc, 0x1, 0xf8, 0xdc, 0x1, 0xf8, 0xdc,
    0x1, 0xf8, 0xdc, 0x1, 0xf8, 0xdc, 0x1, 0xf8,
    0xdc, 0x1, 0xf8, 0xdc, 0x1, 0xf8, 0xdc, 0x1,
    0xf8, 0xdc, 0x1, 0xf8,

    /* U+006F "o" */
    0x1, 0xcf, 0xd3, 0x0, 0xaf, 0x6d, 0xd0, 0xe,
    0xa0, 0x8f, 0x10, 0xf9, 0x7, 0xf2, 0xf, 0x90,
    0x7f, 0x20, 0xf9, 0x7, 0xf2, 0xf, 0x90, 0x7f,
    0x20, 0xf9, 0x7, 0xf2, 0xf, 0x90, 0x7f, 0x20,
    0xea, 0x8, 0xf1, 0xb, 0xf6, 0xdd, 0x0, 0x2c,
    0xfd, 0x30,

    /* U+0070 "p" */
    0xdc, 0xbf, 0x80, 0xdf, 0x7b, 0xf2, 0xdd, 0x4,
    0xf4, 0xdc, 0x3, 0xf5, 0xdc, 0x3, 0xf6, 0xdc,
    0x3, 0xf6, 0xdc, 0x3, 0xf6, 0xdc, 0x3, 0xf6,
    0xdc, 0x3, 0xf5, 0xdd, 0x5, 0xf4, 0xdf, 0x7c,
    0xf1, 0xdc, 0xce, 0x60, 0xdc, 0x0, 0x0, 0xdc,
    0x0, 0x0,

    /* U+0071 "q" */
    0x3, 0xee, 0xaf, 0x20, 0xce, 0x6d, 0xf2, 0xf,
    0xa0, 0x8f, 0x20, 0xf9, 0x7, 0xf2, 0xf, 0x90,
    0x7f, 0x20, 0xf9, 0x7, 0xf2, 0xf, 0x90, 0x7f,
    0x20, 0xf9, 0x7, 0xf2, 0xf, 0x90, 0x7f, 0x20,
    0xea, 0x8, 0xf2, 0xb, 0xe6, 0xef, 0x20, 0x2d,
    0xea, 0xf2, 0x0, 0x0, 0x6f, 0x20, 0x0, 0x6,
    0xf2,

    /* U+0072 "r" */
    0xdc, 0x9b, 0xdf, 0x93, 0xdc, 0x0, 0xdc, 0x0,
    0xdc, 0x0, 0xdc, 0x0, 0xdc, 0x0, 0xdc, 0x0,
    0xdc, 0x0, 0xdc, 0x0, 0xdc, 0x0, 0xdc, 0x0,

    /* U+0073 "s" */
    0x5, 0xef, 0x90, 0x1f, 0xb8, 0xf5, 0x4f, 0x40,
    0xf8, 0x3f, 0x60, 0xe9, 0xd, 0xe1, 0x32, 0x3,
    0xfd, 0x10, 0x0, 0x4f, 0xd0, 0x4, 0x15, 0xf7,
    0x3f, 0x50, 0xeb, 0x2f, 0x60, 0xdc, 0xe, 0xd7,
    0xf9, 0x4, 0xdf, 0xb1,

    /* U+0074 "t" */
    0x9, 0xf0, 0x0, 0x9f, 0x0, 0xaf, 0xff, 0x42,
    0xaf, 0x30, 0x9, 0xf0, 0x0, 0x9f, 0x0, 0x9,
    0xf0, 0x0, 0x9f, 0x0, 0x9, 0xf0, 0x0, 0x9f,
    0x0, 0x9, 0xf0, 0x0, 0x9f, 0x0, 0x8, 0xf6,
    0x10, 0x3e, 0xf5,

    /* U+0075 "u" */
    0xea, 0x3, 0xf6, 0xea, 0x3, 0xf6, 0xea, 0x3,
    0xf6, 0xea, 0x3, 0xf6, 0xea, 0x3, 0xf6, 0xea,
    0x3, 0xf6, 0xea, 0x3, 0xf6, 0xea, 0x3, 0xf6,
    0xea, 0x3, 0xf6, 0xeb, 0x3, 0xf6, 0xce, 0x5a,
    0xf6, 0x3e, 0xe8, 0xf6,

    /* U+0076 "v" */
    0x9e, 0x0, 0xf7, 0x7f, 0x1, 0xf5, 0x5f, 0x23,
    0xf3, 0x2f, 0x45, 0xf1, 0xf, 0x66, 0xe0, 0xe,
    0x88, 0xc0, 0xc, 0xaa, 0xa0, 0xa, 0xbc, 0x80,
    0x7, 0xdd, 0x50, 0x5, 0xff, 0x30, 0x3, 0xff,
    0x10, 0x1, 0xff, 0x0,

    /* U+0077 "w" */
    0x8c, 0x3, 0xf4, 0xb, 0x96, 0xe0, 0x5f, 0x70,
    0xc7, 0x4f, 0x8, 0xf9, 0xe, 0x53, 0xf1, 0xac,
    0xb0, 0xf3, 0x1f, 0x2c, 0x7e, 0x1f, 0x20, 0xf4,
    0xe3, 0xf3, 0xf0, 0xd, 0x6f, 0xe, 0x7e, 0x0,
    0xba, 0xd0, 0xca, 0xc0, 0xa, 0xdb, 0xa, 0xda,
    0x0, 0x8f, 0x80, 0x8f, 0x80, 0x6, 0xf6, 0x6,
    0xf6, 0x0, 0x4f, 0x40, 0x4f, 0x40,

    /* U+0078 "x" */
    0x8e, 0x1, 0xf5, 0x2f, 0x35, 0xf1, 0xd, 0x8a,
    0xb0, 0x8, 0xee, 0x60, 0x3, 0xff, 0x10, 0x0,
    0xec, 0x0, 0x1, 0xfd, 0x0, 0x5, 0xff, 0x20,
    0xa, 0xbf, 0x70, 0xf, 0x6a, 0xc0, 0x5f, 0x15,
    0xf2, 0xac, 0x0, 0xf7,

    /* U+0079 "y" */
    0x8f, 0x0, 0xbd, 0x5f, 0x20, 0xda, 0x2f, 0x40,
    0xf8, 0xf, 0x71, 0xf5, 0xd, 0x93, 0xf3, 0xa,
    0xb5, 0xf0, 0x8, 0xd6, 0xe0, 0x5, 0xf8, 0xb0,
    0x2, 0xfa, 0x80, 0x0, 0xfe, 0x60, 0x0, 0xdf,
    0x30, 0x0, 0xbf, 0x10, 0x3, 0xce, 0x0, 0x2f,
    0xf8, 0x0,

    /* U+007A "z" */
    0x3f, 0xff, 0xd1, 0x66, 0xfb, 0x0, 0x2f, 0x70,
    0x6, 0xf2, 0x0, 0xae, 0x0, 0xf, 0xa0, 0x3,
    0xf5, 0x0, 0x8f, 0x10, 0xc, 0xd0, 0x1, 0xf8,
    0x0, 0x5f, 0x96, 0x46, 0xff, 0xfb,

    /* U+007B "{" */
    0x1, 0xcf, 0x10, 0x7f, 0x70, 0x9, 0xf0, 0x0,
    0xaf, 0x0, 0xa, 0xf0, 0x0, 0xaf, 0x0, 0xc,
    0xd0, 0xb, 0xf5, 0x0, 0x9f, 0x90, 0x0, 0xbe,
    0x0, 0xa, 0xf0, 0x0, 0xaf, 0x0, 0x9, 0xf0,
    0x0, 0x8f, 0x30, 0x3, 0xff, 0x10, 0x1, 0x30,

    /* U+007C "|" */
    0x57, 0xae, 0xae, 0xae, 0xae, 0xae, 0xae, 0xae,
    0xae, 0xae, 0xae, 0xae, 0xae, 0xae, 0xae, 0xae,

    /* U+007D "}" */
    0xbe, 0x50, 0x4, 0xed, 0x0, 0xa, 0xf0, 0x0,
    0xaf, 0x0, 0xa, 0xf0, 0x0, 0x9f, 0x0, 0x8,
    0xf2, 0x0, 0x2d, 0xf1, 0x4, 0xfd, 0x0, 0x9f,
    0x0, 0x9, 0xf0, 0x0, 0xaf, 0x0, 0xa, 0xf0,
    0x1, 0xce, 0x0, 0xbf, 0x80, 0x2, 0x20, 0x0,

    /* U+007E "~" */
    0x2, 0x97, 0x10, 0x86, 0xd, 0xff, 0xfc, 0xf5,
    0x9, 0x43, 0x8e, 0xc0, 0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 63, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 66, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 118, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 29, .adv_w = 161, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 110, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 133, .adv_w = 272, .box_w = 15, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 123, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 52, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 303, .adv_w = 71, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 327, .adv_w = 71, .box_w = 4, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 359, .adv_w = 120, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 380, .adv_w = 101, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 398, .adv_w = 58, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 406, .adv_w = 87, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 411, .adv_w = 67, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 98, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 114, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 81, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 112, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 114, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 623, .adv_w = 112, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 112, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 112, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 756, .adv_w = 112, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 805, .adv_w = 112, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 854, .adv_w = 112, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 896, .adv_w = 69, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 908, .adv_w = 70, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 925, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 945, .adv_w = 90, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 963, .adv_w = 91, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 987, .adv_w = 100, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1022, .adv_w = 176, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1099, .adv_w = 117, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1148, .adv_w = 119, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1190, .adv_w = 115, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1239, .adv_w = 119, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1281, .adv_w = 96, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1316, .adv_w = 93, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1351, .adv_w = 118, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1400, .adv_w = 123, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1442, .adv_w = 66, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1456, .adv_w = 107, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1498, .adv_w = 112, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1540, .adv_w = 89, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1575, .adv_w = 162, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1631, .adv_w = 127, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1673, .adv_w = 118, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1722, .adv_w = 111, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1764, .adv_w = 118, .box_w = 7, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1824, .adv_w = 119, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1866, .adv_w = 109, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1915, .adv_w = 80, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1950, .adv_w = 120, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1992, .adv_w = 115, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2041, .adv_w = 170, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2118, .adv_w = 102, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2160, .adv_w = 105, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2209, .adv_w = 96, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2251, .adv_w = 96, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2279, .adv_w = 109, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2321, .adv_w = 96, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2349, .adv_w = 129, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2373, .adv_w = 94, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2382, .adv_w = 81, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 2388, .adv_w = 116, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2430, .adv_w = 117, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2472, .adv_w = 110, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2514, .adv_w = 117, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2563, .adv_w = 112, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2605, .adv_w = 78, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2640, .adv_w = 116, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2689, .adv_w = 121, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2731, .adv_w = 63, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2745, .adv_w = 67, .box_w = 4, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2777, .adv_w = 108, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2819, .adv_w = 63, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2833, .adv_w = 179, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2893, .adv_w = 121, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2929, .adv_w = 114, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2971, .adv_w = 117, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3013, .adv_w = 116, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3062, .adv_w = 81, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3086, .adv_w = 101, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3122, .adv_w = 77, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3157, .adv_w = 121, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3193, .adv_w = 94, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3229, .adv_w = 145, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3283, .adv_w = 93, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3319, .adv_w = 99, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3361, .adv_w = 85, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3391, .adv_w = 100, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3431, .adv_w = 67, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3447, .adv_w = 100, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3487, .adv_w = 140, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 6}
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
    -3, -3, -3, -3, -2, -5, -6, -5,
    0, -1, -2, -1, -3, -8, -11, -1,
    -8, -9, -1, -1, -1, -1, -13, -15,
    -4, -1, -3, -8, 0, -1, -1, -1,
    -1, 0, 0, -2, -2, -3, -2, -2,
    -2, -4, -4, -5, 0, -1, -2, -4,
    -1, -1, -29, -32, -4, -5, -1, -1,
    0, -10, -8, -5, 0, 0, -5, 0,
    -1, -1, -1, -1, -5, -4, -1, -1,
    -1, -1, 0, -1, -1, -4, -1, -2,
    -1, -4, -5, -5, 0, 0, -1, 0,
    0, 0, -1, -10, -1, -1, -1, -2,
    -6, -2, -9, -1, -6, -11, -1
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
const lv_font_t antonio_regular_16 = {
#else
lv_font_t antonio_regular_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ANTONIO_REGULAR_16*/

