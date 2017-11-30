# include <stdio.h> 
#include<stdlib.h>
#include<stdio.h>
main() 
{ 
int i,j,k,l,m,n ; 
float a[100][100]; 
float det; 
printf("Introducir el ORDEN DE LA MATRIZ : N = "); 
scanf("%d",&n); 
printf("\n"); 
m=n-1; 
printf("Introducir los elementos por FILAS \n"); 
for(i=1;i<=n;i++) 
{ for(j=1;j<=n;j++) 
{ printf("A(%d,%d) =",i,j); 
scanf("%f",&a[i][j]); } } 
det=a[1][1]; 
for(k=1;k<=m;k++) 
{ l=k+1; 
for(i=l;i<=n;i++) 
{ for(j=l;j<=n;j++) 
a[i][j] = ( a[k][k]*a[i][j]-a[k][j]*a[i][k] )/a[k][k]; } 
det=det*a[k+1][k+1]; 
} 
printf("\n\n"); 
printf("DETERMINANTE = %f\n", det); 
} 

