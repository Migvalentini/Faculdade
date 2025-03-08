// Fazer um programa que leia uma matriz de 5 linhas x 5 colunas. 
// Verifique a quantidade de números primos (números naturais que têm apenas dois divisores : 1 e ele mesmo) acima e abaixo da diagonal secundária. 
// O programa deverá escrever: 
// -1 se existem mais números primos acima da diagonal secundária; 
// 0 se possuem a mesma quantidade; 
// 1 se existem mais números primos abaixo da diagonal secundária.

#include <stdio.h>

#define N 5

void leMatriz(int matriz[N][N]) {
    int x,y;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            printf("Digite a posicao %d%d: ",x,y);
            scanf("%d",&matriz[x][y]);
        }
    }
}

int verificaMatriz(int matriz[N][N]) {
    int x,y,z,div,acima=0,abaixo=0;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            div=0;
            for(z=1; z<=matriz[x][y]; z++) {
                if(matriz[x][y]%z==0) {
                    div++;
                }
            }
            if(div==2) {
                if(x+y<N-1) {acima++;} 
                else if(x+y>N-1) {abaixo++;}
            }
        }
    }

    if(acima>abaixo) {
        return -1;
    } else if(acima==abaixo) {
        return 0;
    } else if(acima<abaixo) {
        return 1;
    } 
}

int main() {
    int matriz[N][N]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };

    leMatriz(matriz);
    printf("%d",verificaMatriz(matriz));

    return 0;
}