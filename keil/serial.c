#include"serial.h"

xdata char receive[10];
xdata char flag;

//sfr T2MOD  = 0xC9;

void Serialinit()
{               //��ʱ��2��Ϊ���ڣ����ò�����Ϊ9600
//	T2MOD = 0x01;
	T2CON = 0x30;
	TH2 = 0xFF;
	TL2 = 0xDC;
	RCAP2H = 0xFF;
	RCAP2L = 0xDC;
	SCON = 0x50;
	PCON = 0x00;
	TR2 = 1;
	ES = 1;
	EA = 1;
}

void Sendchar( unsigned char da)
{
	SBUF = da;
	while(!TI);
	TI = 0;
}

void Sendstring(int x,char *str)
{
  char *p = str;
	int i;
	for(i=0;i<x;i++)
	{
		p = str;
		while(*p != '\0')
		{
			Sendchar(*p++);
		}
	}
}


//�����ж�

void Seral_interrput() interrupt 4
{
	static unsigned char a=0;//����һ����̬������������ܵ��ַ���
  char temp;
	if(RI)
	{
		temp=SBUF;
		
		if(temp != 0x0D)//������\n˵��û������
		{
			receive[a]=temp;
			a++;
		}
		else
		{
//			receive[a]='\r';//��Ϊ�ж�©����
//			receive[a+1]='\n';//��Ϊ�ж�©����
			receive[a]='\0';//���Ͻ�������
			a=0;
			flag=1;//����ָ����ɱ�־λ
		}
		RI=0;
	}
}

