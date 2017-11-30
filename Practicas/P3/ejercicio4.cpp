#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
  int A[5][6]={{1,0,1,1,0,0},{1,0,1,1,0,1},{1,0,1,1,0,1},{1,0,0,0,0,1},{1,1,0,1,1,1}};
  int x,y;
  char m;
  int a=0;
  int b=1;
  A[a][b]=5;
  desplazamiento:
  system("cls");
  printf("\tEl numero 3 indica tu posicion\n");
  printf("Ingresa las letras en mayuscula\n");
  printf("\n\tA: Arriba\tB: Abajo\tD: Derecha\tI: Izquierda\n\n");
  for(x=0;x<=4;x++){
    printf("\n\n\t\t\t");
    for(y=0;y<=5;y++){
    printf("%d   ",A[x][y]);
    }
  }
  printf("\n\t\t");
  scanf("%c",&m);
  if(b==5){
    printf("\nLlegaste a la salida, felicidades");
    goto fin;
  }
  if(m=='A'){
    if(A[a-1][b]==0){
    a=a-1;
    A[a][b]=5;
    }
    else{
        printf("\nNo se puede realizar este movimiento");
        Sleep(1500);
    }
  }
  if(m=='B'){
    if(A[a+1][b]==0){
    a=a+1;
    A[a][b]=5;
    }
    else{
        printf("\nNo se puede realizar este movimiento");
        Sleep(1500);
    }
  }
  if(m=='D'){
    if(A[a][b+1]==0){
    b=b+1;
    A[a][b]=5;
    }
    else{
        printf("\nNo se puede realizar este movimiento");
        Sleep(1500);
    }
  }
  if(m=='I'){
    if(A[a][b-1]==0){
    A[a][b-1]=5;
    b=b-1;
    }
    else{
        printf("\nNo se puede realizar este movimiento");
        Sleep(1500);
    }
  }
  goto desplazamiento;
  fin:
  printf("\n\n\n");
  system("PAUSE");
  return 0;
}
