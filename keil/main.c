#include"reg52.h"
#include"stdio.h"
#include"TLC1543.h"
#include"12864.h"
#include"OSC.h"
#include"math.h"

sbit STOP=P1^1;

bit Stop_flag=1;
	
void Key_Scan(bit mode)
{  
 static bit key_up=1;//按键按松开标志
 if(mode)key_up=1;  //支持连按    
 if(key_up&&STOP==0)
 {
//  DelayMs(1);//去抖动 
  key_up=0;
   if(STOP==0)Stop_flag=!Stop_flag;
 }else if(STOP==1)key_up=1;       // 无按键按下
}

void main()
{
	InitLCD();
	
	TMOD = 0x01; //定时器0开启；
  TH0 = (65536-5) /256;//高四位初值
  TL0 = (65536-5) %256;//低四位初值
  EA = 1; 	   //开总中断
  ET0 = 1;	   //T0开时定时器溢出
  TR0 = 1;	   //开启定时器

	while(1);
}

void int0() interrupt 1
{
	static char num=0;   //1ms
  TH0 = (65536-5) /256;//高四位初值
  TL0 = (65536-5) %256;//低四位初值
	
	sample_buffer[num++]=read_adc(AD_A0);
	if(num==SAMPLE_SIZE)
	{
		num=0;
		if(Stop_flag)display_waveform(sample_buffer);
	}
	Key_Scan(0);
}


