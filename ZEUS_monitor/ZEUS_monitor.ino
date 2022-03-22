int offset_font = 0x0200;
const byte FONT_TABLE[] = {
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0xA5,0x81,0xBD,0x42,0x3C,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x3C,0x7E,0xDB,0xFF,0xDB,0x42,0x3C,0x00,0x00,0x00,0x00,
 0x00,0x00,0x66,0xFF,0xFF,0xFF,0xFF,0x7E,0x7E,0x3C,0x3C,0x18,0x00,0x00,0x00,0x00,
 0x00,0x00,0x08,0x18,0x3C,0x7E,0xFF,0x7E,0x3C,0x1C,0x08,0x08,0x00,0x00,0x00,0x00,
 0x00,0x00,0x18,0x3C,0x3C,0x7E,0xFF,0xFF,0x76,0x18,0x18,0x18,0x00,0x00,0x00,0x00,
 0x00,0x00,0x08,0x18,0x1C,0x3E,0x7F,0xFF,0xFF,0x76,0x18,0x18,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x06,0x0B,0x05,0x3C,0x44,0x82,0x82,0x82,0x44,0x38,0x00,0x00,0x00,0x00,
 0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x44,0x38,0x10,0x7C,0x10,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x02,0x0E,0x1A,0x12,0x12,0x12,0x12,0x12,0x1E,0x7C,0xF0,0xE0,0x00,0x00,
 0x00,0x00,0x00,0x00,0x10,0x7E,0x62,0xC3,0x62,0x7E,0x10,0x00,0x00,0x00,0x00,0x00,

 0x00,0x00,0x00,0x00,0x80,0xE0,0xFC,0xFF,0xFC,0xF0,0xE0,0x80,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x01,0x07,0x3F,0xFF,0x3F,0x0F,0x07,0x01,0x00,0x00,0x00,0x00,
 0x00,0x00,0x08,0x1C,0x2A,0x08,0x08,0x08,0x08,0x08,0x08,0x2A,0x1C,0x08,0x00,0x00,
 0x00,0x00,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x00,0x24,0x24,0x00,0x00,0x00,0x00,
 0x00,0x00,0x7E,0xF2,0xF2,0xF2,0x72,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x00,0x00,
 0x00,0x00,0x1E,0x20,0x20,0x38,0x2C,0x22,0x32,0x1C,0x06,0x02,0x22,0x3C,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x08,0x1C,0x2A,0x08,0x08,0x08,0x08,0x08,0x08,0x2A,0x1C,0x08,0x00,0x3E,0x00,
 0x00,0x00,0x08,0x1C,0x2A,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,
 0x00,0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x2A,0x1C,0x08,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x08,0x04,0x7E,0x04,0x08,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x10,0x20,0x7E,0x20,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x7E,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x7E,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x08,0x08,0x1C,0x1C,0x3C,0x7E,0x7E,0xFF,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0xFF,0x7E,0x7E,0x3C,0x1C,0x1C,0x08,0x08,0x00,0x00,0x00,0x00,

 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x10,0x10,0x00,0x00,0x00,0x00,
 0x00,0x24,0x24,0x24,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x09,0x09,0x12,0x7F,0x12,0x24,0xFF,0x24,0x48,0x48,0x00,0x00,0x00,0x00,
 0x00,0x10,0x3C,0x50,0x50,0x50,0x30,0x18,0x14,0x14,0x14,0x78,0x10,0x00,0x00,0x00,
 0x00,0x00,0x61,0x92,0x94,0x94,0x68,0x16,0x29,0x29,0x49,0x86,0x00,0x00,0x00,0x00,
 0x00,0x00,0x18,0x24,0x24,0x28,0x30,0xD1,0x89,0x8E,0xC6,0x7F,0x00,0x00,0x00,0x00,
 0x00,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x06,0x0C,0x10,0x10,0x20,0x20,0x20,0x20,0x20,0x10,0x10,0x0C,0x06,0x00,0x00,
 0x00,0x60,0x30,0x08,0x08,0x04,0x04,0x04,0x04,0x04,0x08,0x08,0x30,0x60,0x00,0x00,
 0x00,0x00,0x10,0x10,0x66,0x28,0x34,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x10,0xFE,0x10,0x10,0x10,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x08,0x10,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,
 0x00,0x02,0x04,0x04,0x04,0x08,0x08,0x18,0x10,0x10,0x20,0x20,0x20,0x40,0x00,0x00,

 0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x42,0x42,0x42,0x24,0x18,0x00,0x00,0x00,0x00,
 0x00,0x00,0x08,0x78,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x7F,0x00,0x00,0x00,0x00,
 0x00,0x00,0x78,0x04,0x04,0x04,0x08,0x08,0x10,0x20,0x40,0x7C,0x00,0x00,0x00,0x00,
 0x00,0x00,0x3C,0x02,0x02,0x02,0x1C,0x02,0x02,0x02,0x02,0x3C,0x00,0x00,0x00,0x00,
 0x00,0x00,0x04,0x0C,0x14,0x14,0x24,0x44,0x7E,0x04,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x3E,0x20,0x20,0x20,0x38,0x06,0x02,0x02,0x02,0x3C,0x00,0x00,0x00,0x00,
 0x00,0x00,0x1C,0x20,0x40,0x40,0x5C,0x62,0x42,0x42,0x22,0x1C,0x00,0x00,0x00,0x00,
 0x00,0x00,0x7E,0x02,0x04,0x04,0x08,0x10,0x10,0x10,0x20,0x20,0x00,0x00,0x00,0x00,
 0x00,0x00,0x3C,0x42,0x42,0x44,0x38,0x24,0x42,0x42,0x42,0x3C,0x00,0x00,0x00,0x00,
 0x00,0x00,0x38,0x44,0x42,0x42,0x46,0x3A,0x02,0x02,0x04,0x38,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0x08,0x10,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x02,0x0C,0x10,0x60,0x10,0x0C,0x02,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x40,0x30,0x08,0x06,0x08,0x30,0x40,0x00,0x00,0x00,0x00,
 0x00,0x00,0x7C,0x42,0x02,0x04,0x08,0x10,0x10,0x00,0x10,0x10,0x00,0x00,0x00,0x00,

 0x00,0x00,0x3C,0x62,0x4E,0x92,0x92,0x92,0x96,0xDB,0x44,0x3C,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x08,0x18,0x14,0x24,0x24,0x42,0x7E,0x42,0x81,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x7C,0x42,0x42,0x44,0x78,0x44,0x42,0x42,0x7C,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x3E,0x40,0x80,0x80,0x80,0x80,0x80,0x40,0x3E,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0xF8,0x84,0x82,0x82,0x82,0x82,0x82,0x84,0xF8,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x7E,0x40,0x40,0x40,0x7C,0x40,0x40,0x40,0x7E,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x7E,0x40,0x40,0x40,0x7C,0x40,0x40,0x40,0x40,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x3E,0x40,0x80,0x80,0x80,0x8E,0x82,0x42,0x3E,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x42,0x42,0x42,0x42,0x7E,0x42,0x42,0x42,0x42,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x3C,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x78,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x42,0x44,0x48,0x50,0x60,0x50,0x48,0x44,0x42,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x7E,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0xC6,0xC6,0xC6,0xAA,0xAA,0xAA,0x92,0x82,0x82,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x42,0x62,0x62,0x52,0x52,0x4A,0x4A,0x46,0x42,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00,0x00,0x00,

 0x00,0x00,0x00,0x7C,0x42,0x42,0x42,0x46,0x78,0x40,0x40,0x40,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0x44,0x38,0x06,0x03,0x00,0x00,
 0x00,0x00,0x00,0x78,0x44,0x44,0x44,0x78,0x48,0x4C,0x44,0x42,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x3E,0x40,0x40,0x60,0x18,0x06,0x02,0x02,0x7C,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0xFE,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x81,0x42,0x42,0x44,0x24,0x28,0x28,0x10,0x10,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x81,0x81,0x93,0x9A,0x5A,0x5A,0x66,0x66,0x24,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x81,0x42,0x24,0x18,0x18,0x18,0x24,0x42,0x81,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x81,0x42,0x44,0x28,0x18,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0xFE,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0xFE,0x00,0x00,0x00,0x00,
 0x00,0x1E,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1E,0x00,0x00,
 0x00,0x40,0x20,0x20,0x20,0x10,0x10,0x18,0x08,0x08,0x04,0x04,0x04,0x02,0x00,0x00,
 0x00,0x78,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x78,0x00,0x00,
 0x00,0x00,0x08,0x08,0x18,0x14,0x14,0x24,0x22,0x42,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,

 0x00,0x08,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x3C,0x02,0x02,0x3E,0x42,0x42,0x3F,0x00,0x00,0x00,0x00,
 0x00,0x40,0x40,0x40,0x40,0x5C,0x62,0x42,0x42,0x42,0x62,0x5C,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x1E,0x20,0x40,0x40,0x40,0x20,0x1E,0x00,0x00,0x00,0x00,
 0x00,0x02,0x02,0x02,0x02,0x3A,0x46,0x42,0x42,0x42,0x46,0x3A,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x3C,0x22,0x42,0x7E,0x40,0x40,0x3E,0x00,0x00,0x00,0x00,
 0x00,0x0E,0x10,0x10,0x10,0x7E,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x3E,0x46,0x42,0x42,0x42,0x46,0x3A,0x02,0x02,0x3C,0x00,
 0x00,0x40,0x40,0x40,0x40,0x5C,0x62,0x42,0x42,0x42,0x42,0x42,0x00,0x00,0x00,0x00,
 0x00,0x18,0x18,0x00,0x00,0x78,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x00,
 0x00,0x0C,0x0C,0x00,0x00,0x3C,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x78,0x00,
 0x00,0x40,0x40,0x40,0x40,0x44,0x48,0x50,0x60,0x58,0x44,0x42,0x00,0x00,0x00,0x00,
 0x00,0x78,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0xB6,0xDA,0x92,0x92,0x92,0x92,0x92,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x5C,0x62,0x42,0x42,0x42,0x42,0x42,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x44,0x38,0x00,0x00,0x00,0x00,

 0x00,0x00,0x00,0x00,0x00,0x5C,0x62,0x42,0x42,0x42,0x62,0x5C,0x40,0x40,0x40,0x00,
 0x00,0x00,0x00,0x00,0x00,0x3A,0x46,0x42,0x42,0x42,0x46,0x3A,0x02,0x02,0x02,0x00,
 0x00,0x00,0x00,0x00,0x00,0x5C,0x64,0x40,0x40,0x40,0x40,0x40,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x3C,0x40,0x60,0x18,0x04,0x04,0x78,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x20,0x20,0xFE,0x20,0x20,0x20,0x20,0x20,0x1E,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x46,0x3A,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x81,0x42,0x42,0x44,0x28,0x28,0x10,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x81,0x89,0x5A,0x5A,0x66,0x24,0x24,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x42,0x24,0x18,0x18,0x18,0x24,0x42,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x81,0x42,0x42,0x24,0x24,0x18,0x18,0x10,0x30,0xE0,0x00,
 0x00,0x00,0x00,0x00,0x00,0xFE,0x04,0x08,0x10,0x20,0x40,0xFE,0x00,0x00,0x00,0x00,
 0x00,0x0E,0x10,0x10,0x10,0x10,0x10,0x60,0x10,0x10,0x10,0x10,0x10,0x0E,0x00,0x00,
 0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,
 0x00,0x70,0x08,0x08,0x08,0x08,0x08,0x06,0x08,0x08,0x08,0x08,0x08,0x70,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x61,0x99,0x86,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x10,0x38,0x44,0x82,0x82,0x82,0x82,0xFE,0x00,0x00,0x00,0x00}; //FONT table
