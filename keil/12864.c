#include "12864.h"

/********************************************************************
功    能：定义字库：Hzk-汉字库，Szk-数字库，Fhk-符号库，Zmk-字母库
参    数：无
返回值  ：无
使用方法：根据需要自备
*********************************************************************/
uchar code Hzk[]={
/*--  文字:  ℃  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x06,0x09,0x09,0xE6,0xF8,0x0C,0x04,0x02,0x02,0x02,0x02,0x02,0x04,0x1E,0x00,0x00,
0x00,0x00,0x00,0x07,0x1F,0x30,0x20,0x40,0x40,0x40,0x40,0x40,0x20,0x10,0x00,0x00,
};
uchar code Szk[]={
/*--  文字:  0  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x0F,0x10,0x20,0x20,0x10,0x0F,0x00,

/*--  文字:  1  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,

/*--  文字:  2  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x70,0x08,0x08,0x08,0x08,0xF0,0x00,0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00,

/*--  文字:  3  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x30,0x08,0x08,0x08,0x88,0x70,0x00,0x00,0x18,0x20,0x21,0x21,0x22,0x1C,0x00,

/*--  文字:  4  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x80,0x40,0x30,0xF8,0x00,0x00,0x00,0x06,0x05,0x24,0x24,0x3F,0x24,0x24,

/*--  文字:  5  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0xF8,0x88,0x88,0x88,0x08,0x08,0x00,0x00,0x19,0x20,0x20,0x20,0x11,0x0E,0x00,

/*--  文字:  6  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0xE0,0x10,0x88,0x88,0x90,0x00,0x00,0x00,0x0F,0x11,0x20,0x20,0x20,0x1F,0x00,

/*--  文字:  7  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x18,0x08,0x08,0x88,0x68,0x18,0x00,0x00,0x00,0x00,0x3E,0x01,0x00,0x00,0x00,

/*--  文字:  8  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x70,0x88,0x08,0x08,0x88,0x70,0x00,0x00,0x1C,0x22,0x21,0x21,0x22,0x1C,0x00,

/*--  文字:  9  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0xF0,0x08,0x08,0x08,0x10,0xE0,0x00,0x00,0x01,0x12,0x22,0x22,0x11,0x0F,0x00,

/*--  文字:  -  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
};

uchar code Fhk[]={
/*--  文字:    --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	
/*--  文字:  +  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x0F,0x01,0x01,0x01,

/*--  文字:  -  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,

/*--  文字:  *  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x40,0x40,0x80,0xF0,0x80,0x40,0x40,0x00,0x02,0x02,0x01,0x0F,0x01,0x02,0x02,0x00,

/*--  文字:  /  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0xC0,0x38,0x04,0x00,0x00,0x60,0x18,0x07,0x00,0x00,0x00,0x00,

/*--  文字:  ：  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x36,0x36,0x00,0x00,0x00,0x00,

/*--  文字:  ？  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x38,0x34,0x02,0x82,0xC2,0x7C,0x00,0x00,0x00,0x00,0x00,0x37,0x37,0x00,

/*--  文字:  ~  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x02,0x01,0x02,0x02,0x04,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  %  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0xF0,0x08,0xF0,0x80,0x60,0x18,0x00,0x00,0x00,0x31,0x0C,0x03,0x1E,0x21,0x1E,0x00,

/*--  文字:  #  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x40,0xC0,0x78,0x40,0xC0,0x78,0x00,0x00,0x04,0x3F,0x04,0x04,0x3F,0x04,0x00,

/*--  文字:  <  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x20,0x00,

/*--  文字:  >  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x08,0x10,0x20,0x40,0x80,0x00,0x00,0x00,0x20,0x10,0x08,0x04,0x02,0x01,0x00,

/*--  文字:  .  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00,
};

uchar code Zmk[]={
/*--  文字:  A  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0xC0,0x38,0xE0,0x00,0x00,0x00,0x20,0x3C,0x23,0x02,0x02,0x27,0x38,0x20,

/*--  文字:  B  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0xF8,0x88,0x88,0x88,0x70,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x11,0x0E,0x00,

/*--  文字:  C  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0xC0,0x30,0x08,0x08,0x08,0x08,0x38,0x00,0x07,0x18,0x20,0x20,0x20,0x10,0x08,0x00,

/*--  文字:  D  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0xF8,0x08,0x08,0x08,0x10,0xE0,0x00,0x20,0x3F,0x20,0x20,0x20,0x10,0x0F,0x00,

/*--  文字:  E  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x20,0x23,0x20,0x18,0x00,

/*--  文字:  F  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x00,0x03,0x00,0x00,0x00,

/*--  文字:  G  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0xC0,0x30,0x08,0x08,0x08,0x38,0x00,0x00,0x07,0x18,0x20,0x20,0x22,0x1E,0x02,0x00,

/*--  文字:  H  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x20,0x3F,0x21,0x01,0x01,0x21,0x3F,0x20,

/*--  文字:  I  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

/*--  文字:  J  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,0x00,

/*--  文字:  K  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0xF8,0x88,0xC0,0x28,0x18,0x08,0x00,0x20,0x3F,0x20,0x01,0x26,0x38,0x20,0x00,

/*--  文字:  L  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0xF8,0x08,0x00,0x00,0x00,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x20,0x30,0x00,

/*--  文字:  M  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0xF8,0xF8,0x00,0xF8,0xF8,0x08,0x00,0x20,0x3F,0x01,0x3E,0x01,0x3F,0x20,0x00,

/*--  文字:  N  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0xF8,0x30,0xC0,0x00,0x08,0xF8,0x08,0x20,0x3F,0x20,0x00,0x07,0x18,0x3F,0x00,

/*--  文字:  O  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x10,0x20,0x20,0x20,0x10,0x0F,0x00,

/*--  文字:  P  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0xF8,0x08,0x08,0x08,0x08,0xF0,0x00,0x20,0x3F,0x21,0x01,0x01,0x01,0x00,0x00,

/*--  文字:  Q  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x10,0x28,0x28,0x30,0x50,0x4F,0x00,

/*--  文字:  R  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0xF8,0x88,0x88,0x88,0x88,0x70,0x00,0x20,0x3F,0x20,0x00,0x03,0x0C,0x30,0x20,

/*--  文字:  S  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x70,0x88,0x08,0x08,0x08,0x38,0x00,0x00,0x38,0x20,0x21,0x21,0x22,0x1C,0x00,

/*--  文字:  T  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x18,0x08,0x08,0xF8,0x08,0x08,0x18,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00,

/*--  文字:  U  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00,

/*--  文字:  V  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0x78,0x88,0x00,0x00,0xC8,0x38,0x08,0x00,0x00,0x07,0x38,0x0E,0x01,0x00,0x00,

/*--  文字:  W  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0xF8,0x00,0xF8,0x00,0xF8,0x08,0x00,0x00,0x03,0x3E,0x01,0x3E,0x03,0x00,0x00,

/*--  文字:  X  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0x18,0x68,0x80,0x80,0x68,0x18,0x08,0x20,0x30,0x2C,0x03,0x03,0x2C,0x30,0x20,

/*--  文字:  Y  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0x38,0xC8,0x00,0xC8,0x38,0x08,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00,

/*--  文字:  Z  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x10,0x08,0x08,0x08,0xC8,0x38,0x08,0x00,0x20,0x38,0x26,0x21,0x20,0x20,0x18,0x00,

/*--  文字:  a  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x19,0x24,0x24,0x12,0x3F,0x20,0x00,

/*--  文字:  b  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x10,0xF0,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x3F,0x11,0x20,0x20,0x11,0x0E,0x00,

/*--  文字:  c  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x0E,0x11,0x20,0x20,0x20,0x11,0x00,

/*--  文字:  d  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x80,0x80,0x80,0x90,0xF0,0x00,0x00,0x1F,0x20,0x20,0x20,0x10,0x3F,0x20,

/*--  文字:  e  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x24,0x24,0x24,0x24,0x17,0x00,

/*--  文字:  f  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x80,0x80,0xE0,0x90,0x90,0x20,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

/*--  文字:  g  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x6B,0x94,0x94,0x94,0x93,0x60,0x00,

/*--  文字:  h  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x10,0xF0,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20,

/*--  文字:  i  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x80,0x98,0x98,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

/*--  文字:  j  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x80,0x98,0x98,0x00,0x00,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,

/*--  文字:  k  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x10,0xF0,0x00,0x00,0x80,0x80,0x80,0x00,0x20,0x3F,0x24,0x06,0x29,0x30,0x20,0x00,

/*--  文字:  l  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

/*--  文字:  m  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x20,0x3F,0x20,0x00,0x3F,0x20,0x00,0x3F,

/*--  文字:  n  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20,

/*--  文字:  o  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00,

/*--  文字:  p  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x80,0x80,0x00,0x80,0x80,0x00,0x00,0x00,0x80,0xFF,0x91,0x20,0x20,0x11,0x0E,0x00,

/*--  文字:  q  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x80,0x80,0x00,0x80,0x00,0x00,0x0E,0x11,0x20,0x20,0x91,0xFF,0x80,

/*--  文字:  r  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x20,0x20,0x3F,0x21,0x20,0x00,0x01,0x00,

/*--  文字:  s  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x33,0x24,0x24,0x24,0x24,0x19,0x00,

/*--  文字:  t  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x80,0x80,0xE0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x20,0x20,0x10,0x00,

/*--  文字:  u  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x80,0x80,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x1F,0x20,0x20,0x20,0x10,0x3F,0x20,

/*--  文字:  v  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x03,0x0C,0x30,0x0C,0x03,0x00,0x00,

/*--  文字:  w  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x80,0x80,0x00,0x80,0x80,0x00,0x80,0x80,0x01,0x0E,0x30,0x0C,0x07,0x38,0x06,0x01,

/*--  文字:  x  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x80,0x80,0x80,0x00,0x80,0x80,0x00,0x00,0x20,0x31,0x0E,0x2E,0x31,0x20,0x00,

/*--  文字:  y  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x00,0x81,0x86,0x78,0x18,0x06,0x01,0x00,

/*--  文字:  z  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x21,0x30,0x2C,0x22,0x21,0x30,0x00,
};

uchar code Zmk_6x8[]={
0x00,0x7C,0x44,0x44,0x7C,0x00,/*"0",0*/

0x00,0x00,0x04,0x7C,0x00,0x00,/*"1",1*/

0x00,0x6C,0x64,0x54,0x4C,0x00,/*"2",2*/

0x00,0x44,0x54,0x54,0x7C,0x00,/*"3",3*/

0x20,0x30,0x28,0x24,0x7C,0x00,/*"4",4*/

0x00,0x5C,0x54,0x54,0x74,0x00,/*"5",5*/

0x00,0x7C,0x54,0x54,0x74,0x00,/*"6",6*/

0x00,0x04,0x74,0x0C,0x04,0x00,/*"7",7*/

0x00,0x7C,0x54,0x54,0x7C,0x00,/*"8",8*/

0x00,0x5C,0x54,0x54,0x7C,0x00,/*"9",9*/

0x7C,0x0C,0x70,0x0C,0x7C,0x00,/*"M",10*/

0x40,0x70,0x2C,0x38,0x60,0x00,/*"A",11*/

0x44,0x6C,0x10,0x6C,0x44,0x00,/*"X",12*/

0x44,0x44,0x7C,0x44,0x44,0x00,/*"I",13*/

0x44,0x7C,0x50,0x24,0x7C,0x04,/*"N",14*/

0x00,0x7C,0x10,0x10,0x7C,0x00,/*"H",15*/

0x44,0x64,0x54,0x4C,0x44,0x00,/*"Z",16*/

0x04,0x7C,0x60,0x14,0x0C,0x04,/*"V",17*/
};

