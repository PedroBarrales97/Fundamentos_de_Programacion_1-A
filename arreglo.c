#include<stdio.h>



int main()
{
	int calificacion[10];
	int promedio;
	int suma=0;
	int i;
	printf("ingrese su primera calificacion:");
	scanf("%d",& calificacion[0]);
	printf("ingrese su segunda calificacion:");
	scanf("%d",& calificacion[1]);
	printf("ingrese su tercera calificacion:");
	scanf("%d",& calificacion[2]);
	printf("ingrese su cuarta calificacion:");
	scanf("%d",& calificacion[3]);
	printf("ingrese su quinta calificacion:");
	scanf("%d",& calificacion[4]);
	printf("ingrese su sexta calificacion:");
	scanf("%d",& calificacion[5]);
	printf("ingrese su septima calificacion:");
	scanf("%d",& calificacion[6]);
	printf("ingrese su octava calificacion:");
	scanf("%d",& calificacion[7]);
	printf("ingrese su novena calificacion:");
	scanf("%d",& calificacion[8]);
	printf("ingrese su decima calificacion:");
	scanf("%d",& calificacion[9]);

	for(i=0;i<=9;i++)
	{
		
		suma=suma+calificacion[i];
		

	} 
	promedio=suma/10;
	printf("\n el promedio de las calificaciones es:%d",promedio);
	
	return 0;
}
