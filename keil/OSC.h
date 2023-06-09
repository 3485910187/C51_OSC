#ifndef _OSC_H
#define _OSC_H

#include <reg52.h>
#include <math.h>
#include <12864.h>
#include <TLC1543.h>

#define SAMPLE_SIZE 126            //缓冲区大小

extern xdata unsigned int sample_buffer[SAMPLE_SIZE];
extern unsigned int max_value;        //采样数据的最大值，用于计算波形的振幅
extern unsigned int min_value;   //采样数据的最小值，用于计算波形的振幅

void display_waveform(unsigned int *dat);

#endif 