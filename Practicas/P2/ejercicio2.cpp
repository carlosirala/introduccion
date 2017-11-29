#include <stdio.h>
#include <stdlib.h>
float numero;
float promedio;
float suma=0;
int main(int argc, char *argv[])
{
    printf("Bienvenido,\neste programa calcula el promedio de cinco numeros \nque usted indique y los clasifica\n");
    float datos[5];
    int i;
    for(i=1;i<=5;i++){
                             printf("introduzca el siguiente numero\n");
                             scanf("%f",&numero);
                             datos[i]=numero;
                             suma=suma+datos[i];
                             }
    promedio=suma/5;
    printf("El promedio es:\n%f\n",promedio);
    if(promedio<6)
    printf("No aprobado\n");
    else
    printf("Aprobado\n");
    
    
  
    system("PAUSE");	
    return 0;
}
