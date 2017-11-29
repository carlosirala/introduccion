#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
   char cadena[50];
   int longitud, i;
   printf("\nBienvenido, ingrese una cadena para calcular su longitud ");
   gets(cadena);
   longitud=strlen(cadena);
   printf("\nLongitud: %d\n",longitud);
   longitud=longitud-1;
   while(longitud!=-1){
    printf("%c",cadena[longitud]);
    longitud=longitud-1;
   }

  system("PAUSE");
  return 0;
}
