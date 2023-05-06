#ifndef _OSC_H
#define _OSC_H

#include <reg52.h>
#include <math.h>
#include <12864.h>
#include <TLC1543.h>

#define SAMPLE_SIZE 126            //��������С

extern xdata unsigned int sample_buffer[SAMPLE_SIZE];
extern unsigned int max_value;        //�������ݵ����ֵ�����ڼ��㲨�ε����
extern unsigned int min_value;   //�������ݵ���Сֵ�����ڼ��㲨�ε����

void display_waveform(unsigned int *dat);

#endif 