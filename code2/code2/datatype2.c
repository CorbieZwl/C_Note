#include <stdio.h>


#define AX 100
#define BX 100

//  �����ⲿ����
extern a;


// ö�����ͱ���
enum MyEnum
{
	ADC,
	AP,
	TANK
};



int main2()
{



	int a = 1;
	int b = a;
	a = 3;
	printf("asfaasfas,%d\n", b);
	/*
	printf("asfaasfas,%d\n",a);
	printf("asfaasfas,%d\n",AX);
	printf("asfaasfas,%d\n",BX);
	*/
	
	
	
	return 0;
}