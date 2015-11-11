#include<stdio.h>//libreria de E/S
/*
Suma de dos numeros
*/
int resultado;
int n1;
int n2;
int main () 
{//iniciomain
	printf("dame un numero");
	scanf("%d",&n1);
	printf("dame otro numero");
	scanf("%d",&n2);
	resultado= n1+n2;
	printf("El resultado es:%d\n", resultado);
	
	printf("dame un numero");
	scanf("%d",&n1);
	printf("dame otro numero");
	scanf("%d",&n2);
	resultado= n1-n2;
	printf("El resultado es:%d\n", resultado);
	
	printf("dame un numero");
	scanf("%d",&n1);
	printf("dame otro numero");
	scanf("%d",&n2);
	resultado= n1*n2;
	printf("El resultado es:%d\n", resultado);
}//finmain
