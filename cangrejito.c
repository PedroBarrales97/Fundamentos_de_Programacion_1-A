#include<stdio.h>

int metroshoyo;
int metrosdia;
int metrosnoche;
int suma=0;
int n=0;
int i=0;

int main()
{
	printf("Un cangrejito se cayo a un oyo\n");
	printf("De cuantos metros es el hoyo:");
	scanf("%d",& metroshoyo);
	
	
	while(i<metroshoyo)
	{
		
		printf("Cuantos metros avanza en el dia:");
		scanf("%d",& metrosdia);
		printf("Cuantos metros retrocedio en la noche:");
		scanf("%d",& metrosnoche);
		if(metrosnoche>=metrosdia)
		{
			printf("con esos valores nunca podrar salir el cangrejito");
		}
		suma=suma+metrosdia;
		suma=suma-metrosnoche;
		printf("%d",suma);
		if(metrosdia>0)
		{
			n=n+1;
		}
		i=suma;
		
	}

	printf("\nlos dias que se tarto en salir del hoyo fueron:%d", n);
	
	
	
	
	
}

