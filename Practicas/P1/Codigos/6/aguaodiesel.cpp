#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
const float A=1000;
const float D=820;
const float g=9.81;
float p,di,v,h;
char s;
int main(int argc, char *argv[])
{
  printf("Bienvenido\n");
printf("seleccione diesel ingresando d, paraa agua a\n");
scanf("%c",&s);
printf("Ingrese la presion\n");
scanf("%f",&p);
printf("Ingrese el diametro\n");
scanf("%f",&di);
system("cls");
  if(s=='d'){
  h=p/(D*g);
  v=(3.1416)*(di/2)*(di/2)*h;
  printf("La altura es:\n %f\n",h);
  printf("El volumen es:\n %f\n",v);
   }
  else{
  h=p/(A*g);
   v=(3.14)*(di/2)*(di/2)*h;
  printf("La altura es:\n%f\n",h); 
  printf("El volumen es\n %f\n",v);            
  }
  system("PAUSE");	
  return 0;
}
