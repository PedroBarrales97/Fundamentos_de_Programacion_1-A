#include <stdio.h>


int main() 
{
	
	int numeros[10];
	int i;
	int x;
	int aux;
	
	
	printf("Programa que ordena 10 numeros y da la mediana\n");
	printf("ingrese los numeros\n");
	for(i=0;i<10;i++) 
	{
		printf("\n numero %d:",i+1);
		scanf("%d",&numeros[i]);
	}
	
	for(i=0;i<10;i++)
	{
		for(x=0;x<10;x++)
		{
			if(numeros[x]>numeros[i])
			{
				aux=numeros[x];
				numeros[x]=numeros[i];
				numeros[i]=aux;
			}
		}
	}
	printf("\n los numero ordenados ");
	for(i=0;i<10;i++) 
	{
		printf("\n%d\n",numeros[i]);
		
	}
	
	printf("la mediana es: %d", numeros[9/2]);
	
	
	
	
	
	return 0;
}
