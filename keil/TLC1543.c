#include "TLC1543.h"

//==================================================

//������uint ReadPort(uchar port)

//�����������˿ڲ�ת��

//������uchar port       //�����˿�A0-A10

//���أ�uint                 //ת�����(ʮλ)
//==================================================

//��ȡADC�������
unsigned int read_adc(uchar ADDR)
{
   	unsigned char i;
	unsigned int temp=0;
	ADDR <<= 4;//4��Ч��ַ�����

  	CLK = 0;
  	CS=1; 
  	CS = 0;  
  	for (i=0;i<8;i++)
  		{	
		  	temp <<= 1;
			ADD=(bit)(ADDR&0X80);
		  	CLK = 1;
			SDO=1;
			temp =temp^SDO;
			CLK = 0;
		    ADDR <<= 1;
  		}

		ADD=(bit)(ADDR&0X80);
	  	CLK = 1;
		SDO=1;
		CLK = 0;
	    ADDR <<= 1;

		ADD=(bit)(ADDR&0X80);
	  	CLK = 1;
		SDO=1;
		CLK = 0;
	    ADDR <<= 1;

  	CS=1;
  	return(temp);
}