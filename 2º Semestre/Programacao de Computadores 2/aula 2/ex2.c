//Uma matriz é dita Diagonalmente Dominante se em todas as linhas o elemento da diagonal principal é maior ou igual à soma dos outros elementos da linha, 
//e há pelo menos uma linha em que o elemento da diagonal principal é MAIOR que a soma dos outros elementos da linha (não basta que seja igual). 
//Faça um programa que leia uma matriz M[4][4] e verifique se é diagonalmente dominante escrevendo: 1 - Se é diagonalmente dominante; 0 - Se não é diagonalmente dominante

#include <stdio.h>

#define N 4

void leMatriz(int matriz[N][N]) {
    int x,y;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            printf("Escreva o elemento da posicao %d%d: ",x,y);
            scanf("%d",&matriz[x][y]);
        }
    }
}

void escreveMatriz(int matriz[N][N]) {
    int x,y;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            printf("%d ",matriz[x][y]);
        }
        printf("\n");
    }
}

int verificaMatriz(int matriz[N][N]) {
    int x,y,aux[N]={0,0,0,0},soma=0;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            if(x!=y) {
                aux[x]+=matriz[x][y];
            }
        }
        printf("Aux[%d] = %d\n",x,aux[x]);
        if(matriz[x][x]>aux[x]) {
            aux[x]=2;
        } else if(matriz[x][x]>=aux[x]) {
            aux[x]=1;
        } else {
            aux[x]=0;
        }
    }

    printf("\n");

    for(x=0; x<N; x++) {
        printf("Aux[%d] = %d\n",x,aux[x]);
        soma+=aux[x];
    }

    return soma >=N+1 ? 1 : 0;
}

int main() {
    int m[N][N];

    leMatriz(m);
    escreveMatriz(m);
    printf("Resultado: %d",verificaMatriz(m));

    return 0;
}