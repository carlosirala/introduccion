#include <stdlib.h>
#include <stdio.h>
#define g 386.22
#define valvulas 4

float volumen(float a,float b);
float psi(float m,float a);
void tabla(float m[],float ae[],float ca,int c);
int main()
{
	float carrcil,areacil[valvulas],mas[valvulas];
	int i,j;
	printf("Este prgrograma le indica dadas las masas de los objetos a levantar y el \narea efectiva de la valvula y su carrera la presión adecuada.\n\n");
	for(i=0;i<valvulas;i++)
	{
		fflush(stdin);
		printf("introdusca la masa(libras) del objeto '%d' ",i+1);
		scanf("%f",&mas[i]);
		printf("introdusca el area(inch^2) efectiva de la valvula '%d' ",i+1);
		scanf("%f",&areacil[i]);
	}
	printf("introdusca la carrera(inch) de los cilindros ");
	scanf("%f",&carrcil);
	tabla(mas,areacil,carrcil,valvulas);
	system("pause");
}

void tabla(float m[],float ae[],float ca,int c)
{
    int i;
	printf("\n");
		printf("\nvalvula\tmasa\tarea efectiva\tcarrea\tvolumen de aceite\tpsi \n\n");
	for(i=0;i<c;i++)
	{
		printf("%d\t%.2f\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",i+1,m[i],ae[i],ca,volumen(ae[i],ca),psi(m[i],ae[i]));
	}
}

float volumen(float a,float b)
{
	float c;
	c=a*b;
	return c;
}

float psi(float m,float a)
{
	float c;
	c=(m*g)/a;
	return c;
}
