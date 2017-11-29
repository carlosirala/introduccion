#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char cadena[100];
	char *palabra;
	printf("Bienvenido, este programa recibe una cadena y la separa por palabras");
	printf("\nPor favor introduzca la cadena \n");
	gets(cadena);
	palabra=strtok(cadena," ,.-");
	printf("Las palabras son: \n");
  while (palabra != NULL)
  {
    printf ("%s\n",palabra);
    palabra = strtok (NULL, " ,.-");
  }
  system("PAUSE");
}
