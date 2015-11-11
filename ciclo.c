#include<stdio.h>

int final;
int i;

int main()

{//inicio main
	printf("programa que hace un ciclo\n");
	printf("ingrese el numero:");
	scanf("%d",&final);
	i=1;
	
	while(i<=final)
	{
		printf("%d\n", i);
		i=i+1;
	}
	
}//fin main
