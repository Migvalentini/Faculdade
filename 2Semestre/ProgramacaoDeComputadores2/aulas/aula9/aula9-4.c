#include <stdio.h>
#include <stdlib.h>

int * criaVetor(int n) {
    int *v = (int *)malloc(n*sizeof(int));
    int i;
    if(v==NULL) {
        printf("Erro na alocacao");
        exit(0);
    }

    for(i=0; i<n; i++) {
        v[i]=i;
    }
    return v;
}

int main() {
    int *v = criaVetor(10);
    int i;

    for(i=0; i<10; i++) {
        printf("%d\n",v[i]);
    }

    free(v);
}