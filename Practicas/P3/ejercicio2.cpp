#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[10];
	int i,k,l;
	for(i=1;i<=10;i++){
	printf("Por favor introduce el valor\n");
	scanf("%d",&a[i]);
}
printf("La cadena original es:\n");
for(i=1;i<=10;i++){
	printf("%d\t",a[i]);
}
	for(k=2;k<=10;k++){
		for(i=k;i<=10;i++){
		if(a[k-1]==a[i]){
			a[i]=0;
		}
}
}
printf("La cadena nueva es:\n");
for(l=1;l<=10;l++){
	printf("%d\t",a[l]);
}
	system("pause");
}
