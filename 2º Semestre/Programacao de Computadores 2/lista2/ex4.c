//Faça um programa que leia uma matriz M[5][6] e divide todos os 6 elementos de cada linha pelo valor do menor elemento EM MÓDULO da linha. 
//Escrever a matriz modificada.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 5

void leMatriz(int matriz[N][N+1]) {
    int x,y,aux=1;

    for(x=0; x<N; x++) {
        for(y=0; y<N+1; y++) {
            //printf("Escreva o elemento da posicao %d%d: ",x,y);
            //scanf("%d",&matriz[x][y]);
            matriz[x][y]=rand() % 10;
            //matriz[x][y]=aux;
            aux++;
        }
    }
}

void escreveMatriz(int matriz[N][N+1]) {
    int x,y;

    for(x=0; x<N; x++) {
        for(y=0; y<N+1; y++) {
            printf("%2d ",matriz[x][y]);
        }
        printf("\n");
    }
}

void modificaMatriz(int matriz[N][N+1]) {
    int x,y,menores[N];
    
    for(x=0; x<N; x++) {
        menores[x]=matriz[x][0];
        for(y=0; y<N+1; y++) {
            if(matriz[x][y]<menores[x]) {
                menores[x]=matriz[x][y];
            }
        }
    }

    for(x=0; x<N; x++) {
        printf("Menores[%d] = %d\n",x,menores[x]);
    }

    for(x=0; x<N; x++) {
        for(y=0; y<N+1; y++) {
            if(menores[x]!=0) {
                matriz[x][y] = matriz[x][y] / abs(menores[x]);
            }
        }
    }
}

int main() {
    int m[N][N+1];

    leMatriz(m);
    escreveMatriz(m);
    modificaMatriz(m);
    escreveMatriz(m);

    return 0;
}
