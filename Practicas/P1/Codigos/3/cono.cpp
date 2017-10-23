#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float h,g,r,a,v;
int main(int argc, char *argv[]) {
	printf("Bienvenido, este programa calcula el area y volumen de un cono\n");
	printf("Ingrese el radio del cono\n");
	scanf("%f",&r);
	printf("Ingrese la altura del cono\n");
	scanf("%f",&h);
	g=sqrt((r*r)+(h*h));
	a=(2*3.1416*r*(g/2))+(3.1416*r*r);
	v=.3333333333*3.1416*r*r*h;
	printf("el area es: %f\nel volumen es: %f\n",a,v);
	system("PAUSE");
	return 0;
}
