#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float b,e,p;
float potencia();
int main(){
	printf("Bienvenido, este programa calcula una potencia\nIntrodiuzca la base\n");
	scanf("%f",&b);
	printf("Introduzca el exponente\n");
	scanf("%f",&e);
	p=potencia();
	printf("El resultado es:\n%f\n",p);
	system("pause");
}
float potencia(){
	p=pow(b,e);
	return(p);
}
