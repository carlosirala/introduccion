#include <stdio.h>
#include <stdlib.h>
float w=0;
float Total=0;
int main()
{
  printf("Bienvenido, este programa calcula su tarifa,\npor favor ingrese el numero de kwh consumidos:\n");
  scanf("%f",&w);
  if(w<=50){
	Total=(w*2.288)+52.84;
    printf("Su tarifa total es:\n$%f\n",Total);
    }
  else{
    if(w<=100){
    w=w-50;
    Total=(w*2.762)+(50*2.88)+52.84;
    printf("Su tarifa total es:\n$%f\n",Total);
    }
    else{
    w=w-100;
    Total=(50*2.762)+(50*2.288)+(w*3.042)+52.84;
    printf("Su tarifa total es:\n$%f\n",Total);
    }
	}
  system("pause");	
}
