#include<stdio.h>//libreria de E/S
/*
Conversiones de MB
*/
float Megabyte;
float Bits=8388608;
float Byte=1048576;
float Kb=1024;
float Gb=0.0009765625;
float Tb=0.0000009537;
float MB=1024;
int main ()
{//iniciomain
	printf("programa que convierte de megabytes hasta terabytes");
	printf("\n");
	scanf("%f",&MB);
	float Megabyte= (int) MB;
	printf("El resultado es:%f/n",Megabyte);
	float Bits= (int) MB*Bits;
	printf("El resultado es:%f/n",Bits);
	float Byte= (int) MB*Byte;
	printf("El resultado es:%f/n",Byte);
	float Kb= (int) MB*Kb;
	printf("El resultado es:%f/n",Kb);
	float Gb= (int) MB*Gb;
	printf("El resultado es:%f/n",Gb);
	float Tb= (int) MB*Tb;
	printf("El resultado de los Megabyte es:%f/n",Tb);
}//finmain