int blocksize_font = sizeof(FONT_TABLE);
//-------------------------------------------------------------------------------- Keyboard scan codes table
int offset_scan = 0x1200;
const byte SCAN_TABLE[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x60, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0x31, 0x00, 0x00, 0x00, 0x7a, 0x73, 0x61, 0x77, 0x32, 0x00,
0x00, 0x63, 0x78, 0x64, 0x65, 0x34, 0x33, 0x00, 0x00, 0x20, 0x76, 0x66, 0x74, 0x72, 0x35, 0x00,
0x00, 0x6e, 0x62, 0x68, 0x67, 0x79, 0x36, 0x00, 0x00, 0x00, 0x6d, 0x6a, 0x75, 0x37, 0x38, 0x00,
0x00, 0x27, 0x6b, 0x69, 0x6f, 0x30, 0x39, 0x00, 0x00, 0x2e, 0x2f, 0x6c, 0x3b, 0x70, 0x2d, 0x00,
0x00, 0x00, 0x27, 0x00, 0x5b, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x5d, 0x00, 0x5c, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x31, 0x00, 0x34, 0x37, 0x00, 0x00, 0x00,
0x30, 0x2e, 0x32, 0x35, 0x36, 0x38, 0x00, 0x00, 0x00, 0x2b, 0x33, 0x2d, 0x2a, 0x39, 0x00, 0x00,

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x7e, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x21, 0x00, 0x00, 0x00, 0x5a, 0x53, 0x41, 0x57, 0x40, 0x00,
0x00, 0x43, 0x58, 0x44, 0x45, 0x24, 0x23, 0x00, 0x00, 0x20, 0x56, 0x46, 0x54, 0x52, 0x25, 0x00,
0x00, 0x4e, 0x42, 0x48, 0x47, 0x59, 0x5e, 0x00, 0x00, 0x00, 0x4d, 0x4a, 0x55, 0x26, 0x2a, 0x00,
0x00, 0x3c, 0x4b, 0x49, 0x4f, 0x29, 0x28, 0x00, 0x00, 0x3e, 0x3f, 0x4c, 0x3a, 0x50, 0x5f, 0x00,
0x00, 0x00, 0x22, 0x00, 0x7b, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x7d, 0x00, 0x7c, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x31, 0x00, 0x34, 0x37, 0x00, 0x00, 0x00,
0x30, 0x2e, 0x32, 0x35, 0x36, 0x38, 0x00, 0x00, 0x00, 0x2b, 0x33, 0x2d, 0x2a, 0x39, 0x00, 0x00};
int blocksize_scan = sizeof(SCAN_TABLE);

