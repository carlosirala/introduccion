#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	char cadena[15];
	char *fecha;
    printf("Bienvenido, este programa pasa una fecha de formato dd/mm/aa a formato aa de nombre del mes de aaaa\nIntroduzca la fecha\n");
	gets(cadena);
	fecha=strtok(cadena,"/");
	printf("La fecha en el otro formato es \n%s\n ",fecha);
	fecha=strtok(NULL,"/");
	if(strcmp(fecha,"01")==0)
	printf("Enero de ");
	if(strcmp(fecha,"02")==0)
	printf("Febrero de ");
	if(strcmp(fecha,"03")==0)
	printf("Marzo de ");
	if(strcmp(fecha,"04")==0)
	printf("Abril de ");
	if(strcmp(fecha,"05")==0)
	printf("Mayo de ");
	if(strcmp(fecha,"06")==0)
	printf("Junio de ");
	if(strcmp(fecha,"07")==0)
	printf("Julio de ");
	if(strcmp(fecha,"08")==0)
	printf("Agosto de ");
	if(strcmp(fecha,"09")==0)
	printf("Septiembre de ");
	if(strcmp(fecha,"10")==0)
	printf("Octubre de ");
	if(strcmp(fecha,"11")==0)
	printf("Noviemre de ");
	if(strcmp(fecha,"12")==0)
	printf("Diciembre de ");
	fecha =strtok(NULL, "/");
	if(strcmp(fecha,"99")==0)
	printf(" 1999");
	if(strcmp(fecha,"00")==0)
	printf(" 2000");
	if(strcmp(fecha,"01")==0)
	printf(" 2001");
	if(strcmp(fecha,"02")==0)
	printf(" 2002");
	if(strcmp(fecha,"03")==0)
	printf(" 2003");
	if(strcmp(fecha,"04")==0)
	printf(" 2004");
	if(strcmp(fecha,"05")==0)
	printf(" 2005");
	if(strcmp(fecha,"06")==0)
	printf(" 2006");
	if(strcmp(fecha,"07")==0)
	printf(" 2007");
	if(strcmp(fecha,"08")==0)
	printf(" 2008");
	if(strcmp(fecha,"09")==0)
	printf(" 2009");
	if(strcmp(fecha,"10")==0)
	printf(" 2010");
	if(strcmp(fecha,"11")==0)
	printf(" 2011");
	if(strcmp(fecha,"12")==0)
	printf(" 2012");
	if(strcmp(fecha,"13")==0)
	printf(" 2013");
	if(strcmp(fecha,"14")==0)
	printf(" 2014");
	if(strcmp(fecha,"15")==0)
	printf(" 2015");
	if(strcmp(fecha,"16")==0)
	printf(" 2016");
	if(strcmp(fecha,"17")==0)
	printf(" 2017");
  system("PAUSE");
}
