#ifndef _TLC1543_H
#define _TLC1543_H

#include"reg52.h"
#include <intrins.h>

#define uchar unsigned char
#define uint  unsigned int

//AD��TLC1543 �˿ڶ���
sbit CLK = P1^0;               //ADʱ��
sbit ADD = P2^6;               //AD��ַ��
sbit SDO = P2^5;              //AD���ݿ�
sbit CS  = P2^7;               //ADƬѡ

//TLC1543��ADģ�飬�����˿ڶ���
#define AD_A0 0x00           //�����˿�A0

#define AD_A1 0x01           //�����˿�A1

#define AD_A2 0x02           //�����˿�A2

#define AD_A3 0x03           //�����˿�A3

#define AD_A4 0x04           //�����˿�A4

#define AD_A5 0x05           //�����˿�A5

#define AD_A6 0x06           //�����˿�A6

#define AD_A7 0x07           //�����˿�A7

#define AD_A8 0x08           //�����˿�A8

#define AD_A9 0x09           //�����˿�A9

#define AD_A10 0x0a           //�����˿�A10

#define AD_A11 0x0b           //���Զ˿�2.45V,(Vref+  -  Vref-)/2 = 200H

#define AD_A12 0x0c           //���Զ˿�0.00V, Vref- = 000H

#define AD_A13 0x0d           //���Զ˿�4.91V, Vref+ = 3FFH

unsigned int read_adc(uchar ADDR);

#endif