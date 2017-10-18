#include <stdio.h>
#include <stdlib.h>

char nombre[20],segundo[20],apellido[20],dos[20];
int horas,precio,ingreso,impuesto,neto; 
int main(int argc, char *argv[])
{
  printf("Bienvenido, este es un programa que calcula el ingreso y el impuesto neto\nPor favor Ingrese nombre completo\n");
  scanf("%s",&nombre);
  scanf("%s",&segundo);
  scanf("%s",&apellido);
  scanf("%s",&dos);
  printf("Por favor ingresa las horas\n");
  scanf("%d",&horas);
  printf("Por favor ingresa el precio por hora\n");
  scanf("%d",&precio);
  ingreso=horas*precio;
  impuesto=0.25*ingreso;
  neto=ingreso-impuesto;
  system("cls");
  printf("Su nombre es:\t%s %s %s %s\nSu ingreso es:\t%d\nSu impuesto es:\t%d\nSu ganancia neta es\t%d\n",nombre,segundo,apellido,dos,ingreso,impuesto,neto);
  system("PAUSE");	
  return 0;
}
