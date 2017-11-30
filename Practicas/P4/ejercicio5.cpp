#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float c1,c2,h;
void hipotenusa();
int main(){
	printf("Bienvenido, este programa calcula la hipotenusa dados los catetos\n");
	//primer triangulo
	printf("Datos para el primer triangulo\n");
	hipotenusa();
	printf("Datos para el segundo triangulo\n");
	hipotenusa();
	printf("Datos para el  tercer triangulo\n");
	hipotenusa();
	system("pause");
}
void hipotenusa(){
	printf("Introduzca el valor del primer cateto\n");
	scanf("%f",&c1);
	printf("Introduzca el valor del segundo cateto\n");
	scanf("%f",&c2);
	h=sqrt(pow(c1,2)+pow(c2,2));
	printf("El valor de la hipotenusa es:\n%f\n",h);
}