//-------------------------------------------------------------------------------- Page 0x00
int offset_0 = 0x0000;
const byte BLOCK_0[] = {
0x00, 0xC3, 0x00, 0x7F, //jump PRIMER
0xFF, 0xFF, 0xFF, 0xFF, //reserved
0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, // uppercase hex table $8008
0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, // lowercase hex table $8018
0x63, 0x6C, 0x72,             // 0x8028 "clr"
0x64, 0x75, 0x6D, 0x70, 0x20, // 0x802B "dump "
0x73, 0x65, 0x6E, 0x64, 0x20, // 0x8030 "send "
0x6C, 0x6F, 0x61, 0x64, 0x20, // 0x8035 "load "
0x6D, 0x6F, 0x76, 0x65, 0x20, // 0x803A "move "
0x6A, 0x75, 0x6D, 0x70, 0x20, // 0x803F "jump "
0x65, 0x78, 0x65, 0x63, 0x20, // 0x8044 "exeс "
0x73, 0x79, 0x73, 0x72, 0x20, // 0x8049 "sysr "
0x73, 0x79, 0x73, 0x6C, 0x20, // 0x804E "sysl "
0x73, 0x79, 0x73, 0x68, 0x20, // 0x8053 "sysh "
0x63, 0x72, 0x63, 0x37, 0x20, // 0x8058 "crc7 "
0x73, 0x64, 0x69, 0x20,       // 0x805D "sdi "
0xFF};
int blocksize_0 = sizeof(BLOCK_0);
//-------------------------------------------------------------------------------- INTVEC table
int offset_intvec = 0x0100;
const byte INTVEC_TABLE[] = {
0x00, 0x93, 
0x00, 0x93, 
0x0D, 0x94, //SIO port B (PS/2)
0x00, 0x93,
0x00, 0x93, 
0x00, 0x93, 
0x00, 0x94, //SIO port A (UART)
0x00, 0x93,
0xFF}; //SIO interrupt table
int blocksize_intvec = sizeof(INTVEC_TABLE);
//-------------------------------------------------------------------------------- BIOS routines
int offset_bios = 0x1300;
const byte BLOCK_BIOS[] = {
0xFB, 0xED, 0x4D, //>SIO void handler $9300(+0x0003)
//---------------
0x0E, 0xFF, 0x0D, 0x20, 0xFD, 0x05, 0x20, 0xF8, 0xC9, //>Pause (input B)*4103 ticks $9303(+0x0009)
//---------------
0x7A, 0xD3, 0x11, 0x3E, 0x31, 0xD3, 0x10, 0x3E, 0x61, 0xD3, 0x10, 0xC9, // TFT_wr_com (input D) $930C(+0x000C)
0x7A, 0xD3, 0x11, 0x3E, 0xB1, 0xD3, 0x10, 0x3E, 0xE1, 0xD3, 0x10, 0xC9, // TFT_wr_data (input D) $9318(+0x000C)
0x7A, 0xD3, 0x11, 0x3E, 0xD1, 0xD3, 0x10, 0x3E, 0xE1, 0xD3, 0x10, 0xC9, // TFT_rd_data (input D) $9324(+0x000C)
//---------------
0xE5, 0xC5, 0xD5, //>TFT_char_cell_set (input D, E) $9330(+0x0059)
0x6A, 0x26, 0x00, 0x0E, 0x03, 0x37, 0x3F, 0xCB, 0x15, 0xCB, 0x14, 0x0D, 0x20, 0xF7, 
0x16, 0x2A, 0xCD, 0x0C, 0x93, 0x54, 0xCD, 0x18, 0x93, 0x55, 0xCD, 0x18, 0x93, 
0x16, 0x00, 0x1E, 0x07, 0x19, 0x54, 0xCD, 0x18, 0x93, 0x55, 0xCD, 0x18, 0x93, 
0xD1, 0xD5, 
0x6B, 0x26, 0x00, 0x0E, 0x04, 0x37, 0x3F, 0xCB, 0x15, 0xCB, 0x14, 0x0D, 0x20, 0xF7, 
0x16, 0x2B, 0xCD, 0x0C, 0x93, 0x54, 0xCD, 0x18, 0x93, 0x55, 0xCD, 0x18, 0x93, 
0x16, 0x00, 0x1E, 0x0F, 0x19, 0x54, 0xCD, 0x18, 0x93, 0x55, 0xCD, 0x18, 0x93, 
0xD1, 0xC1, 0xE1, 0xC9, 
//---------------
0xE5, 0xC5, 0xD5, //>TFT_char_fill (input A) $9389(+0x0050)
0x6F, 0x26, 0x00, 0x0E, 0x04, 0x37, 0x3F, 0xCB, 0x15, 0xCB, 0x14, 0x0D, 0x20, 0xF7,
0x16, 0x2C, 0xCD, 0x0C, 0x93, 
0xED, 0x4B, 0x00, 0xFE, 0x09, // LD BC, ($FE00) / ADD HL, BC
0x06, 0x10, 0x0E, 0x08, 0x1E, 0x80, 0x7B, 0xCB, 0x0B, 0xA6, 0x20, 0x10, 
0x3A, 0x0A, 0xFE, 0x57, 0xCD, 0x18, 0x93, 
0x3A, 0x0B, 0xFE, 0x57, 0xCD, 0x18, 0x93, 
0x18, 0x0E, 
0x3A, 0x08, 0xFE, 0x57, 0xCD, 0x18, 0x93, 
0x3A, 0x09, 0xFE, 0x57, 0xCD, 0x18, 0x93, 
0x0D, 0x20, 0xD9, 0x23, 0x05, 0x20, 0xD1, 
0xD1, 0xC1, 0xE1, 0xC9, 
//---------------
0x3A, 0x04, 0xFE, 0xFE, 0x00, 0xC8, 0x3D, 0x32, 0x04, 0xFE, //>TFT_ch_erase $93D9(+0x0027)
0xED, 0x5B, 0x0C, 0xFE, 0x3E, 0x00, 0xBA, 0x20, 0x06, 0xBB, 
0x28, 0x07, 0x1D, 0x16, 0x28, 0x15, 0xCD, 0x30, 0x93, 
0x3E, 0x20, 0xCD, 0x89, 0x93, 0xED, 0x53, 0x0C, 0xFE, 0xC9, 
//---------------
0xDB, 0x00, 0x2A, 0x06, 0xFE, 0x77, 0x23, 0x22, 0x06, 0xFE, 0xFB, 0xED, 0x4D, //>SIO read UART data (push ($FE06)) $9400(+0x000D)
//---------------
0xC5, 0xDB, 0x01, 0x4F, 0x21, 0x80, 0xFE, 0x46, //>SIO read PS/2 data (push $HL) $940D(+0x009D)
0x3E, 0xE0, 0xB8, 0x28, 0x09, 0xB9, 0x28, 0x06, //check E0 block
0x3E, 0xF0, 0xB8, 0x28, 0x49, 0xB9, 0x28, 0x7D, //check F0 block
                     
0x21, 0x80, 0xFE, 0x71, //good for print
0x2A, 0x02, 0xFE, 0x06, 0x00, 0x09, 0x7E, 
0xFE, 0x20, 0x38, 0x37, 0xFE, 0x7F, 0x30, 0x33, 
0x57, 0x2A, 0x04, 0xFE, 0x3E, 0xFF, 0xBD, 0x7A, 0x28, 0x29, 0x2C, 0x22, 0x04, 0xFE, 0x77, 0xD3, 0x00, 
0xED, 0x5B, 0x0C, 0xFE, 0x47, 0xCD, 0x30, 0x93, 0x78, 0xCD, 0x89, 0x93, 
0x3E, 0x27, 0xBA, 0x20, 0x08, 0x3E, 0x0F, 0xBB, 0x28, 0x08, 0x1C, 0x16, 0xFF, 0x14, 0xED, 0x53, 0x0C, 0xFE, 
0xC1, 0xFB, 0xED, 0x4D, 
//jp3:
0x3E, 0x12, 0xB9, 0x20, 0x0E, 0x3E, 0xF0, 0xB8, 0x21, 0x02, 0xFE, 0x36, 0x00, 0x28, 0x28, 0x36, 0x80, 0x18, 0x24, //check Shift
0x3E, 0x66, 0xB9, 0x20, 0x0E, 0x3E, 0xF0, 0xB8, 0x28, 0x1A, 0x3E, 0x08, 0xD3, 0x00, 0xCD, 0xD9, 0x93, 0x28, 0x11, //check Backspace (call char_erase)
0x3E, 0x5A, 0xB9, 0x20, 0x0C, 0x3E, 0xF0, 0xB8, 0x20, 0x07, 0x3E, 0x0D, 0xD3, 0x00, 0xCD, 0x85, 0x95, // check Enter release
0x21, 0x80, 0xFE, 0x71, 0xC1, 0xFB, 0xED, 0x4D, //jp4: not good for print
0xFF};
int blocksize_bios = sizeof(BLOCK_BIOS);
//-------------------------------------------------------------------------------- CMD PARSER
int offset_parser = 0x1500;
const byte BLOCK_PARSER[] = {
0xC5, 0xE5, //>Hex parse (input DE output A) $9500(+0x003C)
0x01, 0x10, 0x00, 0x21, 0x27, 0x80, 0x7A, 0xED, 0xB9, 0x79, 0x28, 0x0A, 
0x01, 0x10, 0x00, 0x21, 0x17, 0x80, 0x7A, 0xED, 0xB9, 0x79, 0x21, 0xFF, 0xFE, 0xED, 0x6F, 
0x01, 0x10, 0x00, 0x21, 0x27, 0x80, 0x7B, 0xED, 0xB9, 0x79, 0x28, 0x0A, 
0x01, 0x10, 0x00, 0x21, 0x17, 0x80, 0x7B, 0xED, 0xB9, 0x79, 0x21, 0xFF, 0xFE, 0xED, 0x6F, 
0x7E, 0xE1, 0xC1, 0xC9, 
//---------------
0xC5, 0xE5, 0x4F, //>Hex print (input A) $953C(+0x002A)
0x21, 0xFF, 0xFE, 0x71, 0xAF, 0xED, 0x6F, 0xC6, 0x08, 0x6F, 0x26, 0x80, 0x7E, 0xCD, 0x89, 0x93, 
0x21, 0xFF, 0xFE, 0x71, 0xAF, 0xED, 0x67, 0xC6, 0x08, 0x6F, 0x26, 0x80, 0x14, 0xCD, 0x30, 0x93, 0x7E, 0xCD, 0x89, 0x93, 
0xE1, 0xC1, 0xC9, 
//---------------
0xC5, 0xE5, //>syntax error $9566(+0x001F)
0x3A, 0x05, 0xFE, 0x67, 0x2E, 0x01, 0x3A, 0x04, 0xFE, 0x4F, 
0x1E, 0x01, 0x16, 0x00, 0xCD, 0x30, 0x93, 0x7E, 0xCD, 0x89, 0x93, 0x2C, 0x14, 0x0D, 0x20, 0xF4, 
0xE1, 0xC1, 0xC9, 
//---------------
0xC5, 0xE5, 0x3A, 0x05, 0xFE, 0x67, //>Cmdline parser  $9585(+0x010D)
0x2E, 0x00, 0x11, 0x28, 0x80, 0x2C, 0x1A, 0xBE, 0x20, 0x10, 0x1C, 0xE5, 0x7D, 0x21, 0x04, 0xFE, 0xBE, 0xE1, 0x20, 0xF1, 0xCD, 0x00, 0x97, 0xE1, 0xC1, 0xC9, // "clr" check(26)
0x2E, 0x00, 0x11, 0x2B, 0x80, 0x2C, 0x1A, 0xBE, 0x20, 0x0B, 0x1C, 0xFE, 0x20, 0x20, 0xF6, 0xCD, 0x7E, 0x97, 0xE1, 0xC1, 0xC9, // "dump " check(21)
0x2E, 0x00, 0x11, 0x30, 0x80, 0x2C, 0x1A, 0xBE, 0x20, 0x0B, 0x1C, 0xFE, 0x20, 0x20, 0xF6, 0xCD, 0xEA, 0x97, 0xE1, 0xC1, 0xC9, // "send " check
0x2E, 0x00, 0x11, 0x35, 0x80, 0x2C, 0x1A, 0xBE, 0x20, 0x0B, 0x1C, 0xFE, 0x20, 0x20, 0xF6, 0xCD, 0x2F, 0x98, 0xE1, 0xC1, 0xC9, // "load " check
0x2E, 0x00, 0x11, 0x3A, 0x80, 0x2C, 0x1A, 0xBE, 0x20, 0x0B, 0x1C, 0xFE, 0x20, 0x20, 0xF6, 0xCD, 0x6A, 0x98, 0xE1, 0xC1, 0xC9, // "move " check
0x2E, 0x00, 0x11, 0x3F, 0x80, 0x2C, 0x1A, 0xBE, 0x20, 0x0B, 0x1C, 0xFE, 0x20, 0x20, 0xF6, 0xCD, 0xB1, 0x98, 0xE1, 0xC1, 0xC9, // "jump " check
0x2E, 0x00, 0x11, 0x44, 0x80, 0x2C, 0x1A, 0xBE, 0x20, 0x0B, 0x1C, 0xFE, 0x20, 0x20, 0xF6, 0xCD, 0xCB, 0x98, 0xE1, 0xC1, 0xC9, // "exec " check
0x2E, 0x00, 0x11, 0x49, 0x80, 0x2C, 0x1A, 0xBE, 0x20, 0x0B, 0x1C, 0xFE, 0x20, 0x20, 0xF6, 0xCD, 0x00, 0x99, 0xE1, 0xC1, 0xC9, // "sysr " check
0x2E, 0x00, 0x11, 0x4E, 0x80, 0x2C, 0x1A, 0xBE, 0x20, 0x0B, 0x1C, 0xFE, 0x20, 0x20, 0xF6, 0xCD, 0x1F, 0x99, 0xE1, 0xC1, 0xC9, // "sysl " check
0x2E, 0x00, 0x11, 0x53, 0x80, 0x2C, 0x1A, 0xBE, 0x20, 0x0B, 0x1C, 0xFE, 0x20, 0x20, 0xF6, 0xCD, 0x66, 0x99, 0xE1, 0xC1, 0xC9, // "sysh " check
0x2E, 0x00, 0x11, 0x58, 0x80, 0x2C, 0x1A, 0xBE, 0x20, 0x0B, 0x1C, 0xFE, 0x20, 0x20, 0xF6, 0xCD, 0xA3, 0x99, 0xE1, 0xC1, 0xC9, // "crc7 " check
0x2E, 0x00, 0x11, 0x5D, 0x80, 0x2C, 0x1A, 0xBE, 0x20, 0x0B, 0x1C, 0xFE, 0x20, 0x20, 0xF6, 0xCD, 0xDE, 0x99, 0xE1, 0xC1, 0xC9, // "sdi " check
0xCD, 0x66, 0x95, // go syntax error
0xE1, 0xC1, 0xC9, 
0xFF};
int blocksize_parser = sizeof(BLOCK_PARSER);
//-------------------------------------------------------------------------------- CMDS
int offset_cmds = 0x1700;
const byte BLOCK_CMDS[] = {
0x16, 0x36, 0xCD, 0x0C, 0x93, 	//>"clr" command $9700(+0x007E)
0x16, 0x08, 0xCD, 0x18, 0x93,   // com (0x36) Memory access control MV=0;

0x16, 0x2A, 0xCD, 0x0C, 0x93, //Column address set com
0x16, 0x00, 0xCD, 0x18, 0x93, 
0x16, 0x10, 0xCD, 0x18, 0x93, 
0x16, 0x00, 0xCD, 0x18, 0x93, 
0x16, 0xEF, 0xCD, 0x18, 0x93, 
0x16, 0x2B, 0xCD, 0x0C, 0x93, //Page address set com
0x16, 0x00, 0xCD, 0x18, 0x93, 
0x16, 0x00, 0xCD, 0x18, 0x93, 
0x16, 0x01, 0xCD, 0x18, 0x93, 
0x16, 0x3F, 0xCD, 0x18, 0x93, 

0x16, 0x2C, 0xCD, 0x0C, 0x93, 
0xC5, 0x06, 0xFF, 0x0E, 0xE8, 
0x3A, 0x0A, 0xFE, 0x57, 0xCD, 0x18, 0x93, //rg
0x3A, 0x0B, 0xFE, 0x57, 0xCD, 0x18, 0x93, //gb
0x0D, 0x20, 0xEF, 0x05, 0x20, 0xEA, 
0x06, 0x41, 0x0E, 0xE8, 
0x3A, 0x0A, 0xFE, 0x57, 0xCD, 0x18, 0x93, //rg
0x3A, 0x0B, 0xFE, 0x57, 0xCD, 0x18, 0x93, //gb
0x0D, 0x20, 0xEF, 0x05, 0x20, 0xEA, 0xC1, 

0x16, 0x36, 0xCD, 0x0C, 0x93, // com (0x36) Memory access control MV=1;
0x16, 0x28, 0xCD, 0x18, 0x93, 
0xC9, 
//---------------
0x3A, 0x05, 0xFE, 0x67, 0x2E, 0x05, // "dump " command $977E(+0x006C)
0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x47, 
0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x4F, 
0x1E, 0x00, 0x16, 0x00, 
0xD9, 0x06, 0x0F, 0x05, 0x28, 0x44, 

0x21, 0x84, 0x00, //color Y/W
0xCB, 0x40, 
0x28, 0x02, 
0xCB, 0xE4, 
0x22, 0x08, 0xFE, 

0x0E, 0x08, 0xD9, 0x16, 0x00, 0x1C, 
0xCD, 0x30, 0x93, 0x78, 0xCD, 0x3C, 0x95, 0x14, 0xCD, 0x30, 0x93, 0x79, 0xCD, 0x3C, 0x95, 0x14, 0xCD, 0x30, 0x93, 0x3E, 0x3A, 0xCD, 0x89, 0x93, 0x14, 
0xCD, 0x30, 0x93, 0x3E, 0x20, 0xCD, 0x89, 0x93, 0x14, 0xCD, 0x30, 0x93, 0x0A, 0xCD, 0x3C, 0x95, 
0x03, 0x14, 0xD9, 0x0D, 0x28, 0xBC, 0xD9, 0x18, 0xE7, 
0x21, 0x80, 0x00, 0x22, 0x08, 0xFE, //color R
0xD9, 0xC9, 
//---------------
0x3A, 0x05, 0xFE, 0x67, 0x2E, 0x05, //>"send " command $97EA(+0x0045)
0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x47, 0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x4F, 
0xC5, 0xDD, 0xE1, 
0x2C, 0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x47, 0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x4F, 
0xDD, 0xE5, 0xE1, 0x51, 0xAF, 0xBA, 0x78, 0x28, 0x01, 0x3C, 0x0E, 0x00, 
0xFE, 0x01, 0x20, 0x03, 0x42, 0x18, 0x02, 0x06, 0x00, 0xED, 0xB3, 0x3D, 0x20, 0xF2, 
0xC9, 
//---------------
0x3A, 0x05, 0xFE, 0x67, 0x2E, 0x05, //>"load " command $982F(+0x003B)
0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x47, 
0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x4F, 
0xDD, 0x21, 0x10, 0xFE, 0xDD, 0x36, 0x00, 0x09, 
0x2C, 0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x02, 
0x3E, 0x03, 0xDD, 0x86, 0x00, 0xDD, 0x77, 0x00, 
0xE5, 0x21, 0x04, 0xFE, 0xBE, 0xE1, 0x28, 0x03, 0x0C, 0x18, 0xE4, 
0xC9, 
//---------------
0x3A, 0x05, 0xFE, 0x67, 0x2E, 0x05, //>"move " command $986A(+0x0047)
0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x47, 0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x4F, 
0xC5, 0xDD, 0xE1, 
0x2C, 0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x47, 0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x4F, 
0xC5, 0xFD, 0xE1, 
0x2C, 0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x47, 0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x4F, 
0xDD, 0xE5, 0xD1, 0xFD, 0xE5, 0xE1, 0xED, 0xB0, 
0xC9, 
//---------------
0x3A, 0x05, 0xFE, 0x67, 0x2E, 0x05, //>"jump " command $98B1(+0x001A)
0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x47, 
0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x4F, 
0xC5, 0xE1, 0xE9, 0xC9, 
//---------------
0x3A, 0x05, 0xFE, 0x67, 0x2E, 0x04, 0x01, 0x00, 0x01, //>"exeс " command $98CB(+0x0035)
0xDD, 0x21, 0xFE, 0xFE, 0xDD, 0x36, 0x00, 0x04, 
0x2C, 0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x02, 
0x3E, 0x03, 0xDD, 0x86, 0x00, 0xDD, 0x77, 0x00, 
0xE5, 0x21, 0x04, 0xFE, 0xBE, 0xE1, 0x28, 0x03, 0x0C, 0x18, 0xE4, 
0x3E, 0xC9, 0x0C, 0x02, 0xCD, 0x00, 0x01, 0xC9, 
//---------------
0x3A, 0x05, 0xFE, 0x67, 0x2E, 0x05, //>"sysr " command $9900(+0x001F)
0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x32, 0x81, 0xFE, 
0xD3, 0xF0,       //write A to sys reg
0x21, 0x00, 0xC3, //LD HL with new jump address
0x22, 0x00, 0x00, // write HL to $0000
0x2A, 0x02, 0x80, //LD HL with setup address
0x22, 0x02, 0x00, // write HL to $0002
0xC9, 
//---------------
0x3A, 0x05, 0xFE, 0x67, 0x2E, 0x05, //>"sysl " command $991F(+0x0047)
0x2C, 0x56, 0xC5, 0xE5, 0x3A, 0x81, 0xFE, 0x21, 0xFF, 0xFE, 0x77, 
0x01, 0x10, 0x00, 0x21, 0x27, 0x80, 0x7A, 0xED, 0xB9, 0x79, 0x28, 0x0A, 
0x01, 0x10, 0x00, 0x21, 0x17, 0x80, 0x7A, 0xED, 0xB9, 0x79, 0x21, 0xFF, 0xFE, 0xED, 0x67, 0x7E, 0xED, 0x67, 0x7E, 0x32, 0x81, 0xFE, 0xE1, 0xC1, 
0x3A, 0x81, 0xFE, 0xD3, 0xF0, //output state to sysreg
0x21, 0x00, 0xC3, //LD HL with new jump address
0x22, 0x00, 0x00, // write HL to $0000
0x2A, 0x02, 0x80, //LD HL with setup address
0x22, 0x02, 0x00, // write HL to $0002
0xC9, 
//---------------
0x3A, 0x05, 0xFE, 0x67, 0x2E, 0x05, //>"sysh " command $9966(+0x003D)
0x2C, 0x56, 0xC5, 0xE5, 0x3A, 0x81, 0xFE, 0x21, 0xFF, 0xFE, 0x77, 
0x01, 0x10, 0x00, 0x21, 0x27, 0x80, 0x7A, 0xED, 0xB9, 0x79, 0x28, 0x0A, 
0x01, 0x10, 0x00, 0x21, 0x17, 0x80, 0x7A, 0xED, 0xB9, 0x79, 0x21, 0xFF, 0xFE, 0xED, 0x6F, 0x3A, 0x81, 0xFE, 0xED, 0x6F, 0x7E, 0x32, 0x81, 0xFE, 0xE1, 0xC1, 
0x3A, 0x81, 0xFE, 0xD3, 0xF0, //output state to sysreg
0xC9, 
//---------------
0x3A, 0x05, 0xFE, 0x67, 0x2E, 0x04, 0x01, 0x00, 0x01, //>"crc7 " command $99A3(+0x003B)
0xDD, 0x21, 0xFE, 0xFE, 0xDD, 0x75, 0x00, //temp variable
0x2C, 0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0x02, //byte parse
0x3E, 0x03, 0xDD, 0x86, 0x00, 0xDD, 0x77, 0x00, //check code end
0xE5, 0x21, 0x04, 0xFE, 0xBE, 0xE1, 0x28, 0x03, 0x0C, 0x18, 0xE4, //check code end
0xCD, 0x00, 0x9B, //call crc7_add
0x1E, 0x01, 0x16, 0x00, 0xCD, 0x30, 0x93, //set print pos, 
0x7E, 0xCD, 0x3C, 0x95, // print (HL)
0xC9, 
//---------------
0xDD, 0x21, 0xFE, 0xFE, 0x3A, 0x05, 0xFE, 0x67, 0x2E, 0x03, //>"sdi " command (L bytes at $0100) $99DE(+0x0039)
0x2C, 0x2C, 0x56, 0x2C, 0x5E, 0xCD, 0x00, 0x95, 0xDD, 0x77, 0x00, 
0x4D, 0x21, 0x00, 0x01, 0x3E, 0x00, 0xD3, 0x01, 0xCD, 0x3D, 0x9B, 0x23, 0x0B, 0x28, 0x02, 0x18, 0xF7, 
0xDD, 0x4E, 0x00, 0x21, 0x00, 0xFC, 0xCD, 0xBF, 0x9B, 0x23, 0x0D, 0x20, 0xF9, 
0x3E, 0x01, 0xD3, 0x01, 
0xC9, 
0xFF};
int blocksize_cmds = sizeof(BLOCK_CMDS);
//-------------------------------------------------------------------------------- SD routines
int offset_sd = 0x1B00;
const byte BLOCK_SD[] = {
0xC5, 0xE1, 0x7E, 0x26, 0xFC, 0x77, 0xAF, 0xBD, 0x28, 0x04, 0x2D, 0x60, 0x18, 0xF4, //crc7_add [input BC last byte pointer] $9B00(+0x003D)
0x59, 0x1C, 0xCB, 0x23, 0xCB, 0x23, 0xCB, 0x23, 
0xAF, 0x69, 0x2C, 0x37, 0x3F, 
0x2D, 0x28, 0x04, 0xCB, 0x16, 0x18, 0xF9, 0xCB, 0x16, 0x38, 0x05, 0x1D, 0x28, 0x0C, 0x18, 0xEB, 
0x3E, 0x12, 0xAE, 0x77, 0xAF, 0x1D, 0x28, 0x02, 0x18, 0xE1, 
0xCB, 0xC6, 0x7E, 0xC5, 0xE1, 0x2C, 0x77, 
0xC9, 
//---------------
0xAF, 
0xC8, 0x7E, 0xC8, 0xCF, 0x20, 0x02, 0xC8, 0x8F, 0xC8, 0xDF, 0xD3, 0x01, 0xC8, 0x9F, 0xD3, 0x01, //SD wr byte [input HL] $9B3D(+0x0082)
0xC8, 0x76, 0xC8, 0xCF, 0x20, 0x02, 0xC8, 0x8F, 0xC8, 0xDF, 0xD3, 0x01, 0xC8, 0x9F, 0xD3, 0x01, 
0xC8, 0x6E, 0xC8, 0xCF, 0x20, 0x02, 0xC8, 0x8F, 0xC8, 0xDF, 0xD3, 0x01, 0xC8, 0x9F, 0xD3, 0x01, 
0xC8, 0x66, 0xC8, 0xCF, 0x20, 0x02, 0xC8, 0x8F, 0xC8, 0xDF, 0xD3, 0x01, 0xC8, 0x9F, 0xD3, 0x01, 
0xC8, 0x5E, 0xC8, 0xCF, 0x20, 0x02, 0xC8, 0x8F, 0xC8, 0xDF, 0xD3, 0x01, 0xC8, 0x9F, 0xD3, 0x01, 
0xC8, 0x56, 0xC8, 0xCF, 0x20, 0x02, 0xC8, 0x8F, 0xC8, 0xDF, 0xD3, 0x01, 0xC8, 0x9F, 0xD3, 0x01, 
0xC8, 0x4E, 0xC8, 0xCF, 0x20, 0x02, 0xC8, 0x8F, 0xC8, 0xDF, 0xD3, 0x01, 0xC8, 0x9F, 0xD3, 0x01, 
0xC8, 0x46, 0xC8, 0xCF, 0x20, 0x02, 0xC8, 0x8F, 0xC8, 0xDF, 0xD3, 0x01, 0xC8, 0x9F, 0xD3, 0x01, 
0xC9, 
//---------------
0xC5, 0x0E, 0x08, //SD rd byte [output (HL)] $9BBF(+0x0018)
0xC8, 0xDF, 0xDB, 0x01, 0xC8, 0x57, 0x37, 0x20, 0x01, 0x3F, 0xCB, 0x16, 0xC8, 0x9F, 0xD3, 0x01, 0x0D, 0x20, 0xED, 
0xC1, 0xC9, 

0xFF};
int blocksize_sd = sizeof(BLOCK_SD);
//-------------------------------------------------------------------------------- SETUP
int offset_setup = 0x2000;
const byte BLOCK_SETUP[] = {
0x31, 0xFF, 0xFF, //set SP to 0xFFFF
0x3E, 0x81, 0xED, 0x47, //set int table to $8100
//---------------------------
//---------------------------------------------------- 2BYTE values & pointers
0x21, 0x00, 0x82, //font table pointer
0x22, 0x00, 0xFE, //$FE00
0x21, 0x00, 0x92, //keyb scan table pointer
0x22, 0x02, 0xFE, //$FE02
0x21, 0x00, 0xFD, //keyb buff pointer
0x22, 0x04, 0xFE, //$FE04
0x21, 0x00, 0x01, //UART buff pointer
0x22, 0x06, 0xFE, //$FE06
0x21, 0x80, 0x00, //font color (R=8000, Y=8400, W=8410)
0x22, 0x08, 0xFE, //$FE08
0x21, 0x00, 0x00, //background color
0x22, 0x0A, 0xFE, //$FE0A
0x21, 0x00, 0x00, //TFT char position row/col
0x22, 0x0C, 0xFE, //$FE0C
//---------------------------------------------------- 1BYTE values
0x21, 0x80, 0xFE, //$FE80
0x36, 0x00,       //LD (HL), 0 :prev keyb char
0x21, 0x81, 0xFE, //$FE81 <- 0xFF :SYSR state
0x36, 0xFF, 
//---------------------------------------------------- 
//---------------------------------------------------- IO CONFIG
0x3E, 0x03, 0xD3, 0x12, //PIO ports config
0x3E, 0xCF, 0xD3, 0x12, 
0x3E, 0x04, 0xD3, 0x12, 
0x3E, 0x03, 0xD3, 0x13, 
0x3E, 0xCF, 0xD3, 0x13, 
0x3E, 0x00, 0xD3, 0x13, 

0x3E, 0x18, 0xD3, 0x02, //SIO portA config
0x3E, 0x14, 0xD3, 0x02, 
0x3E, 0xC4, 0xD3, 0x02, 
0x3E, 0x03, 0xD3, 0x02, 
0x3E, 0xC1, 0xD3, 0x02, 
0x3E, 0x05, 0xD3, 0x02, 
0x3E, 0x68, 0xD3, 0x02, 
0x3E, 0x11, 0xD3, 0x02, 
0x3E, 0x98, 0xD3, 0x02, //wait(0x98)*

0x3E, 0x18, 0xD3, 0x03, //SIO portB config
0x3E, 0x14, 0xD3, 0x03, 
0x3E, 0x05, 0xD3, 0x03, //parity(0x05)*
0x3E, 0x03, 0xD3, 0x03, 
0x3E, 0xC1, 0xD3, 0x03, 
0x3E, 0x05, 0xD3, 0x03, 
0x3E, 0x60, 0xD3, 0x03, 
0x3E, 0x11, 0xD3, 0x03, 
0x3E, 0x1C, 0xD3, 0x03, //int.vectors on
0x3E, 0x02, 0xD3, 0x03, 
0x3E, 0x00, 0xD3, 0x03, 
//---------------------------
//----------------------------------------------------------- TFT ILI9341 init.
0x16, 0xC0, 0xCD, 0x0C, 0x93, // com (0xC0) Power control
0x16, 0x17, 0xCD, 0x18, 0x93, // GVDD < (Vcc-0.5V)
0x16, 0xC1, 0xCD, 0x0C, 0x93, // com (0xC1) Power control
0x16, 0x10, 0xCD, 0x18, 0x93, // default
0x16, 0xC5, 0xCD, 0x0C, 0x93, // com (0xC5) VCM control
0x16, 0x31, 0xCD, 0x18, 0x93, // VCOMH = 3.925V (Contrast)
0x16, 0x3C, 0xCD, 0x18, 0x93, // VCOML = -1.0V
0x16, 0xC7, 0xCD, 0x0C, 0x93, // com (0xC7) VCM control2
0x16, 0x86, 0xCD, 0x18, 0x93, // nVM = 1; VMF = -58
0x16, 0xB1, 0xCD, 0x0C, 0x93, // com (0xB1) Frame Rate Control
0x16, 0x00, 0xCD, 0x18, 0x93, // fosc
0x16, 0x18, 0xCD, 0x18, 0x93, // 24 clk/line

0x16, 0xB6, 0xCD, 0x0C, 0x93, // com (0xB6) Display function control
0x16, 0x08, 0xCD, 0x18, 0x93, // PTG = interval scan; PT = +V63 - V0
0x16, 0x82, 0xCD, 0x18, 0x93, // REV = white; GS = 1->320; SS = 1->720; SM = 0;
0x16, 0x27, 0xCD, 0x18, 0x93, // NL = 320 lines
0x16, 0x3A, 0xCD, 0x0C, 0x93, // com (0x3A) Pixel format set
0x16, 0x55, 0xCD, 0x18, 0x93, // DPI 16bit; DBI 16bit
0x16, 0x38, 0xCD, 0x0C, 0x93, // com (0x38) Idle mode OFF
0x16, 0x11, 0xCD, 0x0C, 0x93, // com (0x11) Exit sleep

0x06, 0xFF, 0xCD, 0x03, 0x93, // pause 100ms
0x16, 0x29, 0xCD, 0x0C, 0x93, // com (0x29) Display on
0x16, 0x2C, 0xCD, 0x0C, 0x93, // com (0x2C)

0x16, 0x36, 0xCD, 0x0C, 0x93, // com (0x36) Memory access control
0x16, 0x08, 0xCD, 0x18, 0x93, // MY=0; MX=0; MV=0; ML=0; BGR=1; MH=0
//--------------------------------------------------------------------------- TFT fill background
0x16, 0x2C, 0xCD, 0x0C, 0x93, //Mem write com backcolor
0xC5, 0x06, 0xFF, 0x0E, 0xF0, //PUSH BC/LD B,FF/LD C,F0 255x240
0x3A, 0x0A, 0xFE, 0x57, 0xCD, 0x18, 0x93, //rg
0x3A, 0x0B, 0xFE, 0x57, 0xCD, 0x18, 0x93, //gb
0x0D, 0x20, 0xEF, 0x05, 0x20, 0xEA, 
0x06, 0x41, 0x0E, 0xF0, //LD B,41/LD C,F0
0x3A, 0x0A, 0xFE, 0x57, 0xCD, 0x18, 0x93, //rg
0x3A, 0x0B, 0xFE, 0x57, 0xCD, 0x18, 0x93, //gb
0x0D, 0x20, 0xEF, 0x05, 0x20, 0xEA, 0xC1, 

0x16, 0x36, 0xCD, 0x0C, 0x93, // com (0x36) Memory access control
0x16, 0x28, 0xCD, 0x18, 0x93, // MY=0; MX=0; MV=1; ML=0; BGR=1; MH=0
//----------------------------------------------------------------------- TFT intro
0xED, 0x5B, 0x0C, 0xFE, //LD DE, ($FE0C)
0xCD, 0x30, 0x93, //call TFT_char_cell_set
//0x3E, 0x41, 0xCD, 0x89, 0x93, //TFT <- "A"
//0x14, 0xCD, 0x30, 0x93, //INC D + call TFT_char_cell_set
0x3E, 0x3E, 0xCD, 0x89, 0x93, //TFT <- ">"
0x14, //INC D
0xED, 0x53, 0x0C, 0xFE, //LD ($FE0C), DE
//----------------------------------------------------------------------- Banks ID
0x3E, 0xF0, 0x06, 0xFF, //A,B <- addressed banks range
0xD3, 0xF0, 0x32, 0x07, 0x00, 0x3C, 0xB8, 0X20, 0xF7, //$0007 <- bank identifiers
//----------------------------------------------------------------------- Banks ID check
0x0E, 0xF0, 0x06, 0xFE, 
0x3E, 0xEF, 0xB8, 0X28, 0x0B, 
0xED, 0x41, 0x3A, 0x07, 0x00, 0xB8, 0X20, 0x03, 0x05, 0X18, 0xF0,  
0x16, 0x25, 0x1E, 0x0E, 0xCD, 0x30, 0x93, 0x3E, 0xFF, 0x90, 0xCD, 0x3C, 0x95, //aval. banks number print
0x14, 0xCD, 0x30, 0x93, 0x3E, 0x68, 0xCD, 0x89, 0x93, //"h" print
//----------------------------------------------------------------------- Bank E init
0x3A, 0x81, 0xFE, 0x21, 0xFF, 0xFE, 0x77, 
0x3E, 0xFE, 0xED, 0x67, 0x7E, 0xED, 0x67, 0x7E, //SYSREG state low nibble write
0x32, 0x81, 0xFE, 0xD3, 0xF0, //SYSREG <- state (switch to bank E)
0x21, 0x00, 0xC3, //HL <- 0x00, 0xC3,
0x22, 0x00, 0x00, //$0000  <-  HL
0x2A, 0x02, 0x80, //HL <- ($8002)
0x22, 0x02, 0x00, //$0002  <-  HL
//----------------------------------------------------------------------- UART ready
0xED, 0x5E, 0xFB, //int mode 2 EI
0x3E, 0x4F, 0xD3, 0x00, //UART <- "O"
0x3E, 0x4B, 0xD3, 0x00, //UART <- "K"
0x3E, 0x0D, 0xD3, 0x00, //UART <- "cr"

0x76, 0x18, 0xFD, //Halt, JR -3
0xFF}; 
int blocksize_setup = sizeof(BLOCK_SETUP);
//------------------------------------------------------------------- 
//------------------------------------------------------------------- PRIMER
int offset_primer = 0x7F00;
const byte BLOCK_PRIMER[] = {
0x21, 0x00, 0x00, 0x11, 0x00, 0x80, 0x01, 0x00, 0x30, 0xED, 0xB0, //copy 0x3000 bytes block $0000 -> $8000
0x21, 0x00, 0xA0, //HL <-  new setup address
0x22, 0x02, 0x80, //$8002  <-  HL
0xC3, 0x00, 0x80, //jump $8000
0xFF};
int blocksize_primer = sizeof(BLOCK_PRIMER);
//--------------------------------------------------------------------------------
//                                                                   ARDUINO MEGA
//--------------------------------------------------------------------------------
#define READ 39
#define WRITE 29  //LED
#define BUTTON 26
const char ADDR[] = {46,44,42,40, 38,36,34,32, 33,35,41,37, 30,31,28,43}; //addr pins; pin43 = CE#
const char DATA[] = {48,50,52,53, 51,49,47,45}; //data pins
char report[15];
char output[15];
int ButtonState;

