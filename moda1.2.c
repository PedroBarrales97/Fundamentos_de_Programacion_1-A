#include <stdio.h>

int main()
{//iniciomain
int calificacion[10];
    int i=0;
    int h=0;
    
    for(i=0;i<10;i++) 
    {
        printf("Calificacion %d : ",i+1);
        scanf(" %d",&calificacion[i]);
    }
    
     printf("\nLa moda es: %d",calificacion[h]);
     
}//finmain
