/*
 * small_font.h
 *
 * Created: 2016/10/13 2:47:31 PM
 *  Author: Philip
 */ 


#ifndef SMALL_FONT_H_
#define SMALL_FONT_H_

#define small_font_height 1

const U8 ascii_char_0x20[] = {1, 0x00}; /*   */
const U8 ascii_char_0x21[] = {3, 0x00, 0x5F, 0x00}; /* ! */
const U8 ascii_char_0x22[] = {3, 0x03, 0x00, 0x03}; /* " */
const U8 ascii_char_0x23[] = {5, 0x28, 0x7C, 0x28, 0x7C, 0x28}; /* # */
const U8 ascii_char_0x24[] = {5, 0x24, 0x2A, 0x7F, 0x2A, 0x12}; /* $ */
const U8 ascii_char_0x25[] = {7, 0x42, 0x25, 0x12, 0x08, 0x24, 0x52, 0x21}; /* % */
const U8 ascii_char_0x26[] = {6, 0x60, 0x96, 0x89, 0xB5, 0x42, 0xA0}; /* & */
const U8 ascii_char_0x27[] = {1, 0x06}; /* ` */
const U8 ascii_char_0x28[] = {3, 0x3C, 0x42, 0x81}; /* ( */
const U8 ascii_char_0x29[] = {3, 0x81, 0x42, 0x3C}; /* ) */
const U8 ascii_char_0x2a[] = {5, 0x12, 0x0C, 0x1E, 0x0C, 0x12}; /* * */
const U8 ascii_char_0x2b[] = {5, 0x08, 0x08, 0x3E, 0x08, 0x08}; /* + */
const U8 ascii_char_0x2c[] = {2, 0x80, 0x40}; /* , */
const U8 ascii_char_0x2d[] = {5, 0x08, 0x08, 0x08, 0x08, 0x08}; /* - */
const U8 ascii_char_0x2e[] = {1, 0x40}; /* . */
const U8 ascii_char_0x2f[] = {4, 0xC0, 0x30, 0x0C, 0x03}; /* / */
const U8 ascii_char_0x30[] = {5, 0x3E, 0x41, 0x41, 0x41, 0x3E}; /* 0 */
const U8 ascii_char_0x31[] = {3, 0x42, 0x7F, 0x40}; /* 1 */
const U8 ascii_char_0x32[] = {5, 0x42, 0x61, 0x51, 0x49, 0x46}; /* 2 */
const U8 ascii_char_0x33[] = {5, 0x22, 0x41, 0x49, 0x49, 0x36}; /* 3 */
const U8 ascii_char_0x34[] = {5, 0x18, 0x14, 0x12, 0x7F, 0x10}; /* 4 */
const U8 ascii_char_0x35[] = {5, 0x27, 0x45, 0x45, 0x45, 0x39}; /* 5 */
const U8 ascii_char_0x36[] = {5, 0x3C, 0x4A, 0x49, 0x49, 0x30}; /* 6 */
const U8 ascii_char_0x37[] = {5, 0x01, 0x71, 0x09, 0x05, 0x03}; /* 7 */
const U8 ascii_char_0x38[] = {5, 0x36, 0x49, 0x49, 0x49, 0x36}; /* 8 */
const U8 ascii_char_0x39[] = {5, 0x06, 0x49, 0x49, 0x29, 0x1E}; /* 9 */
const U8 ascii_char_0x3a[] = {1, 0x24}; /* : */
const U8 ascii_char_0x3b[] = {1, 0x68}; /* ; */
const U8 ascii_char_0x3c[] = {3, 0x08, 0x14, 0x22}; /* < */
const U8 ascii_char_0x3d[] = {5, 0x14, 0x14, 0x14, 0x14, 0x14}; /* = */
const U8 ascii_char_0x3e[] = {3, 0x22, 0x14, 0x08}; /* > */
const U8 ascii_char_0x3f[] = {5, 0x02, 0x01, 0xB1, 0x09, 0x06}; /* ? */
const U8 ascii_char_0x40[] = {6, 0x3C, 0x42, 0x99, 0xA5, 0xA5, 0xBE}; /* @ */
const U8 ascii_char_0x41[] = {5, 0x7E, 0x09, 0x09, 0x09, 0x7E}; /* A */
const U8 ascii_char_0x42[] = {5, 0x7F, 0x49, 0x49, 0x49, 0x36}; /* B */
const U8 ascii_char_0x43[] = {5, 0x3E, 0x41, 0x41, 0x41, 0x22}; /* C */
const U8 ascii_char_0x44[] = {5, 0x7F, 0x41, 0x41, 0x22, 0x1C}; /* D */
const U8 ascii_char_0x45[] = {5, 0x7F, 0x49, 0x49, 0x49, 0x41}; /* E */
const U8 ascii_char_0x46[] = {5, 0x7F, 0x09, 0x09, 0x09, 0x01}; /* F */
const U8 ascii_char_0x47[] = {5, 0x3E, 0x41, 0x41, 0x49, 0x3A}; /* G */
const U8 ascii_char_0x48[] = {5, 0x7F, 0x08, 0x08, 0x08, 0x7F}; /* H */
const U8 ascii_char_0x49[] = {3, 0x41, 0x7F, 0x41}; /* I */
const U8 ascii_char_0x4a[] = {5, 0x20, 0x41, 0x41, 0x3F, 0x01}; /* J */
const U8 ascii_char_0x4b[] = {5, 0x7F, 0x08, 0x14, 0x22, 0x41}; /* K */
const U8 ascii_char_0x4c[] = {5, 0x7F, 0x40, 0x40, 0x40, 0x40}; /* L */
const U8 ascii_char_0x4d[] = {5, 0x7F, 0x02, 0x1C, 0x02, 0x7F}; /* M */
const U8 ascii_char_0x4e[] = {5, 0x7F, 0x04, 0x08, 0x10, 0x7F}; /* N */
const U8 ascii_char_0x4f[] = {5, 0x3E, 0x41, 0x41, 0x41, 0x3E}; /* O */
const U8 ascii_char_0x50[] = {5, 0x7F, 0x09, 0x09, 0x09, 0x06}; /* P */
const U8 ascii_char_0x51[] = {5, 0x3E, 0x41, 0x41, 0x31, 0x4E}; /* Q */
const U8 ascii_char_0x52[] = {5, 0x7F, 0x09, 0x09, 0x19, 0x66}; /* R */
const U8 ascii_char_0x53[] = {5, 0x26, 0x49, 0x49, 0x49, 0x32}; /* S */
const U8 ascii_char_0x54[] = {5, 0x01, 0x01, 0x7F, 0x01, 0x01}; /* T */
const U8 ascii_char_0x55[] = {5, 0x3F, 0x40, 0x40, 0x40, 0x3F}; /* U */
const U8 ascii_char_0x56[] = {5, 0x07, 0x18, 0x60, 0x18, 0x07}; /* V */
const U8 ascii_char_0x57[] = {5, 0x3F, 0x40, 0x38, 0x40, 0x3F}; /* W */
const U8 ascii_char_0x58[] = {5, 0x63, 0x14, 0x08, 0x14, 0x63}; /* X */
const U8 ascii_char_0x59[] = {5, 0x07, 0x08, 0x78, 0x08, 0x07}; /* Y */
const U8 ascii_char_0x5a[] = {5, 0x61, 0x51, 0x49, 0x45, 0x43}; /* Z */
const U8 ascii_char_0x5b[] = {2, 0xFF, 0x81}; /* [ */
const U8 ascii_char_0x5c[] = {4, 0x03, 0x0C, 0x30, 0xC0}; /* \ */
const U8 ascii_char_0x5d[] = {2, 0x81, 0xFF}; /* ] */
const U8 ascii_char_0x5e[] = {3, 0x04, 0x02, 0x04}; /* ^ */
const U8 ascii_char_0x5f[] = {4, 0x40, 0x40, 0x40, 0x40}; /* _ */
const U8 ascii_char_0x60[] = {3, 0x07, 0x05, 0x07}; /* ` */
const U8 ascii_char_0x61[] = {5, 0x20, 0x54, 0x54, 0x54, 0x78}; /* a */
const U8 ascii_char_0x62[] = {5, 0x7F, 0x44, 0x44, 0x44, 0x38}; /* b */
const U8 ascii_char_0x63[] = {5, 0x38, 0x44, 0x44, 0x44, 0x28}; /* c */
const U8 ascii_char_0x64[] = {5, 0x38, 0x44, 0x44, 0x44, 0x7F}; /* d */
const U8 ascii_char_0x65[] = {5, 0x38, 0x54, 0x54, 0x54, 0x18}; /* e */
const U8 ascii_char_0x66[] = {4, 0x08, 0x7E, 0x09, 0x09}; /* f */
const U8 ascii_char_0x67[] = {5, 0x18, 0xA4, 0xA4, 0xA4, 0x7C}; /* g */
const U8 ascii_char_0x68[] = {5, 0x7F, 0x04, 0x04, 0x04, 0x78}; /* h */
const U8 ascii_char_0x69[] = {1, 0x7D}; /* i */
const U8 ascii_char_0x6a[] = {2, 0x80, 0x7D}; /* j */
const U8 ascii_char_0x6b[] = {5, 0x7F, 0x10, 0x10, 0x28, 0x44}; /* k */
const U8 ascii_char_0x6c[] = {1, 0x7F}; /* l */
const U8 ascii_char_0x6d[] = {5, 0x78, 0x04, 0x18, 0x04, 0x78}; /* m */
const U8 ascii_char_0x6e[] = {5, 0x7C, 0x04, 0x04, 0x04, 0x78}; /* n */
const U8 ascii_char_0x6f[] = {5, 0x38, 0x44, 0x44, 0x44, 0x38}; /* o */
const U8 ascii_char_0x70[] = {5, 0xFC, 0x24, 0x24, 0x24, 0x18}; /* p */
const U8 ascii_char_0x71[] = {5, 0x18, 0x24, 0x24, 0x24, 0xFC}; /* q */
const U8 ascii_char_0x72[] = {5, 0x7C, 0x08, 0x04, 0x04, 0x08}; /* r */
const U8 ascii_char_0x73[] = {5, 0x48, 0x54, 0x54, 0x54, 0x24}; /* s */
const U8 ascii_char_0x74[] = {4, 0x04, 0x3F, 0x44, 0x44}; /* t */
const U8 ascii_char_0x75[] = {5, 0x3C, 0x40, 0x40, 0x40, 0x7C}; /* u */
const U8 ascii_char_0x76[] = {5, 0x1C, 0x20, 0x40, 0x20, 0x1C}; /* v */
const U8 ascii_char_0x77[] = {5, 0x3C, 0x40, 0x30, 0x40, 0x3C}; /* w */
const U8 ascii_char_0x78[] = {5, 0x44, 0x28, 0x10, 0x28, 0x44}; /* x */
const U8 ascii_char_0x79[] = {5, 0x1C, 0xA0, 0xA0, 0xA0, 0x7C}; /* y */
const U8 ascii_char_0x7a[] = {5, 0x44, 0x64, 0x54, 0x4C, 0x44}; /* z */
const U8 ascii_char_0x7b[] = {3, 0x08, 0x36, 0x41}; /* { */
const U8 ascii_char_0x7c[] = {1, 0x7F}; /* | */
const U8 ascii_char_0x7d[] = {3, 0x41, 0x36, 0x08}; /* } */
const U8 ascii_char_0x7e[] = {6, 0x20, 0x10, 0x10, 0x20, 0x20, 0x10}; /* ~ */

