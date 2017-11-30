#include<stdio.h>
#include<stdlib.h>
float alto,ancho,longitud;
float volumen;
void calcular_volumen();

int main(){
	printf("Bienvenido, este programa calcula el volumen de 3 cuartos\n con sus medidas establecidas en metros\n");
	//primer cuarto
	printf("Datos para el primer cuarto\n");
	calcular_volumen();
	//segundo cuarto
	printf("Datos para el segundo cuarto\n");
	calcular_volumen();
	//Tercer cuarto
	printf("Datos para el tercer cuarto\n");
	calcular_volumen();
	system("pause");
}
void calcular_volumen(){
	printf("Ingrese el alto del cuarto\n");
	scanf("%f",&alto);
	printf("Ingrese el ancho del cuarto\n");
	scanf("%f",&ancho);
	printf("Ingrese el largo del cuarto\n");
	scanf("%f",&longitud);
	volumen=alto*ancho*longitud;
	printf("El volumen del cuarto es:\n%fm^3\n",volumen);
	system("pause");
	system("cls");
}
