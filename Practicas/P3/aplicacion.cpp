#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a,b,x,z;
  printf("\n\t\tTamano de la matriz\nNumero de filas: ");
  scanf("%d",&a);
  printf("Numero de columnas: ");
  scanf("%d",&b);
  int M[a][b];
  printf("Cuantas oficinas se estan incendiando: ");
  scanf("%d",&x);
  int i[x];
  int j[x];
  int p[x];
  int q[x];
  for(z=0;z<=x-1;z++){
  Error:
  printf("Ingrese la fila y columna de la oficina incendiada: ");
  scanf("%d %d",&i[z],&j[z]);
  p[z]=i[z];
  q[z]=j[z];
  if(i[z]>a||j[z]>a){
    printf("\nError");
    goto Error;
  }
  }
  printf("Rociadores activados:\n");
  for(z=0;z<=x-1;z++){
    printf("%d %d\n",i[z],j[z]);
    i[z]=i[z]+1; j[z]=j[z]+1;
    printf("%d %d\n",i[z],j[z]);
    i[z]=i[z]; j[z]=j[z]-1;
    printf("%d %d\n",i[z],j[z]);
    i[z]=i[z]; j[z]=j[z]-1;
    printf("%d %d\n",i[z],j[z]);
    i[z]=i[z]-1; j[z]=j[z];
    printf("%d %d\n",i[z],j[z]);
    i[z]=i[z]-1; j[z]=j[z];
    printf("%d %d\n",i[z],j[z]);
    i[z]=i[z]; j[z]=j[z]+1;
    printf("%d %d\n",i[z],j[z]);
    i[z]=i[z]; j[z]=j[z]+1;
    printf("%d %d\n",i[z],j[z]);
    i[z]=i[z]+1; j[z]=j[z];
    printf("%d %d\n",i[z],j[z]);
  }
  printf("Alarmas activadas:\n");
  for(z=0;z<=x-1;z++){
    p[z]=p[z]; q[z]=q[z]+2;
    printf("%d %d\n",p[z],q[z]);
    p[z]=p[z]-1; q[z]=q[z];
    printf("%d %d\n",p[z],q[z]);
    p[z]=p[z]-1; q[z]=q[z];
    printf("%d %d\n",p[z],q[z]);
    p[z]=p[z]; q[z]=q[z]-1;
    printf("%d %d\n",p[z],q[z]);
    p[z]=p[z]; q[z]=q[z]-1;
    printf("%d %d\n",p[z],q[z]);
    p[z]=p[z]; q[z]=q[z]-1;
    printf("%d %d\n",p[z],q[z]);
    p[z]=p[z]; q[z]=q[z]-1;
    printf("%d %d\n",p[z],q[z]);
    p[z]=p[z]+1; q[z]=q[z];
    printf("%d %d\n",p[z],q[z]);
    p[z]=p[z]+1; q[z]=q[z];
    printf("%d %d\n",p[z],q[z]);
    p[z]=p[z]+1; q[z]=q[z];
    printf("%d %d\n",p[z],q[z]);
    p[z]=p[z]+1; q[z]=q[z];
    printf("%d %d\n",p[z],q[z]);
    p[z]=p[z]; q[z]=q[z]+1;
    printf("%d %d\n",p[z],q[z]);
    p[z]=p[z]; q[z]=q[z]+1;
    printf("%d %d\n",p[z],q[z]);
    p[z]=p[z]; q[z]=q[z]+1;
    printf("%d %d\n",p[z],q[z]);
    p[z]=p[z]; q[z]=q[z]+1;
    printf("%d %d\n",p[z],q[z]);
    p[z]=p[z]-1; q[z]=q[z];
    printf("%d %d\n",p[z],q[z]);
  }

  system("PAUSE");
  return 0;
}

