#include <stdio.h>
void imprimir(int fila,int columna,int maze[5][5]){
    for(int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            printf("%d"),maze[i][j];
            if(j==columna-1){
                printf("\n");
            }
        }
    }

}


int main(){
    int maze[5][5]{
        {0,1,0,0,0},
        {0,1,1,1,0},
        {0,0,0,0,0},
        {0,1,0,1,0},
        {1,0,0,1,0}
    };
}