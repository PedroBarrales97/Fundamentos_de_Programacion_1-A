#include <stdio.h>

int main() {
	
	int n1;
    int n2;
    int i=1;
    int resultado;
	
	printf("ingrese el primer numero:");
	scanf("%d",&n1);
	printf("ingrese el segundo numero:");
	scanf("%d",&n2);
	
	do{
		
		resultado=resultado+n2;
		i=i+1;
		
	}while(i<=n1);
	
	printf("el resultado es: %d",resultado);
	
	return 0;
}
