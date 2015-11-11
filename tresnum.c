#include<stdio.h>

int main()
{//inicio main

int x1,x2,x3,menor,intermedio,mayor;
printf("Ingrese lo numeros:");
scanf("%d%d%d",&x1,&x2,&x3);

                            menor=x1;

if ( x2 < menor )
{
    menor=x2;
    if(x3 < menor)
    {
        mayor=x1;
        menor=x3;
        intermedio=x2;
    }
    else
    {
        if(x3<x1)
        {
            intermedio=x3;
            mayor=x1;
        }
        else
        {
            intermedio=x1;
            mayor=x3;
        }
    }
}
else
{
    if(x3 < menor)
    {
        menor=x3;
        intermedio=x1;
        mayor=x2;
    }
    else
    {
        if(x2<x3)
        {
            intermedio=x2;
            mayor=x3;
        }
        else{
            intermedio=x3;
            mayor=x2;
        }
    }
}
 
printf ("El orden de menor a mayor : %d %d %d\n",menor,intermedio,mayor);
 
 
return (0);
}//fin main



