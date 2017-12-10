#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int nf,nv,np,i;
    printf("Ingrese el numero de focos: ");
    scanf("%d",&nf);
    struct focos{int ilum; int inten; int estado;}f[nf];
    for(i=0;i<=nf-1;i++){
        printf("\nFoco %d:",i+1);
        printf("\nTiene iluminacion natural? 1   Si / 0   No : ");
        scanf("%d",&f[i].ilum);
        printf("Intensidad (1 a 5): ");
        scanf("%d",&f[i].inten);
        printf("1   Encendido / 0   Apagado : ");
        scanf("%d",&f[i].estado);
    }
    printf("\n\nIngrese el numero de puertas: ");
    scanf("%d",&np);
    struct puertas{int estado; int ubi}p[np];
    for(i=0;i<=np-1;i++){
        printf("\nPuerta %d:",i+1);
        printf("\nEsta conectada con el exterior? 1   Si / 0   No : ");
        scanf("%d",&p[i].ubi);
        printf("1   Abierta / 0   Cerrada : ");
        scanf("%d",&p[i].estado);
    }
    printf("\n\nIngrese el numero de ventanas: ");
    scanf("%d",&nv);
    struct ventanas{int estado; int ubi; int piso;}v[nv];
    for(i=0;i<=nv-1;i++){
        printf("\nVentana %d:",i+1);
        printf("\nEsta conectada con el exterior? 1   Si / 0   No : ");
        scanf("%d",&v[i].ubi);
        printf("1   Abierta / 0   Cerrada : ");
        scanf("%d",&v[i].estado);
        printf("En que piso esta? (0 Planta baja) :");
        scanf("%d",&v[i].piso);
    }
    checkpoint:
    system("cls");
    char ac;
    printf("a   Salir de casa \nb   Actualizar clima\nc   Mostrar estado de la casa \nd   Salir");
    scanf("\n%c",&ac);
    if(ac=='a'){

        int t;
        printf("1   Perido breve / 0   Largo perido");
        scanf("%d",&t);
        if(t==1){
            for(i=0;i<=np-1;i++){
                if(p[i].ubi==1 && p[i].estado==1){
                    p[i].estado=0;
                }
            }
            for(i=0;i<=nv-1;i++){
                if(v[i].piso==0 && v[i].estado==1){
                    v[i].estado==0;
                }
            }
            for(i=0;i<=nf-1;i++){
                if(f[i].estado==1){
                    f[i].ilum=1;
                }
            }
        }
        if(t==0){
            for(i=0;i<=np-1;i++){
                if(p[i].estado==1){
                    p[i].estado=0;
                }
            }
            for(i=0;i<=nv-1;i++){
                if(v[i].estado==1){
                    v[i].estado==0;
                }
            }
            for(i=0;i<=nf-1;i++){
                if(f[i].estado==1){
                    f[i].estado=0;
                }
            }
        }
    }
    if(ac=='b'){
        int ll,dn,sol;
        printf("Esta lloviendo? 1  Si / 0  No");
        scanf("%d",&ll);
        if(ll==1){
            for(i=0;i<=nv-1;i++){
                if(v[i].estado==1 && v[i].ubi==1){
                    v[i].estado==0;
                }
            }
            for(i=0;i<=nf-1;i++){
                if(f[i].ilum==1){
                    f[i].estado=1;
                    f[i].inten=5;
                }
            }
        }
        printf("Es de dia o de noche? 1  Dia / 0  Noche");
        scanf("%d",&dn);
        if(dn==1){
            for(i=0;i<=nf-1;i++){
                if(f[i].ilum==1){
                    f[i].estado=0;
                }
            }
        }
       printf("Esta soleado? 1  Si / 0  No");
       scanf("%d",&sol);
       if(sol==1){
            for(i=0;i<=nf-1;i++){
                if(f[i].ilum==1){
                    f[i].estado=0;
                }
            }

       }
    }
    if(ac=='c'){
    for(i=0;i<=nf-1;i++){
        printf("\n\nFoco %d:",i+1);
        printf("\nTiene iluminacion natural? 1   Si / 0   No : %d",f[i].ilum);
        printf("\nIntensidad: %d",f[i].inten);
        printf("\n1   Encendido / 0   Apagado : %d",f[i].estado);
    }
    for(i=0;i<=np-1;i++){
        printf("\n\nPuerta %d:",i+1);
        printf("\nEsta conectada con el exterior? 1   Si / 0   No : %d",p[i].ubi);
        printf("\n1   Abierta / 0   Cerrada : %d",p[i].estado);
    }
    for(i=0;i<=nv-1;i++){
        printf("\n\nVentana %d:",i+1);
        printf("\nEsta conectada con el exterior? 1   Si / 0   No : %d",v[i].ubi);
        printf("\n1   Abierta / 0   Cerrada : %d",v[i].estado);
        printf("\nEn que piso esta? (0 Planta baja) : %d",v[i].piso);
    }
    }
    if(ac=='d'){
        return 0;
    }
    system("PAUSE");
    goto checkpoint;
    return 0;
}
