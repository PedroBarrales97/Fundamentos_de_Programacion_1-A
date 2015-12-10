#include<stdio.h>

int resultado;
int n1;
int n2;

int suma(n1,n2)
{
    resultado=n1+n2;

    return resultado;
}

    int resta(n1,n2)
{
    resultado=n1-n2;

    return resultado;
}

int multiplicacion(n1,n2)
{
resultado=n1*n2;

return resultado;
}

int division(n1,n2)
{
 resultado=n1/n2;

return resultado;
}

int main(){



  printf("Ingrese el primer numero: ");
  scanf("%d",&n1);
  printf("Ingrese el segundo numero: ");
  scanf("%d",&n2);
  

    suma(n1,n2);
    printf("El resultado de la suma es :%.0f\n",resultado);
        
    resta(n1,n2);
    printf("\nEl resultado de la resta es :%.0f\n",resultado);
            
    multi(n1,n2);
    printf("\nEl resultado de la multiplicacion es :%.0f\n\n",resultado);
            
    division(n1,n2);
    printf("\nEl resultado de la divison es :%.2f\n\n",resultado);
            



  return 0;
}