/********************************************************************
函数名称：CheckState
功    能：状态检查，LCD判忙，RS=0写指令，RS=1写数据
参    数：无
返回值  ：无
*********************************************************************/
void CheckState(void)
{
	 uchar dat;	//状态信息，判忙
	 RS=0; 			//DB7∽DB0为显示指令数据 
	 RW=1; 			//数据被读到DB7∽DB0 
	 do{
			DATA=0x00;
			EN=1;	//EN下降沿
			dat=DATA;
			EN=0;
			dat=0x80 & dat; //DB7为0可操作
		}while(!(dat==0x00));
}

/********************************************************************
函数名称：SendCommandToLCD
功    能：写命令到LCD，RS=0写指令，RS=1写数据
参    数：com 命令
返回值  ：无
*********************************************************************/
void SendCommandToLCD(uchar com)
{
	 CheckState();//状态检查
	 RS=0;	 			//向LCD发送命令
	 RW=0;
	 DATA=com;	 
	 EN=1;				//EN下降沿
	 EN=0;
}

/********************************************************************
函数名称：SetLine
功    能：设置行（页）
说    明：0xb8是页的首地址，1011 1xxx  设定页地址--xxx,8行=1页，共8页
参    数：page，取值0-7
返回值  ：无
使用方法：必要时使用
*********************************************************************/
void SetLine(uchar page)	
{
	page=0xb8|page; 
	SendCommandToLCD(page);
}
/********************************************************************
函数名称：SetStartLine
功    能：设置从哪行开始：0-63，一般从0 行开始显示
说    明：0xc0是行的首地址
参    数：startline，取值0-63
返回值  ：无
使用方法：必要时使用
*********************************************************************/
void SetStartLine(uchar startline) 	   
{
	startline=0xc0|startline; 
	SendCommandToLCD(startline); 
}
/********************************************************************
函数名称：SetColumn
功    能：设置从哪列开始：0-63
说    明：0x40是列的首地址，column最大值为63，越出在0-63间循环 
参    数：column，取值0-63
返回值  ：无
*********************************************************************/
void SetColumn(uchar column)	
{
	 column=column &0x3f; //只取低6位
	 column= 0x40|column; //01xx xxxx
	 SendCommandToLCD(column);
}
/********************************************************************
函数名称：SetOnOff
功    能：开关显示
说    明：0x3f是开显示，0x3e是关显示 
参    数：onoff：0-关、1-开
返回值  ：无
使用方法：必要时使用
*********************************************************************/
void SetOnOff(uchar onoff)	   
{
	 onoff=0x3e|onoff; //0011 111x
	 SendCommandToLCD(onoff);
}
/********************************************************************
函数名称：WriteByte
功    能：写显示数据，RS=0写指令，RS=1写数据，列地址自动加1
参    数：dat：按字节显示数据
返回值  ：无
*********************************************************************/
void WriteByte(uchar dat)	
{
	 CheckState();//状态检查
	 RS=1; 
	 RW=0;
	 DATA=dat;
	 EN=1; //EN下降沿
	 EN=0;
}
/********************************************************************
函数名称：SelectScreen
功    能：选择屏幕
参    数：screen: 0-全屏,1-左屏,2-右屏
返回值  ：无
使用方法：初始化3或必要时使用
*********************************************************************/
void SelectScreen(uchar screen)	  
{
	switch(screen)
  {
		case 0: cs1=0;cs2=0;break; //全屏
		case 2: cs1=1;cs2=0;break;//左屏 		
		case 1: cs1=0;cs2=1; break;//右屏		
  }
}
/********************************************************************
函数名称：ClearScreen
功    能：清屏
参    数：screen: 0-全屏,1-左屏,2-右屏
返回值  ：无
使用方法：初始化2或必要时使用
*********************************************************************/
void ClearScreen(uchar screen)	  
{
	 uchar i,j;
	 SelectScreen(screen);
	 for(i=0;i<8;i++)	 		//页
	 {
		 SetLine(i);
		 SetColumn(0);
		 for(j=0;j<64;j++)	//列
		 {WriteByte(0x00);} //写
	 }
}