byte readEEPROM(unsigned int address){
  for (int n=0; n<8; n++){pinMode(DATA[n], INPUT);}
  byte data = 0;
  digitalWrite(READ, 1);
  digitalWrite(WRITE, 1);
  for (int n=0; n<16; n++){digitalWrite(ADDR[n],bitRead(address,n));}
  digitalWrite(READ, 0);
  for (int n=0; n<8; n++){data = (data<<1) | digitalRead(DATA[7-n]);}
  digitalWrite(READ, 1);
  return data;
}
void writeEEPROM(unsigned int address, byte data){
  for (int n=0; n<8; n++){pinMode(DATA[n], OUTPUT);}
  digitalWrite(READ, 1);
  digitalWrite(WRITE, 1);
  for (int n=0; n<16; n++){digitalWrite(ADDR[n],bitRead(address,n));}
  delay(7);
  digitalWrite(WRITE, 0);  //LED on
  for (int n=0; n<8; n++){digitalWrite(DATA[n],bitRead(data,n));}
  delay(6);
  digitalWrite(WRITE, 1);
  }

void setup() {
  for (int n=0; n<16; n++){pinMode(ADDR[n], OUTPUT);}
  digitalWrite(ADDR[15], 1);  //CE# off
  pinMode(READ, OUTPUT);
  pinMode(WRITE, OUTPUT);
  pinMode(BUTTON, INPUT);
  digitalWrite(WRITE, 1);
  digitalWrite(READ, 1);
  Serial.begin(115200);
}

