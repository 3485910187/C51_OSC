#ifndef _TLC1543_H
#define _TLC1543_H

#include"reg52.h"
#include <intrins.h>

#define uchar unsigned char
#define uint  unsigned int

//AD，TLC1543 端口定义
sbit CLK = P1^0;               //AD时钟
sbit ADD = P2^6;               //AD地址口
sbit SDO = P2^5;              //AD数据口
sbit CS  = P2^7;               //AD片选

//TLC1543，AD模块，采样端口定义
#define AD_A0 0x00           //采样端口A0

#define AD_A1 0x01           //采样端口A1

#define AD_A2 0x02           //采样端口A2

#define AD_A3 0x03           //采样端口A3

#define AD_A4 0x04           //采样端口A4

#define AD_A5 0x05           //采样端口A5

#define AD_A6 0x06           //采样端口A6

#define AD_A7 0x07           //采样端口A7

#define AD_A8 0x08           //采样端口A8

#define AD_A9 0x09           //采样端口A9

#define AD_A10 0x0a           //采样端口A10

#define AD_A11 0x0b           //测试端口2.45V,(Vref+  -  Vref-)/2 = 200H

#define AD_A12 0x0c           //测试端口0.00V, Vref- = 000H

#define AD_A13 0x0d           //测试端口4.91V, Vref+ = 3FFH

unsigned int read_adc(uchar ADDR);

#endif