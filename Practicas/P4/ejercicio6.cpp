#include<stdio.h>
#include<stdlib.h> 
int r;
int factorial(int n);
int main() 
{ 
int n,res; 
printf("Bienvenido, este programa calcula el factorial de un numero\npor medio de recursividad\n" ) ; 
printf("Introduce el numero para encontrar su factorial\n" ) ; 
scanf("%d",&n ) ; 
res=factorial(n ) ; 
printf("El factorial de %d es: %d\n",n,res ) ; 
system("pause");
} 
int factorial(int n) { 
if (n==1) 
{ 
return 1; 
} 
r=n*factorial(n-1 ) ; 
return (r ) ; 
} 
