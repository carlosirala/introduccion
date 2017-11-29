#include<stdio.h>
#include<stdlib.h>
int num_productos,seleccion,j;
int total=0;
int main(){
	printf("Bienvenido,\neste programa calcula el total dependiendo de los productos que escoja\n");
	system("pause");
	system("cls");
	printf("------------------------------------------------------------------------------\n");
	printf("1.Hamburguesa chica con papas y refresco		$20\n");
	printf("2.Hotdog y refresco					$18\n");
	printf("2.Ensalada rusa						$15\n");
	printf("Introduzca el numero de productos que comprara\n");
	scanf("%d",&num_productos);
	system("pause");
	system("cls");
	printf("------------------------------------------------------------------------------\n");
	printf("1.Hamburguesa chica con papas y refresco		$20\n");
	printf("2.Hotdog y refresco					$18\n");
	printf("2.Ensalada rusa						$15\n");
	for(j=0;j<num_productos;j++){
	printf("Introduzca el numero de producto que desea seleccionar\n");
	scanf("%d",&seleccion);
	switch(seleccion){
			case 1:
				printf("Usted selecciono la hamburguesa\n");
				total=total+20;
				break;
			case 2:
				printf("Usted selecciono el Hotdog\n");
				total=total+18;
				break;
			case 3:
				printf("Usted selecciono la ensalada\n");
				total=total+15;
				break;
			default: 
				printf("numero de producto no valido");
			}
		}
	printf("El total es:\n$%d\n",total);
system("pause");	
}
