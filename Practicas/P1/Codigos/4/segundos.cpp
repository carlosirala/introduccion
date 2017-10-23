#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int st,h,m,s,r;
int main(int argc, char *argv[]) {
	h=0;
	printf("Bienvenido, este programa calcula el equivalende de segundos en hrs, min y sec\n");
	printf("introduzca los segundos totales\n");
	scanf("%d",&st);
	if((st/60)<60){
		m=st/60;
		s=st%60;
	}
	else{
		h=st/60;
		r=st%60;
		if((r/60)<60){
		m=r/60;
		s=r%60;
	}
	}
	printf("horas:%d\nminutos:%d\nsegundos:%d\n");
	system("PAUSE");
	return 0;
}
