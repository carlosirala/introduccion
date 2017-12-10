#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void imprimearreglo(int *punt,int num);
void sumaarreglos(int *a1, int *a2,int *a3,int num);
void ordenaarreglo(int *aoriginal, int *anuevo, int num);
void paroimpar(int *aoriginal, char *apoi, int num);

int main()
{
	int A[5]={1,2,3,5,7};
	int *pA=&A[0];
	int B[5]={3,6,9,12,15};
	int *pB=&B[0];
	int C[5];
	int *pC=&C[0];
	char D[5];
	char *pD=&D[0];
	int opc,i;
	char opcc;
	int num=5;
	
	
	while(opc!=5)
	{
		system("cls");
		printf("\nel arreglo A contiene: ");
		for (i=0;i<5;i++) printf("%d ",*(pA+i));
		printf("\nel arreglo B contiene: ");
		for (i=0;i<5;i++) printf("%d ",*(pB+i));
		printf("\n---------------------------\n");
		printf("escoja cual funcion probara\n");
		printf("1-imprimir un arreglo\n");
		printf("2-sumar los arreglos\n");
		printf("3-ordenar un arreglo\n");
		printf("4-par o impar de un arreglo\n");
		printf("5-salir del programa\n");
		printf("---------------------------\n");
		fflush(stdin);
		scanf("%d",&opc);
		switch (opc)
		{
			case 1:
				printf("¿cual de los dos arreglos quiere imprimir, A o B?\n"); 
				fflush(stdin);	
				scanf("%c",&opcc);
				if(opcc==65) imprimearreglo(pA,num);
				if(opcc==66) imprimearreglo(pB,num);
			break;
			case 2:
				sumaarreglos(pA,pB,pC,num);
				for (i=0;i<num;i++) 
				{
					printf("%d ",*(pC+i));
				}
			break;
			case 3:
				printf("¿cual de los dos arreglos quiere ordenar, A o B?\n"); 
				fflush(stdin);	
				scanf("%c",&opcc);
				if(opcc==65) ordenaarreglo(pA,pC,num);
				if(opcc==66) ordenaarreglo(pB,pC,num);
				for (i=0;i<num;i++) 
				{
					printf("%d ",*(pC+i));
				}
			break;
			case 4:
				printf("¿cual de los dos arreglos quiere comprobar, A o B?\n"); 
				fflush(stdin);	
				scanf("%c",&opcc);
				if(opcc==65) paroimpar(pA,pD,num);
				if(opcc==66) paroimpar(pB,pD,num);
				for (i=0;i<num;i++) 
				{
					printf("%c ",*(pD+i));
				}
			break;
			case 5:
				printf("saliendo del programa\n");
			break;
			default:
				printf("no introdujo una opcion valida\n");
		}
		system ("pause");
	}
}

void imprimearreglo(int *punt,int num)
{
	int i;	
	for (i=0;i<num;i++) 
	{
		printf("%d ",*(punt+i));
	}
}

void sumaarreglos(int *a1, int *a2,int *a3,int num)
{
	int i;	
	for (i=0;i<num;i++) 
	{
		*(a3+i)=*(a1+i)+*(a2+i);
	}
}

void ordenaarreglo(int *aoriginal, int *anuevo, int num)
{
	int i;	
	for (i=0;i<num;i++) 
	{
		*(anuevo+i)=*(aoriginal+(num-i-1));
	}
}

void paroimpar(int *aoriginal, char *apoi, int num)
{
	int i;	
	for (i=0;i<num;i++) 
	{
		if (*(aoriginal+i)%2==0) *(apoi+i) = 'p';
		if (*(aoriginal+i)%2!=0) *(apoi+i) = 'i';
	}
}