/********************************************************************
函数名称：InitLCD
功    能：初始化LCD
参    数：无
返回值  ：无
使用方法：初始化1
*********************************************************************/
void InitLCD() 	  
{
	 CheckState();//状态检查
	 SelectScreen(0);
	 SetOnOff(0); //关显示
	 SelectScreen(0);
	 SetOnOff(1); //开显示
	 SelectScreen(0);
	 ClearScreen(0);//清屏
	 SetStartLine(0); //开始行:0
}
/********************************************************************
函数名称：Display_HZ
功    能：显示全角汉字
参    数：screen-选择屏幕: 0-全屏,1-左屏,2-右屏
					page-选页参数，每次写一页(8行)，一个汉字占两页
					column-选列参数
					number-汉字库Hzk[]中的第几汉字输出
说    明：宋体、字号12时汉字对应的点阵为：宽x高=16x16,先行再列
返回值  ：无
*********************************************************************/
void Display_HZ(uchar screen,uchar page,uchar column,uchar number)
{
	 int i;	
	 SelectScreen(screen);
	 column=column&0x3f;//0011 1111
	 SetLine(page);	//写第一页
	 SetColumn(column); //控制列
	 for(i=0;i<16;i++)  //控制16列的数据输出
	 {
			WriteByte(Hzk[i+32*number]);
	 } //i+32*number汉字的前16个数据输出
	 SetLine(page+1);		 //写第二页
	 SetColumn(column);	   //控制列
	 for(i=0;i<16;i++)	  //控制16列的数据输出
	 {
			WriteByte(Hzk[i+32*number+16]);
	 }//i+32*number+16汉字的后16个数据输出
} 
/********************************************************************
函数名称：Display_ZM
功    能：显示字母
参    数：screen-选择屏幕: 0-全屏,1-左屏,2-右屏
					page-选页参数，每次写一页(8行)，一个字母占两页
					column-选列参数
					number-字母库Zmk[]中的第几字母输出
说    明：宋体、字号12时字母对应的点阵为：宽x高=8x16
返回值  ：无
*********************************************************************/
void Display_ZM(uchar screen,uchar page,uchar column,uchar number)
{
	 int i;	
	 SelectScreen(screen);
	 column=column&0x3f;//0011 1111
	 SetLine(page);	//写上半页
	 SetColumn(column); //控制列
	 for(i=0;i<8;i++)  //控制8列的数据输出
	 {
			WriteByte(Zmk[i+16*number]);
	 } //i+16*number的前8个数据输出
	 SetLine(page+1);		 //写下半页
	 SetColumn(column);	   //控制列
	 for(i=0;i<8;i++)	  //控制8列的数据输出
	 {
			WriteByte(Zmk[i+16*number+8]);
	 }//i+16*number+8字母的后8个数据输出
}
/********************************************************************
函数名称：DisplaySZ
功    能：显示数字
参    数：screen-选择屏幕: 0-全屏,1-左屏,2-右屏
					page-选页参数，每次写一页(8行)，一个数字占两页
					column-选列参数
					number-数字库Szk[]中的第几数字输出
说    明：宋体、字号12时数字对应的点阵为：宽x高=8x16
返回值  ：无
*********************************************************************/
void Display_SZ(uchar screen,uchar page,uchar column,uchar number)
{
	 int i;	
	 SelectScreen(screen);
	 column=column&0x3f;//0011 1111
	 SetLine(page);	//写上半页
	 SetColumn(column); //控制列
	 for(i=0;i<8;i++)  //控制8列的数据输出
	 {
			WriteByte(Szk[i+16*number]);
	 } //i+16*number的前8个数据输出
	 SetLine(page+1);		 //写下半页
	 SetColumn(column);	   //控制列
	 for(i=0;i<8;i++)	  //控制8列的数据输出
	 {
			WriteByte(Szk[i+16*number+8]);
	 }//i+16*number+8数字的后8个数据输出
}
/********************************************************************
函数名称：DisplayFH
功    能：显示符号
参    数：screen-选择屏幕: 0-全屏,1-左屏,2-右屏
					page-选页参数，每次写一页(8行)，一个符号占两页
					column-选列参数
					number-符号库Fhk[]中的第几符号输出
说    明：宋体、字号12时符号对应的点阵为：宽x高=8x16
返回值  ：无
*********************************************************************/
void Display_FH(uchar screen,uchar page,uchar column,uchar number)
{
	 int i;	
	 SelectScreen(screen);
	 column=column&0x3f;//0011 1111
	 SetLine(page);	//写上半页
	 SetColumn(column); //控制列
	 for(i=0;i<8;i++)  //控制8列的数据输出
	 {
			WriteByte(Fhk[i+16*number]);
	 } //i+16*number的前8个数据输出
	 SetLine(page+1);		 //写下半页
	 SetColumn(column);	   //控制列
	 for(i=0;i<8;i++)	  //控制8列的数据输出
	 {
			WriteByte(Fhk[i+16*number+8]);
	 }//i+16*number+8符号的后8个数据输出
}

