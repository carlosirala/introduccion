#include <stdio.h>
#include <stdlib.h>
int control;
float numero;
float promedio;
float suma=0;
int main(int argc, char *argv[])
{
    printf("Bienvenido,\neste programa calcula el promedio de una cierta cantidad de numeros \nque usted indique y los clasifica\n");
    printf("Por favor introduzca la cantidad de numeros que se tomaran en cuenta\n");
    scanf("%d",&control);
    float datos[control];
    int i;
    for(i=1;i<=control;i++){
                             printf("introduzca el siguiente numero\n");
                             scanf("%f",&numero);
                             datos[i]=numero;
                             suma=suma+datos[i];
                             }
    promedio=suma/control;
    printf("El promedio es:\n%f\n",promedio);
    for(i=1;i<=control;i++){
                            if(datos[i]>promedio)
                                 printf("El numero %f, es mayor al promedio\n",datos[i]);
                            else if(datos[i]<promedio)
                                 printf("El numero %f, es menor al promedio\n",datos[i]);
                            else 
                                 printf("El numero %f, es igual al promedio\n",datos[i]);
                            }
    
  
    system("PAUSE");	
    return 0;
}
