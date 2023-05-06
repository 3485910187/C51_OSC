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
 static bit key_up=1;//�������ɿ���־
 if(mode)key_up=1;  //֧������    
 if(key_up&&STOP==0)
 {
//  DelayMs(1);//ȥ���� 
  key_up=0;
   if(STOP==0)Stop_flag=!Stop_flag;
 }else if(STOP==1)key_up=1;       // �ް�������
}

void main()
{
	InitLCD();
	
	TMOD = 0x01; //��ʱ��0������
  TH0 = (65536-5) /256;//����λ��ֵ
  TL0 = (65536-5) %256;//����λ��ֵ
  EA = 1; 	   //�����ж�
  ET0 = 1;	   //T0��ʱ��ʱ�����
  TR0 = 1;	   //������ʱ��

	while(1);
}

void int0() interrupt 1
{
	static char num=0;   //1ms
  TH0 = (65536-5) /256;//����λ��ֵ
  TL0 = (65536-5) %256;//����λ��ֵ
	
	sample_buffer[num++]=read_adc(AD_A0);
	if(num==SAMPLE_SIZE)
	{
		num=0;
		if(Stop_flag)display_waveform(sample_buffer);
	}
	Key_Scan(0);
}

