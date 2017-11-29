#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 
int main(){
    float H=0;
    printf("\nHumedad Relativa 55-80%");
    printf("\n\nHR sensada: ");
    scanf("%f",&H);
    while(H>=55 && H<=80){
               Sleep(10000);
               printf("\nHR sensada: ");
               scanf("%f",&H);
    }
    while(H<55 || H>80){
    if(H<55){
          printf("Riego activado\n");
          H=H+(H*4/100);
          Sleep(3000);
          printf("Riego desactivado\n");
          printf("HR actual: %f\n",H);  
             }
    if(H>80){
          printf("\nVentilas abiertas");
          Sleep(5000);
          H=H-(H*3/100);
          printf("\nVentilas cerradas");
          printf("\nHR actual: %f",H);
              }
    }
    system("PAUSE");	
}
