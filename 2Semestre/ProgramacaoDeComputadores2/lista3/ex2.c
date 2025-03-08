// Fazer um programa que leia uma matriz de 5 linhas x 5 colunas. 
// O programa deverá escrever: 
// 1 se for triangular inferior; 
// 2 se for triangular superior; 
// 3 se for matriz diagonal;
// 0 em caso contrário. 
// Uma matriz é dita triangular superior quando todos elementos abaixo da diagonal principal são iguais a zero e 
// triangular inferior quando todos elementos acima da diagonal principal são iguais a zero.

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
    int x,y,somaAcima=0,somaDiagnoal=0,somaAbaixo=0;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            if(matriz[x][y]==0&&x>y) {
                somaAcima++;
            } if(matriz[x][y]==0&&x==y) {
                somaDiagnoal++;
            } if(matriz[x][y]==0&&x<y) {
                somaAbaixo++;
            }
        }
    }

    printf("Acima: %d\nDiagonal: %d\nAbaixo: %d\n",somaAcima,somaDiagnoal,somaAbaixo);

    if(somaAbaixo==10&&somaDiagnoal+somaAcima==0) {
        return 1;
    } else if(somaAcima==10&&somaDiagnoal+somaAbaixo==0) {
        return 2;
    } else if(somaDiagnoal==0&&somaAbaixo+somaAcima==20) {
        return 3;
    } else {
        return 0;
    }
}

int main() {
    int matriz[N][N]={
        {1,0,0,0,0},
        {0,1,0,0,0},
        {0,0,1,0,0},
        {0,0,0,1,0},
        {0,0,0,0,1}
    };

    //leMatriz(matriz);
    printf("Resultado: %d",verificaMatriz(matriz));

    return 0;
}