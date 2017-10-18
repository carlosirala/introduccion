#include<stdio.h>
#include<stdlib.h>
int dato,c;
float media,s;
int main(){
c=0;
s=0;
printf("Bienvenido, este programa calcula la media de distintos numeros positivos, para finalizar introduzca 0 0\n");
do{
printf("Por favor introduce el numero\n");
scanf("%d",&dato);
if(dato>0){
            c=c+1;
            s=s+dato;
            }
              }
while(dato!=0);
if(c>0){
        media=s/c;
        printf("La media es:\n %f",media);
        }
        system("PAUSE");
}
