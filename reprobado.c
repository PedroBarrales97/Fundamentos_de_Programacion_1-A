#include<stdio.h>//libreria de E/S
/*
Programa para saber si estas reprobado o no :P
*/

int calificacion;
int main ()

{//iniciomain
printf("Introduzca su calificacion: \n");
scanf("%d",&calificacion);

if(calificacion>=7)
{
	printf("aprobado");
}
else
{
	printf("reprobado");
}

}//finmain
