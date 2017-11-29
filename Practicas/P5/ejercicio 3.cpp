#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
  char cadena[100];
  int longitud=0;
  int x=0;
  int a=0, e=0,i=0,o=0,u=0;
  printf("\nIngrese su cadena para calcular el numero de vocales");
  gets(cadena);
  longitud=(strlen(cadena))-1;
  while(x<=longitud){
    if(cadena[x]=='a'){
        a=a+1;
    }
    if(cadena[x]=='e'){
        e=e+1;
    }
    if(cadena[x]=='i'){
        i=i+1;
    }
    if(cadena[x]=='o'){
        o=o+1;
    }
    if(cadena[x]=='u'){
        u=u+1;
    }
    x=x+1;
  }
  printf("\n\na: %d",a);
  printf("\ne: %d",e);
  printf("\ni: %d",i);
  printf("\no: %d",o);
  printf("\nu: %d",u);

  system("PAUSE");
  return 0;
}
