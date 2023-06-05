#include <stdio.h>
#include"player.h"


void JuegoNuevo(int filas,int colum,int cuadrado[5][5]){
    int labe[5][5];
    movimientodeljugador( filas,colum,cuadrado[5][5]);

}
int main(){
    int op;
    printf("BIenvenido al laberinto\n");
    printf("1.Jugar\n2.Creditos\n3.Salir\n");
    scanf("%d",&op);
    switch(op){
        case 1:
        JuegoNuevo();
        break;
        case 2:
        printf("Alexander Sánchez-A00088986");
        case 3:
        return 0;
    }
}

