#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float g,r;
char l;
int main(int argc, char *argv[]) {
	printf("Bienvenido, este programa calcula de °F a °C y viceversa\n");
	printf("Ingrese el numero de grados seguidos de una f si son °F o una c si son °C\n ");
	scanf("%f",&g);
	scanf("%c",l);
	if(l=='f'){
		r=(g-32)/(9/5);
		printf("El resultado es %f °C\n",r);
	}
	else{
		r=((9/5)*g)+32;
		printf("El resultado es %f °F\n",r);
	}
	
	system("PAUSE");
	return 0;
}
