// O jogo "sudoku" consiste em uma matriz de 9 linhas por 9 colunas, sendo que cada elemento da matriz pode receber os valores de 1 a 9. 
// Essa matriz possui algumas restrições, por exemplo, os elementos de uma linha devem ser distintos e os de uma coluna também. 
// Além disso, a matriz do jogo é subdividida em 9 submatrizes de 3 linhas por 3 colunas, sendo que, em cada uma das submatrizes, somente podem ser armazenados elementos distintos. 
// O jogo começa com a matriz parcialmente preenchida e o objetivo consiste em preenche-la considerando as restrições acima. 
 
// Faça um programa que leia uma matriz de 9 linhas por 9 colunas, com valores de 0 a 9, sendo que o valor 0 significa uma posição vazia. 
// Após o programa deverá ler uma linha (L) e uma coluna (C) correspondente a uma posição da matriz e escrever os possíveis valores para essa posição. 
// Para isso, deverá  desconsiderar os elementos que já estão na linha da posição lida, na coluna da posição lida e na submatriz correspondente. 

#include <stdio.h>

void verificaPosicoes(int matriz[9][9], int l, int c) {
    int x,y,z,aux[9]={1,2,3,4,5,6,7,8,9};
    int linhaInicial=(l/3)*3,colunaInicial=(c/3)*3;

    if(matriz[l][c]>0) {
        printf("Elemento ja preenchido!");
    } else{
        for(x=0;x<9;x++) {
            for(y=0;y<9;y++) {
                if(matriz[l][x] == aux[y] || matriz[x][c] == aux[y]) {
                    aux[y]=0;
                }
            }
        }

        for (x = linhaInicial; x < linhaInicial + 3; x++) {
            for (y = colunaInicial; y < colunaInicial + 3; y++) {
                for (z=0;z<9;z++) {
                    if (matriz[x][y] == aux[z]) {
                        aux[z]=0;
                    }
                }
            }
        }
        
        printf("Valores possiveis: ");
        for(x=0;x<9;x++) {
            if(aux[x]>0) {
                printf("%d ",aux[x]);
            }
        }
    }

}

void leMatriz(int matriz[9][9]) {
    int x,y;

    for(x=0;x<9;x++) {
        for(y=0;y<9;y++) {
            verificaPosicoes(matriz, x, y);
            printf("\nInsira o valor para a posicao [%d][%d]: ", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }
}

void escreveMatriz(int matriz[9][9]) {
    int x,y;

    for(x=0;x<9;x++) {
        for(y=0;y<9;y++) {
            printf("%d ",matriz[x][y]);
        }
        printf("\n");
    }
}

int main() {
    int l,c;
    //int matriz[9][9]={0};
    int matriz[9][9] = {
        {0,1,9,0,4,8,3,0,7},
        {5,0,4,3,6,0,0,1,2},
        {0,3,8,7,0,2,9,5,0},
        {9,6,0,0,8,1,5,0,3},
        {0,4,3,0,7,5,6,2,0},
        {1,2,0,6,3,0,0,8,9},
        {7,0,2,4,0,6,0,3,5},
        {4,9,0,1,5,0,2,0,8},
        {3,0,1,0,2,7,4,9,0},
    };
    
    //leMatriz(matriz);
    escreveMatriz(matriz);

    while(1) {
        printf("\n\nDigite a linha (-1 para parar): ");
        scanf("%d",&l);
        printf("Digite a coluna (-1 para parar): ");
        scanf("%d",&c);

        if(l==-1||c==-1) {
            break;
        }

        verificaPosicoes(matriz, l, c);
    }


    return 0;
}