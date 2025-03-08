#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

struct valor {
    int n;
    int lin; 
    int col;
};
typedef struct valor VALOR;

void geraMatriz(int matriz[N][N]) {
    int x,y;

    srand(time(NULL));

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

void retornaMaior(int matriz[N][N], VALOR *maior, VALOR *menor) {
    int x,y;
    maior->n=matriz[0][0]; // maior->n é a mesma coisa que (*maior).n
    maior->lin=0;
    maior->col=0;
    menor->n=matriz[0][0];
    menor->lin=0;
    menor->col=0;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            if(matriz[x][y]>(*maior).n) {
                (*maior).n=matriz[x][y];
                (*maior).lin=x;
                (*maior).col=y;
            }
            if(matriz[x][y]<(*menor).n) {
                (*menor).n=matriz[x][y];
                (*menor).lin=x;
                (*menor).col=y;
            }
        }
    }
}

int main() {
    int matriz[N][N];
    VALOR maior;
    VALOR menor;
    geraMatriz(matriz);
    escreveMatriz(matriz);

    retornaMaior(matriz,&maior,&menor);

    printf("Maior = %d Lin = %d Col = %d\n",maior.n,maior.lin,maior.col);
    printf("Menor = %d Lin = %d Col = %d",menor.n,menor.lin,menor.col);
}
