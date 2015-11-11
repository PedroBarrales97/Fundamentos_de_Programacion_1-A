#include<stdio.h>

int n1=1;
int n2=1;
int a;

int main()
{
	printf("ingrese un numero:");
	scanf("%d",& a);
		  while(n1<=a)
	{
		if(n1%2==0)
		{
		 while(n2<=n1)
		 {
			printf("\n%d", n1);
			n2=n2+1;
		 }
		}
		else
			{
			
			printf("\n%d", n1);
			
		}
		
		n1++;
		n2=1;	
	}
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  

}