void loop() {
  unsigned int addr_in = 0;
  ButtonState = digitalRead(BUTTON);
  if(!ButtonState){    
    int byteswrit = 0;
//    Serial.println("writing..");  
    for(int j=0; j<0x0100; j++){writeEEPROM(0x1600 + j, 0xFF); byteswrit++;}

//    for(int j=0; j<blocksize_font; j++){writeEEPROM(offset_font + j, FONT_TABLE[j]); byteswrit++;}
//    for(int j=0; j<blocksize_scan; j++){writeEEPROM(offset_scan + j, SCAN_TABLE[j]); byteswrit++;}

//    for(int j=0; j<blocksize_0; j++){writeEEPROM(offset_0 + j, BLOCK_0[j]); byteswrit++;}
//    for(int j=0; j<blocksize_intvec; j++){writeEEPROM(offset_intvec + j, INTVEC_TABLE[j]); byteswrit++;}
    for(int j=0; j<blocksize_bios; j++){writeEEPROM(offset_bios + j, BLOCK_BIOS[j]); byteswrit++;}
    
    for(int j=0; j<blocksize_parser; j++){writeEEPROM(offset_parser + j, BLOCK_PARSER[j]); byteswrit++;}
    for(int j=0; j<blocksize_cmds; j++){writeEEPROM(offset_cmds + j, BLOCK_CMDS[j]); byteswrit++;}
//    for(int j=0; j<blocksize_sd; j++){writeEEPROM(offset_sd + j, BLOCK_SD[j]); byteswrit++;}
    
//    for(int j=0; j<blocksize_setup; j++){writeEEPROM(offset_setup + j, BLOCK_SETUP[j]); byteswrit++;}
//    for(int j=0; j<blocksize_primer; j++){writeEEPROM(offset_primer + j, BLOCK_PRIMER[j]); byteswrit++;}

    digitalWrite(ADDR[15], 1);  //CE# off
    sprintf(report, "0x%04x bytes written", byteswrit);
    Serial.println(report);
  }
  if(Serial.available()){
    addr_in = int(Serial.parseInt());
    byte data1 = readEEPROM(addr_in);
    sprintf(output, "0x%04x 0x%02x", addr_in, data1);
    Serial.println(output);
  }
}
