#include <stdio.h>
#include <conio.h>
int main()
{
int ma[3][3];
int a, b;
for(a=0;a<3;a++)
{
 for(b=0;b<3;b++)
 {
 printf("Introduce el valor\n");
 scanf("%d",&ma[a][b]);
 }
 }

printf("La inversa de la matriz a es..: \n");
for(a=0;a<3;a++)
{
 for(b=0;b<3;b++)
 {
 printf("%d",ma[b][a]);
 }
printf("\n");
 }

getch();
}
