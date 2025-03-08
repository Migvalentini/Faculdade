// Considere a declaração da struct a seguir, que contém o valor, linha e coluna de um elemento não nulo de uma matriz.
// struct naonulo{
//        int valor; 
//        int linha; 
//        int coluna;
// };
// typedef struct naonulo NAONULO;
// Faça uma função naonulos que recebe uma matriz de inteiros M[5][5] e aloca um vetor de naonulo de tamanho igual à quantidade de elementos diferentes de 0 na matriz, 
// e coloca nele os elementos não nulos da matriz recebida, retornando, como valor de retorno da função, o endereço para o vetor alocado. 
// A função deve retornar NULL se não há houverem elementos não nulos. 
// Além disso, a função deverá retornar o número de elementos não nulos através de um argumento. 
// O protótipo da função é dado por:
// NAONULOS* valores_nao_nulos(int M[5][5],  int *num_nao_nulos)

#include <stdio.h>
#include <stdlib.h>

#define N 5

struct naonulo{
    int valor; 
    int linha; 
    int coluna;
};
typedef struct naonulo NAONULO;

NAONULO * valoresNaoNulos(int matriz[N][N], int *numNaoNulos) {
    int x,y,k=0;
    *numNaoNulos=0;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            if(matriz[x][y] != 0) {
                (*numNaoNulos)++;
            }
        }
    }

    NAONULO * valores = (NAONULO *)malloc(*numNaoNulos*sizeof(NAONULO));

    if((*numNaoNulos)==0 || valores==NULL) {
        return NULL;
    }

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            if(matriz[x][y] != 0) {
                valores[k].valor=matriz[x][y];
                valores[k].linha=x;
                valores[k].coluna=y;
                k++;
            }
        }
    }

    return valores;
}

int main() {
    int matriz[N][N] = {
        {0, 2, 0, 0, 5},
        {6, 0, 0, 3, 0},
        {0, 0, 7, 0, 0},
        {4, 0, 0, 0, 1},
        {0, 9, 0, 0, 0}
    };
    
    int numNaoNulos;
    NAONULO *naoNulos = valoresNaoNulos(matriz,&numNaoNulos);

    int x;

    for(x=0; x<numNaoNulos; x++) {
        printf("%d (%d,%d)\n",naoNulos[x].valor,naoNulos[x].linha,naoNulos[x].coluna);
    }

    free(naoNulos);
}