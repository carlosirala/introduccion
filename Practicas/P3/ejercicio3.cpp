#include <stdio.h>
#include <stdlib.h>
int meses[10][12]={{90, 90, 40, 60, 20, 80, 10, 10, 30, 70, 50, 25},{100, 80, 50, 10, 60, 40, 100, 40, 80, 70, 100, 56},{70, 90, 60, 20, 80, 50, 20, 60, 30, 70, 110, 60},{50, 60, 50, 30, 20, 80, 50, 40, 20, 70, 200, 70},{90, 90, 60, 40, 80, 70, 60, 40, 30, 50, 10, 40},{40, 10, 50, 40, 30, 90, 30, 80, 80, 60, 90, 86},{100, 40, 20, 50, 10, 100, 90, 80, 100, 70, 130, 120},{70, 10, 90, 70, 50, 30, 70, 60, 20, 50, 40, 89},{40, 30, 40, 70, 10, 100, 20, 20, 70, 20, 90, 66},{10, 60, 100, 50, 60, 40, 50, 100, 90, 20, 15, 30}};
int comparar[10];
int main(int argc, char *argv[])
{
  int i,j;
  printf("1: Sonora\t2: Aguascalientes\t3: Oaxaca\n4: Colima\t5: Chihuahua\t\t6: San Luis Potosi\n7: Durango\t8: Veracruz\t\t9: jucatan\n10: Tabasco\n");
  for(j=0;j<=9;j++){
    comparar[j]=suma(j);
    printf("\n%d tuvo %d lluvias",j+1 ,comparar[j]);
  }
  menor();
  mayor();
  printf("\n\nMayor registro en Aguascalientes: \n%d\n",meses[1][0]);
  for(j=1;j<=11;j++){
    if(meses[1][0]==meses[1][j]){
        printf("%d\n",meses[1][j]);
    }
  }
  system("PAUSE");
  return 0;
}
int menor(){
 int i;
 for(i=1;i<=9;i++){
   if(comparar[0]>comparar[i]){
    comparar[0]=comparar[i];
   }
 }
 printf("\n\nMenor: %d",comparar[0]);
}
int mayor(){
 int i;
 for(i=1;i<=9;i++){
   if(comparar[0]<comparar[i]){
    comparar[0]=comparar[i];
   }
 }
 printf("\n\nMayor: %d",comparar[0]);
}

int suma(int e){
 int j;
 int s=0;
 for(j=0;j<=11;j++){
    s=meses[e][j]+s;
 }
 return s;
}


