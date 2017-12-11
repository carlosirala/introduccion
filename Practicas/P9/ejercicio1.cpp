#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <windows.h>

int main()
{
	system("color 70");
	char fechayhora[25],fecha[16],hora[8];
    int i,j,A_H,A_C,A_M;
	FILE *dat;
	while( !kbhit() )
	{
		j=0;	
		dat = fopen("angulos_del_braso.dat","w"); 	
		
		time_t current_time;
	    current_time=time(NULL);
	    strcpy(fechayhora, ctime(&current_time));
		
		A_H=rand()%140;
		A_C=rand()%180;
		A_M=rand()%360;
		
		for (i=0;i<24;i++)
	    { 
			fecha[i+1]=' ';		    
	    	fecha[j]=fechayhora[i];
	    	if(i==10) i=i+9;
			j++;    	
		}
	    for (i=0;i<8;i++)
	    {
	    	hora[i+1]=' ';
	    	hora[i]=fechayhora[i+11];
		}
		
		fprintf(dat, "Fecha:\t\t\t%s \nHora:\t\t\t%s \nAngulo de Hombro:\t%d \nAngulo de Codo:\t\t%d \nAngulo de Munneca:\t%d \n",fecha,hora,A_H,A_C,A_M);
		fclose(dat);
		printf("Fecha:\t\t\t%s \nHora:\t\t\t%s \nAngulo de Hombro:\t%d \nAngulo de Codo:\t\t%d \nAngulo de Munneca:\t%d \n\n",fecha,hora,A_H,A_C,A_M);
		Sleep(5000);
		
	}
	
	getch();
}
