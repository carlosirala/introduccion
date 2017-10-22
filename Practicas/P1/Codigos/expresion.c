#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float x,y,a,b,r;
int main(int argc, char *argv[]) {
	printf("Bienvenido, este programa calcula la expresion ((x+y)^2)(a-b)\n");
	printf("Por favor ingrese x\n");
	scanf("%f",&x);
	printf("Por favor ingrese y\n");
	scanf("%f",&y);
	printf("Por favor ingrese a\n");
	scanf("%f",&a);
	printf("Por favor ingrese b\n");
	scanf("%f",&b);
	r=(x+y)*(x+y)*(a-b);
	printf("El resuultado es:\n%f",r);
	system("PAUSE");
	return 0;
}
