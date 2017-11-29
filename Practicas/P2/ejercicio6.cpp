#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	printf("Bienvenido, este programa calcula el resultado de la funcion\nf(x)=sin(2x)-x\nen un intervalo de 0 a 10 con saltos de 0.5\n");
	float x=0;
	float y;
	while(x<=10){
		y=(sin(2*x))-x;
		printf("El resultado de la funcion es:\n%f\n",y);
		x=x+0.5;
	}
	system("pause");
}
