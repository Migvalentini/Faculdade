#include <stdio.h>
#include <stdlib.h>

#define N 4

void geraMatriz(int matriz[N][N]) {
    int x,y;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            matriz[x][y] = rand() % 100;
        }
    }
}

void escreveMatriz(int matriz[N][N]) {
    int x,y;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            printf("%2d ",matriz[x][y]);
        }
        printf("\n");
    }
}

void matrizTransposta(int matriz[N][N]) {
    int x,y,aux;

    for(x=0; x<N-1; x++) { 
        for(y=x+1; y<N; y++) {
            aux=matriz[x][y];
            matriz[x][y]=matriz[y][x];
            matriz[y][x]=aux;
        }
    }
}

int main() {
    int m[N][N];

    geraMatriz(m);
    printf("Matriz Original:\n");
    escreveMatriz(m);
    printf("\nMatriz Transposta:\n");
    matrizTransposta(m);
    escreveMatriz(m);

    //COMANDO TERNARIO
    //m=a>b?a:b;

    return 0;
}
