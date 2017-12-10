#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#define PORT1 0x3F8 
int main(){
	int c,f;
	do{
	 outportb(PORT1 + 0 , 0x06);  /*tasa de baudios Low Byte*/  
	 outportb(PORT1 + 1 , 0x00);  /*tasa de baudios High Byte*/  
	 outportb(PORT1 + 3 , 0x03);  /*8 Bits, NoParity, 1StopBit*/  
	 outportb(PORT1 + 2 , 0xC7);  /*Registro de Control FIFO */  
	 outportb(PORT1 + 4 , 0x0B);  /*Enciende DTR, RTS, y OUT2*/
	 c = inportb(PORT1 + 5);
	 f=(c*9/5)+32;
	 if(f>200){
	 	printf("Temperatura alta");
	 }
}
while(1==1);
}
