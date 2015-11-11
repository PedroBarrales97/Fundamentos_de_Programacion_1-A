 #include<stdio.h>

int dia1;
int mes1;
int dia2;
int mes2;
int a=-1;
int n;
int n2;
int con=0;

int main()
{
	printf("ingrese la primera fecha:");
	scanf("%d",& dia1);
	if(dia1>=31)
	{
		printf("Revisa tu calendario no hay mas de 31 dias\n");
		
	}
	
	printf("ingrese el primer mes:");
	scanf("%d",& mes1);
	if(mes1>=13)
	{
		printf("Revisa tu calendario no hay mas de 12 meses\n");
		
	}
	
	printf("ingrese la segunda fecha:");
	scanf("%d",& dia2);
		if(dia2>=31)
	{
		printf("Revisa tu calendario no hay mas de 31 dias\n");
		
	}
	
	printf("ingrese el segundo mes:");
	scanf("%d",& mes2);
		if(mes2>=13)
	{
		printf("Revisa tu calendario no hay mas de 12 meses\n");
		
	}
	    n2=mes1;
		if(mes1==mes2)
		{
			a=0;
		}else{
	
		while(n2<=mes2)
		{
		    if(mes1==mes2)
			{
			
			}else
			{
			a=a+1;	
			n2=n2+1;
			}
			
		}
		}
		n=a*30+dia2;
		do
		{
			
			if(dia1<=n)
			{
				con=con+1;
			}
			dia1=dia1+1;
		}while(dia1<=n);
	
		printf("los dias son %d\n",con-1);
}
