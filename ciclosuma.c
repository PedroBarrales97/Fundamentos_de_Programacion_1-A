#include<stdio.h>

int final;
int i;
int resultado;

int main()
	
{//inicio main
	printf("programa que hace un ciclo\n");
	printf("ingrese el numero:");
	scanf("%d",&final);
	i=1;
	
	while(i<=final)
	{
		printf("%d\n", i);
		resultado=resultado+i;
		i=i+1;
	}
	
	printf("%d", resultado);
}//fin main
