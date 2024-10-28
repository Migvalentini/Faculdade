// Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas quantidades de elementos: n1 e n2.
// A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a união de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3.
// Assuma que em um mesmo  vetor não haverá valores repetidos, mas um valor contido em x1 poderá também estar contido em x2.  Nesse caso, apenas uma ocorrência deve ser colocada em x2.
// Sendo x1={1,3,5,6,7} e x2={1,3,4,6,8}, x3 irá conter {1,3,5,6,7,4,8}. O protótipo da função é dado por:
// int* uniao(int *x1, int *x2, int n1, int n2, int* qtd)

#include <stdio.h>
#include <stdlib.h>

void leVetor(int *v, int n) {
    int i;

    for(i=0; i<n; i++) {
        printf("Digite o valor: ");
        scanf("%d",&v[i]);
    }
}

void escreveVetor(int *v, int n) {
    int i;

    printf("---------------\n");
    for(i=0; i<n; i++) {
        printf("%d ",v[i]);
    }
    printf("\n");
}

int *uniao(int *v1, int n, int *v2, int m, int *t) {
    int i,j,*v3 = (int *)malloc((n+m)*sizeof(int));

    if(v3==NULL) {
        printf("Erro na alocacao");
        return NULL;
    }

    for(i=0; i<n; i++) {
        v3[i]=v1[i];
    }
    *t=n;

    for(i=0; i<m; i++) {
        int achou=0;
        for(j=0; j<n; j++) {
            if(v2[i]==v1[j]) {
                achou=1;
                break;
            }
        }
        if(!achou) {
            v3[(*t)++]=v2[i];
        }
    }

    int *temp = (int *)realloc(v3,*t*sizeof(int));

    if(temp==NULL) {
        printf("Erro na alocacao");
        return NULL;
    }

    return temp;
}

int main() {
    int v1[3]={1,4,3};
    int v2[2]={4,3};
    int t;

    //leVetor(v1,3);
    //leVetor(v2,2);

    escreveVetor(v1,3);
    escreveVetor(v2,2);

    int *v3 = uniao(v1,3,v2,2,&t);

    escreveVetor(v3,t);

    free(v3);
}