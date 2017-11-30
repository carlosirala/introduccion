#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int n,i;
int v=0;
void calcular_serie();
int main(){
	printf("Bienvenido, este programa calcula la serie:\n1^1+2^2+3^3+...+N^n\nPor favor introduzca el valor de N\n");
	scanf("%d",&n);
	calcular_serie();
	system("pause");
}
void calcular_serie(){
	for(i=1;i<=n;i++){
		v=v+pow(i,i);
	}
	printf("El resultado es:\n%d\n",v);
}
