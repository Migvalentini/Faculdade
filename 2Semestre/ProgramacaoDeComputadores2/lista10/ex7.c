// Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas quantidades de elementos: n1 e n2. 
// A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a união de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. 
// Assuma que em um mesmo vetor não haverá valores repetidos, mas um valor contido em x1 poderá também estar contido em x2. Nesse caso, apenas uma ocorrência deve ser colocada em x2.   
// Sendo x1={1,3,5,6,7} e x2={1,3,4,6,8}, x3 irá conter {1,3,5,6,7,4,8}. O protótipo da função é dado por:
// int* uniao(int *x1, int *x2, int n1, int n2, int* qtd)

#include <stdio.h>
#include <stdlib.h>

#define N 10
#define M 5

void escreveVetor(int *vet, int n) {
    int x;

    for(x=0; x<n; x++) {
        printf("%d ",vet[x]);
    }
    printf("\n");
}

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd) {
    int x,y,flag,aux;
    *qtd=n1;

    for(y=0; y<n2; y++) {
        flag=0;
        for(x=0; x<n1; x++) {
            if(x1[x]==x2[y]) {
                flag=1;
                break;
            }
        }
        if(flag==0) {   
            (*qtd)++;
        }
    }

    int *x3 = (int *)malloc((*qtd)*sizeof(int));
    *qtd=0;

    for(x=0; x<n1; x++) {
        x3[*qtd]=x1[x];
        (*qtd)++;
    }

    for(y=0; y<n2; y++) {
        flag=0;
        for(x=0; x<n1; x++) {
            if(x1[x]==x2[y]) {
                flag=1;
                break;
            }
        }
        if(flag==0) {   
            x3[*qtd]=x2[y];
            (*qtd)++;
        }
    }

    for(x=0; x<*qtd; x++) {
        for(y=0; y<*qtd-x-1; y++) {
            if(x3[y]>x3[y+1]) {
                aux=x3[y];
                x3[y]=x3[y+1];
                x3[y+1]=aux;
            }
        }
    }

    return x3;
}

int main() {
    int x1[N]={1,2,3,11,6,7,9,10,5,12};
    int x2[M]={1,3,14,5,16};

    printf("Vetor 1: "); escreveVetor(x1,N);
    printf("Vetor 2: "); escreveVetor(x2,M);

    int n3;
    int *x3 = uniao(x1,x2,N,M,&n3);

    printf("Uniao:   "); escreveVetor(x3,n3);

    free(x3);
}