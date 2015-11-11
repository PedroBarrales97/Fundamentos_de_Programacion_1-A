#include <stdio.h>



int main()
{
	printf("programa que da diez numeros y da el mayor y el menor\n");
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;

	printf("Ingrese el primer numero:");
	scanf("%d",&n1);
	printf("Ingrese el segundo numero:");
	scanf("%d",&n2);
	printf("Ingrese el tercer numero:");
	scanf("%d",&n3);
	printf("Ingrese el cuarto numero:");
	scanf("%d",&n4);
	printf("Ingrese el quintonumero:");
	scanf("%d",&n5);
	printf("Ingrese el sexto numero:");
	scanf("%d",&n6);
	printf("Ingrese el septimo numero:");
	scanf("%d",&n7);
	printf("Ingrese el octavo numero:");
	scanf("%d",&n8);
	printf("Ingrese el noveno numero:");
	scanf("%d",&n9);
	printf("Ingrese el decimo numero:");
	scanf("%d",&n10);



	if(n1>n2&&n1>n3&&n1>n4&&n1>n5&&n1>n6&&n1>n7&&n1>n8&&n1>n9&&n1>n10)
        {
		printf("\n\nel numero mayor es:%d\n",n1);
	}
	if(n2>n1&&n2>n3&&n2>n4&&n2>n5&&n2>n6&&n2>n7&&n2>n8&&n2>n9&&n2>n10)
	{
		printf("\n\nel numero mayor es:%d\n",n2);
	}else if(n3>n2&&n3>n1&&n3>n4&&n3>n5&&n3>n6&&n3>n7&&n3>n8&&n3>n9&&n3>n10)
	{
		printf("\n\nel numero mayor es:%d\n",n3);
	}else if(n4>n2&&n4>n3&&n4>n1&&n4>n5&&n4>n6&&n4>n7&&n4>n8&&n4>n9&&n4>n10)
	{
		printf("\n\nel numero mayor es:%d\n",n4);
	}else if(n5>n2&&n5>n3&&n5>n4&&n5>n1&&n5>n6&&n5>n7&&n5>n8&&n5>n9&&n5>n10)
	{
		printf("\n\nel numero mayor es:%d\n",n5);
	}else if(n6>n2&&n6>n3&&n6>n4&&n6>n5&&n6>n1&&n6>n7&&n6>n8&&n6>n9&&n6>n10)
	{
		printf("\n\nel numero mayor es:%d\n",n6);
	}else if(n7>n2&&n7>n3&&n7>n4&&n7>n5&&n7>n6&&n7>n1&&n7>n8&&n7>n9&&n7>n10)
	{
		printf("\n\nel numero mayor es:%d\n",n7);
	}else if(n8>n2&&n8>n3&&n8>n4&&n8>n5&&n8>n6&&n8>n7&&n8>n1&&n8>n9&&n8>n10)
	{
		printf("\n\nel numero mayor es:%d\n",n8);
	}else if(n9>n2&&n9>n3&&n9>n4&&n9>n5&&n9>n6&&n9>n7&&n9>n8&&n9>n1&&n9>n10)
	{
		printf("\n\nel numero mayor es:%d\n",n9);
	}else if(n10>n2&&n10>n3&&n10>n4&&n10>n5&&n10>n6&&n10>n7&&n10>n8&&n10>n1&&n10>n10)
	{
		printf("\n\nel numero mayor es:%d\n",n10);
	}

	if(n1<n2&&n1<n3&&n1<n4&&n1<n5&&n1<n6&&n1<n7&&n1<n8&&n1<n9&&n1<n10)
        {
		printf("el numero mayor es:%d",n1);
	}
	if(n2<n1&&n2<n3&&n2<n4&&n2<n5&&n2<n6&&n2<n7&&n2<n8&&n2<n9&&n2<n10)
	{
		printf("el numero menor es:%d",n2);
	}else if(n3<n2&&n3<n1&&n3<n4&&n3<n5&&n3<n6&&n3<n7&&n3<n8&&n3<n9&&n3<n10)
	{
		printf("el numero menor es:%d",n3);
	}else if(n4<n2&&n4<n3&&n4<n1&&n4<n5&&n4<n6&&n4<n7&&n4<n8&&n4<n9&&n4<n10)
	{
		printf("el numero menor es:%d",n4);
	}else if(n5<n2&&n5<n3&&n5<n4&&n5<n1&&n5<n6&&n5<n7&&n5<n8&&n5<n9&&n5<n10)
	{
		printf("el numero menor es:%d",n5);
	}else if(n6<n2&&n6<n3&&n6<n4&&n6<n5&&n6<n1&&n6<n7&&n6<n8&&n6<n9&&n6<n10)
	{
		printf("el numero menor es:%d",n6);
	}else if(n7<n2&&n7<n3&&n7<n4&&n7<n5&&n7<n6&&n7<n1&&n7<n8&&n7<n9&&n7<n10)
	{
		printf("el numero menor es:%d",n7);
	}else if(n8<n2&&n8<n3&&n8<n4&&n8<n5&&n8<n6&&n8<n7&&n8<n1&&n8<n9&&n8<n10)
	{
		printf("el numero menor es:%d",n8);
	}else if(n9<n2&&n9<n3&&n9<n4&&n9<n5&&n9<n6&&n9<n7&&n9<n8&&n9<n1&&n9<n10)
	{
		printf("el numero menor es:%d",n9);
	}else if(n10<n2&&n10<n3&&n10<n4&&n10<n5&&n10<n6&&n10<n7&&n10<n8&&n10<n1&&n10<n10)
	{
		printf("el numero menor es:%d",n10);
	}
	return 0;
}

