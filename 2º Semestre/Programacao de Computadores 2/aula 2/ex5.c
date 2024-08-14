//Faça um programa que leia uma matriz M[5][5], possivelmente com elementos repetidos.
//Leia, a seguir, 5 valores e, para cada um, verifique se o valor ocorre ou não na matriz, 
//escrevendo a posição (linha e coluna) em que foi encontrada a primeira ocorrência do mesmo e, caso ele não exista na matriz, a mensagem "Não tem"

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

void leVetor(int vetor[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Escreva o elemento da posicao %d: ",x);
        scanf("%d",&vetor[x]);
    }
}

void escreveMatriz(int matriz[N][N+1]) {
    int x,y;

    printf("Matriz:\n");

    for(x=0; x<N; x++) {
        for(y=0; y<N+1; y++) {
            printf("%2d ",matriz[x][y]);
        }
        printf("\n");
    }
}

void escreveVetor(int vetor[N]) {
    int x;

    printf("\nVetor:\n");

    for(x=0; x<N; x++) {
        printf("%2d ",vetor[x]);
    }

    printf("\n");
}

void verificaMatriz(int matriz[N][N], int vetor[N]) {
    int x,y,z,esta;
    
    for(x=0; x<N; x++) {
        esta=0;
        for(y=0; y<N; y++) {
            for(z=0; z<N; z++) {
                if(vetor[x]==matriz[y][z]&&esta==0) {
                    printf("Elemento %d encontrado nas posicoes %d%d da matriz\n",vetor[x],y,z);
                    esta=1;
                } else {
                    printf("Nao tem\n");
                    esta=1;
                }
            }
        }
    }
}

int main() {
    int matriz[N][N+1],vetor[N];

    leMatriz(matriz);
    leVetor(vetor);
    escreveMatriz(matriz);
    escreveVetor(vetor);
    verificaMatriz(matriz, vetor);

    return 0;
}
