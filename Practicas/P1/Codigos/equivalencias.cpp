#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float p,i,y,c,m;
int main(int argc, char *argv[]) {
	printf("Bienvenido este programa calcula las equivalencias de pies\n");
	printf("Introduzca la cantidad de pies\n");
	scanf("%f",&p);
	i=12*p;
	y=p/3;
	c=2.54*i;
	m=c/100;
	printf("La equivalencias son:\npulgadas: %f\nyardas:%f\ncentimetros: %f\nmetros: %f\n",i,y,c,m);
	system("PAUSE");
	return 0;
}
