#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y;
	printf("Bienvenido, este programa calcula el valor de la funcion:\ny=x^2-x si x<=0\ny=-x^2+3x si x>0\nPor favor introduzca el valor de x\n");
	scanf("%d",&x);
	if(x<=0){
		y=((x*x)-x);
	}
	else{
		y=((-x*x)+3*x);
	}
	printf("El resultado de la funcion es:\n%d\n",y);
system("pause");
}