void Display_string(uchar page,uchar column,uchar *string)     //字符串显示
{
	char i=0,screen=1;
	while(string[i] != '\0')
    {
			if(i+column>7)screen = 2;
			
			if(string[i] >= 'A' && string[i] <= 'Z')
			{
					Display_ZM(screen,page*2,(i+column)*8%64,string[i]-'A');
			}
			else if(string[i] >= 'a' && string[i] <= 'z')
			{
					Display_ZM(screen,page*2,(i+column)*8%64,string[i]-'a'+26);			
			}
			else if(string[i] >= '0' && string[i] <= '9')
			{
					Display_SZ(screen,page*2,(i+column)*8%64,string[i]-'0');			
			}
			else if(string[i] == ' ')
			{
					Display_FH(screen,page*2,(i+column)*8%64,0);			
			}			
			i++;
    }
}

/********************************************************************
函数名称：ReadByte
功    能：读数据，RW=0写数据，RW=1读数据，列地址自动加1
参    数：dat：按字节读数据
返回值  ：无
*********************************************************************/
void ReadByte(uchar column,uchar page,uchar *dat)	
{
	 uchar screen=1;
	 CheckState();//状态检查
	
	 if(column>64)screen=2;
	 SelectScreen(screen);

	 SetLine((int)(page/8));	//写行
	 SetColumn(column%64); //控制列
	
	 DATA=0xff;
	 RS=1; 
	 RW=1;
	 EN=1; //EN下降沿
	 _nop_();
	 EN=0;
	 EN=1; //EN下降沿
	 _nop_();
	 *dat = DATA;
	 EN=0;

}

