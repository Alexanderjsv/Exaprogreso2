#include<stdio.h>
#include"player.h"


int movimientodeljugador(int filas,int columnas,int laberinto[5][5]){
    filas=5;
    columnas=5;
    int op;
    int cont=0;
    char tecla;

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            printf ("x\n"),laberinto[i][j];
        }
    }
    int x=0;
    int y=0;
     while (1) {
        printf("Muevase con w (arriba), a (izquierda), s (abajo) o d (derecha)\n ");
        scanf(" %c", &tecla);

        if (tecla == 'w') {
            if (x > 0) {
                x--;
                cont=cont+1;
            }
        }
        else if (tecla == 'a') {
            if (y > 0) {
                y--;
                cont=cont+1;
            }
        }
        else if (tecla == 's') {
            if (x < filas - 1) {
                x++;
                cont=cont+1;
            }
        }
        else if (tecla == 'd') {
            if (y < columnas - 1) {
                y++;
                cont=cont+1;
            }
        }

        printf("Movimientos: %d\n", cont);

        if (x == filas - 1 && y == columnas - 1) {
            printf("¡Has llegado al destino!\n");
        }
    }
    
    return cont;
}

