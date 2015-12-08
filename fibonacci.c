#include <stdio.h>

int main()
{
int fibonacci;
int i;
int n1=0;
int n2=1;
int j=0;
printf("escriba la posicion de la sucesion de fibonacci que quiera conocer:");
scanf("%d",&fibonacci);
for(i=1; i<fibonacci-1; i++)
    {
        if(j==0)
            {
                printf("%d\n", j);
                j=n1+n2;
                n1=n2;
                n2=j;
                printf("%d\n", j);
           }
		   else
           {
                printf("%d\n", j);
                j=n1+n2;
                n1=n2;
                n2=j;
           }

    }
    printf("\nel numero en la pocision que eligio es:%d \n",j);

system("pause");
}
