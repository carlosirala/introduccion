#include<stdio.h>
#include<stdlib.h>
int main(){
	float n1,n2,total;
	char operador;
	printf("introduzca operador (+,-)\n");
	scanf("%c",&operador);
	printf("Bienvenido, introduzca el primer numero\n");
	scanf("%f",&n1);
	printf("introduzca el segundo numero\n");
	scanf("%f",&n2);
	if(operador=='+'){
		total=n1+n2;
	}
	if(operador=='-'){
		total=n1-n2;
	}
	printf("El resultado es:\n%f\n",total);
	system("pause");
}
