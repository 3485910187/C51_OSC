#ifndef __12864_H__
#define __12864_H__

#include <reg52.h>
#include <intrins.h>
#include <math.h>

#define uint  unsigned int
#define uchar  unsigned char
	
#define DATA P0

sbit EN = P2^0;
sbit RW = P2^1;
sbit RS = P2^2;
//sbit RES = P2^3;
sbit cs1 = P2^3;
sbit cs2 = P2^4;

//��ģ����
uchar code Hzk[];
uchar code Szk[];
uchar code Fhk[];
uchar code Zmk[];

void CheckState();
void SendCommandToLCD(uchar com);
void SetLine(uchar page);
void SetStartLine(uchar startline);
void SetColumn(uchar column);
void SetOnOff(uchar onoff);
void WriteByte(uchar dat)	;
void SelectScreen(uchar screen);
void ClearScreen(uchar screen);	
void InitLCD() ;
void Display_HZ(uchar screen,uchar page,uchar column,uchar number);
void Display_SZ(uchar screen,uchar page,uchar column,uchar number);
void Display_ZM(uchar screen,uchar page,uchar column,uchar number);
void Display_FH(uchar screen,uchar page,uchar column,uchar number);
void Display_string(uchar page,uchar column,uchar *string);
void Display_pixel(uchar column,uchar page,uchar color);
void ReadByte(uchar column,uchar page,uchar *dat);
void draw_line(unsigned int x0, unsigned int y0, unsigned int x1, unsigned int y1,unsigned color);
void Display_6x8(uchar page,uchar column,uchar number);
void Display_1x8(uchar page,uchar column,uchar byte);
#endif