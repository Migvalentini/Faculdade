// Escreva uma função chamada segundo_maior que recebe uma matriz de números inteiros como entrada e o endereço de três inteiros maior, lin e col.  
// A função deverá retornar no parâmetro maior o número que apresenta a maior soma dos dígitos.   
// A função deverá retornar ainda nos parâmetros lin e col, a linha e a coluna onde o elemento se encontra.  
// O valor de N é definido através da diretiva #define.  
// A função implementada deverá obrigatoriamente seguir o protótipo que é definido abaixo.
// void maior_soma_digitos(int mat[N][N], int *maior, int *lin, int *col)
// Faça ainda o programa principal que leia a chame a função implementada. 
// Após, o programa deverá escrever o número da matriz que possui a maior soma dos dígitos, bem como a linha e coluna onde ele se encontra.

#include <stdio.h>

#define N 5

int somaDigitos(int n) {
    int num=n,s=0;

    while(num>0) {
        s+=num%10;
        num/=10;
    }

    return s;
}

void maiorSomaDigitos(int mat[N][N], int *maior, int *lin, int *col) {
    int x,y;
    *maior=0;
    *lin=0;
    *col=0;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            printf("%d ",somaDigitos(mat[x][y]));
            if(mat[x][y]>*maior) {
                *maior=mat[x][y];
                *lin=x;
                *col=y;
            }
        }
        printf("\n");
    }
}

int main() {
    int matriz[N][N] = {
        {23, 91, 56, 47, 12},
        {39, 85, 74, 33, 27},
        {65, 11, 54, 88, 42},
        {77, 98, 31, 62, 19},
        {28, 49, 53, 36, 25}
    };
    int maior,lin,col;

    maiorSomaDigitos(matriz,&maior,&lin,&col);

    printf("Elemento: %d\nLin: %d\nCol: %d",maior,lin,col);
}