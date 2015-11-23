#include<stdio.h>



int main()
{//iniciomain
	int calificacion[10];
	int promedio;
	int suma=0;
	int i;
	int h;
	for(i=0;i<10;i++) 
    {
        printf("Calificacion %d : ",i+1);
        scanf(" %d",&calificacion[i]);
    }

     printf("\nla moda es: %d",calificacion[h]);

	for(i=0;i<=9;i++)
	{
		
		suma=suma+calificacion[i];
		

	} 
	promedio=suma/10;
	printf("\n el promedio de las calificaciones es:%d",promedio);

 }//finmain
