#include<stdio.h>
#include<stdlib.h>
float v,i,r;
int s;
void voltaje();
void corriente();
void resistencia();
int main(){
	printf("Bienvenido, este programa calcula la ley de ohm\n");
	printf("Introduzca el numero de lo que desea calcular\n1. Voltaje\t2. Intesidad de corriente\t3. Resistencia\n");
	scanf("%d",&s);
	switch(s){
		case 1:
			voltaje();
			break;
		case 2:
			corriente();
			break;
		case 3:
			resistencia();
			break;
		default:
			printf("Introduzca un numero valido");
	}
	system("pause");
}
void voltaje(){
	printf("Introduzca el valor de la corriente en Amperes\n");
	scanf("%f",&i);
	printf("Introduzca el valor de la resistencia en Ohms\n");
	scanf("%f",&r);
	v=i*r;
	printf("El voltaje es:\n%fV.\n",v);
}
void corriente(){
	printf("Introduzca el valor del voltaje en Volts\n");
	scanf("%f",&v);
	printf("Introduzca el valor de la resistencia en Ohms\n");
	scanf("%f",&r);
	i=v/r;
	printf("La corriente es:\n%fA.\n",i);
}
void resistencia(){
	printf("Introduzca el valor del voltaje en Volts\n");
	scanf("%f",&v);
	printf("Introduzca el valor de la corriente en Amperes\n");
	scanf("%f",&i);
	r=v/i;
	printf("La resistencia es:\n%fOhms.\n",r);
}