const U8* small_font[] =
{
  ascii_char_0x20, ascii_char_0x21, ascii_char_0x22, ascii_char_0x23, ascii_char_0x24, ascii_char_0x25, ascii_char_0x26, ascii_char_0x27,
  ascii_char_0x28, ascii_char_0x29, ascii_char_0x2a, ascii_char_0x2b, ascii_char_0x2c, ascii_char_0x2d, ascii_char_0x2e, ascii_char_0x2f,
  ascii_char_0x30, ascii_char_0x31, ascii_char_0x32, ascii_char_0x33, ascii_char_0x34, ascii_char_0x35, ascii_char_0x36, ascii_char_0x37,
  ascii_char_0x38, ascii_char_0x39, ascii_char_0x3a, ascii_char_0x3b, ascii_char_0x3c, ascii_char_0x3d, ascii_char_0x3e, ascii_char_0x3f,
  ascii_char_0x40, ascii_char_0x41, ascii_char_0x42, ascii_char_0x43, ascii_char_0x44, ascii_char_0x45, ascii_char_0x46, ascii_char_0x47,
  ascii_char_0x48, ascii_char_0x49, ascii_char_0x4a, ascii_char_0x4b, ascii_char_0x4c, ascii_char_0x4d, ascii_char_0x4e, ascii_char_0x4f,
  ascii_char_0x50, ascii_char_0x51, ascii_char_0x52, ascii_char_0x53, ascii_char_0x54, ascii_char_0x55, ascii_char_0x56, ascii_char_0x57,
  ascii_char_0x58, ascii_char_0x59, ascii_char_0x5a, ascii_char_0x5b, ascii_char_0x5c, ascii_char_0x5d, ascii_char_0x5e, ascii_char_0x5f,
  ascii_char_0x60, ascii_char_0x61, ascii_char_0x62, ascii_char_0x63, ascii_char_0x64, ascii_char_0x65, ascii_char_0x66, ascii_char_0x67,
  ascii_char_0x68, ascii_char_0x69, ascii_char_0x6a, ascii_char_0x6b, ascii_char_0x6c, ascii_char_0x6d, ascii_char_0x6e, ascii_char_0x6f,
  ascii_char_0x70, ascii_char_0x71, ascii_char_0x72, ascii_char_0x73, ascii_char_0x74, ascii_char_0x75, ascii_char_0x76, ascii_char_0x77,
  ascii_char_0x78, ascii_char_0x79, ascii_char_0x7a, ascii_char_0x7b, ascii_char_0x7c, ascii_char_0x7d, ascii_char_0x7e
};



#endif /* SMALL_FONT_H_ */