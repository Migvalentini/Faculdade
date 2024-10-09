#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 3

void escreveVetor(int *v, int n) {
    int i;

    for(i=0; i<n; i++) {
        printf("%d ",v[i]);
    }
    printf("\n");
}

int * interseccao(int *v1, int n, int *v2, int m, int *t) {
    int i,j,k=0;
    *t=0;

    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            if(v1[i]==v2[j]) {
                (*t)++;
                break;
            }
        }
    }

    //int * v3 =(int *)malloc(*t*sizeof(int));
    int * v3 =(int *)calloc(*t, sizeof(int)); //Usado para inicializar como 0

    if(v3==NULL) {
        printf("Erro na alocacao");
        exit(0);
    }

    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            if(v1[i]==v2[j]) {
                v3[k++]=v1[i];
                break;
            }
        }
    }
    
    return v3;
}

int main() {
    int v1[N]={8,3,1,4};
    int v2[M]={3,8,7};

    printf("V1 = "); escreveVetor(v1,N);
    printf("V2 = "); escreveVetor(v2,M);
    
    int t;

    int *v3 = interseccao(v1,N,v2,M,&t);

    printf("V3 = "); escreveVetor(v3,t);

    free(v3);
}