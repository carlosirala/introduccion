#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

    struct Dico{char t[10]; char a[10]; int nc; float p; struct Disco* hueco;}d[5];
    struct Fecha{int anio; int mes; int dia;}f[5];

int main(){
    again:
    system("cls");
    char c;
    printf("a   Ingresar datos");
    printf("\nb   Mostrar datos");
    printf("\nc   Aplicar descuento");
    printf("\nd   Obtener ganancia");
    printf("\ne   Salir");
    printf("\n\nIngrese una opcion: ");
    scanf("%c",&c);
    if(c=='a'){solicitarDatos();}
    if(c=='b'){imprimirDatos();}
    if(c=='c'){
    int des;
    printf("A que disco desea aplicar el descuento? ");
    scanf("%d",&des);
    descuento(des);}
    if(c=='d'){suma();}
    if(c=='e'){return 0;}
    Sleep(5000);
    goto again;

    return 0;
}
void solicitarDatos(){
    int i;
    for(i=0;i<=4;i++){
        printf("\n\nDisco %d:\n",i+1);
        printf("Ingrese el titulo del disco: ");
        gets(d[i].t);
        printf("Ingrese el artista: ");
        gets(d[i].a);
        printf("Numero de canciones: ");
        scanf("%d",&d[i].nc);
        printf("Precio: ");
        scanf("%f",&d[i].p);
        printf("Fecha\n");
        printf("Ingrese dia(nn): ");
        scanf("%d",&f[i].dia);
        printf("Ingrese mes(nn): ");
        scanf("%d",&f[i].mes);
        printf("Ingrese anio(nn): ");
        scanf("%d",&f[i].anio);
    }
}
void imprimirDatos(){
    int i;
    for(i=0;i<=4;i++){
        printf("\n\nDisco %d:",i+1);
        printf("\nTitulo del disco: %s",d[i].t);
        printf("\nArtista: %s",d[i].a);
        printf("\nNumero de canciones: %d",d[i].nc);
        printf("\nPrecio: %f",d[i].p);
        printf("\nFecha: %d/%d/%d",f[i].dia,f[i].mes,f[i].anio);
    }

}

void descuento(des){
d[des].p=(d[des].p)*(0.75);
printf("\n\nNuevo precio de disco %d: %f",des,d[des].p);
}

void suma(){
int cant;
float s=0;
int i=1;
int disc;
printf("Cuantos discos desea sumar?");
scanf("%d",&cant);
while(i=!cant){
printf("¿Que disco desea sumar? ");
scanf("%d",&disc);
s=(d[disc].p)+s;
i=i+1;
}
printf("Suma total: %f",s);
}
