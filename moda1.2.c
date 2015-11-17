#include <stdio.h>

int main()
{
int calificacion[10];
    int i=0;
    int h=0;
    
    for(i=0;i<10;i++) 
    {
        printf("Calificacion %d : ",i+1);
        scanf(" %d",&calificacion[i]);
    }
    

    
     printf("\nLA MODA ES: %d",calificacion[h]);
    
    return 0;
    
}