void Display_pixel(uchar column,uchar page,uchar color)    //显示一个像素
{
		uchar screen=1;
		uchar dat;
		if(column>64)screen=2;
	 SelectScreen(screen);

	 ReadByte(column,page,&dat);
	
	 SetLine((int)(page/8));	//写行
	 SetColumn(column%64); //控制列
	 WriteByte(color ? (dat |= (0x01 << (page%8))) : (dat &= ~(0x01 << (page%8))));
	
}

void draw_line(unsigned int x0, unsigned int y0, unsigned int x1, unsigned int y1,unsigned color) {
    // Bresenham算法实现线段绘制，具体实现可参考
    // https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm
    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);
    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;
    int err = dx - dy;
		int e2;
    while (1) {
        Display_pixel(x0, y0,color);
        if (x0 == x1 && y0 == y1) break;
        e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x0 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y0 += sy;
        }
    }
}

/********************************************************************
函数名称：Display_6x8
功    能：显示8x8字母
参    数：screen-选择屏幕: 0-全屏,1-左屏,2-右屏
					page-选页参数，每次写一页(8行)
					column-选列参数
					number-字母库8x8Zmk[]中的第几字母输出
说    明：宋体、字号12时字母对应的点阵为：宽x高=6x8
返回值  ：无
*********************************************************************/
void Display_6x8(uchar page,uchar column,uchar number)
{
	 int i;	
	 uchar screen=1;
	 if(column>=64)screen=2;
	 SelectScreen(screen);
	 column=column&0x3f;//0011 1111
	 SetLine(page);	//写上半页
	 SetColumn(column); //控制列
	 for(i=0;i<6;i++)  //控制6列的数据输出
	 {
			WriteByte(Zmk_6x8[i+6*number]);
	 }
}

void Display_1x8(uchar page,uchar column,uchar byte)
{
	 uchar screen=1;
	 if(column>=64)screen=2;
	 SelectScreen(screen);
	 column=column&0x3f;//0011 1111
	 SetLine(page);	//写上半页
	 SetColumn(column); //控制列

	 WriteByte(byte);
}
