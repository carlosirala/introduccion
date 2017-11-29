#include <stdio.h>
#include <stdlib.h>
  int cien[10][10];
  int control=0;
  int diez[10];
  int x,y,i,j,k;
int main(){
  for(x=1;x<=10;x++){
    for(y=1;y<=10;y++){
    cien[x][y]=rand()%11;
    printf("%d   ",cien[x][y]);
    }
    printf("\n");
  }
 control=0;
  for(i=1;i<=10;i++){
    for(j=1;j<=10;j++){
	for(k=1;k<=10;k++){
    if(cien[j][k]==i){
    control=control+1;
    }
    }
    }
    diez[i]=control-1;
    printf("%d se encuentra en la matriz en %d ocasiones \n",i ,diez[i]);
    control=0;
  }
  system("PAUSE");
}
