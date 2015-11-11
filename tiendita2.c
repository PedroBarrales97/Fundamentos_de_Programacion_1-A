#include<stdio.h>

int menu;
int producto;
int ganancia;


int main()
{//inicio main
	printf("tiendita Pedrito\n");
	printf("escriba el numero de la opcion que quiera realisar:");
	
	scanf("%d",&menu);
switch(menu){
case 1:{
	printf("menu");
	break;
}
case 2: {
	printf("ganancias");
	break;
}	
default:{
    printf("no tenemos mas opciones, lo sentimos\n" );
    break;
}
}




scanf("%d",&producto);
switch(producto)
printf("En este momento solo tenemos\n 1.-Papas\n 2.-Refresco\n 3.-Chicles\n 4.-Paletas\n 5.-Chetos\n");
{
case 1:{
	printf("papas=8 pesos\n");
	break;
	}
case 2:{
	printf("refresco= 10 pesos\n");
	break;
    }
case 3:{
	printf("chicle= 1 peso\n");
	break;
    }
case 4:{
	printf("paleta= 4 pesos\n");
	break;
    }
case 5:{
	printf("chetos= 9 pesos\n");
	break;
    }

default:{
    printf("no tenemos mas productos, lo sentimos\n" );
    break;
}
}
	
	
	
	
	
}//fin main
