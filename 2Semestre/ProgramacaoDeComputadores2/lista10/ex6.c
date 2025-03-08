// Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas quantidades de elementos: n1 e n2. 
// A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a intersecção de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. 
// Assuma que em um mesmo vetor não haverá elementos repetidos. 
// Sendo x1={1,3,5,6,7} e x2={1,3,4,6,8}, x3 irá conter {1,3,6}. O protótipo da função é dado por:
// int* interseccao(int *x1, int *x2, int n1, int n2, int* qtd)

#include <stdio.h>
#include <stdlib.h>

#define N 7
#define M 5

void escreveVetor(int *vet, int n) {
    int x;

    for(x=0; x<n; x++) {
        printf("%d ",vet[x]);
    }
    printf("\n");
}

int* interseccao(int *x1, int *x2, int n1, int n2, int* qtd) {
    int x,y,k=0;
    *qtd=0;

    for(x=0; x<n1; x++) {
        for(y=0; y<n2; y++) {
            if(x1[x]==x2[y]) {
                (*qtd)++;
                break;
            }
        }
    }

    int *x3 = (int *)malloc(*qtd*sizeof(int));

    for(x=0; x<n1; x++) {
        for(y=0; y<n2; y++) {
            if(x1[x]==x2[y]) {
                x3[k++]=x1[x];
                break;
            }
        }
    }

    return x3;
}

int main() {
    int x1[N]={1,5,6,7,8,9}, x2[M]={1,3,4,6,8};

    printf("Vetor 1:     "); escreveVetor(x1,N);
    printf("Vetor 2:     "); escreveVetor(x2,M);

    int n3;
    int *x3 = interseccao(x1,x2,N,M,&n3);

    printf("Interseccao: "); escreveVetor(x3,n3);

    free(x3);
}