//2) Implemente o mesmo método de ordenação simples, mas com a implementação clássica usando vetores.

#include <stdio.h>

#define N 10

void bubblesort(int *vetor) {
    int i, aux, flag = 0, cont;

    while(flag==0) {
        cont=0;
        for(i=0; i<9; i++) {
            if(vetor[i] > vetor[i+1]) {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                cont++;
            }
        }
        if(cont==0) {
            flag=1;
        }
    }
}

void escreve(int vetor[]) {
    printf("\nLista:\n");
    int i;

    for(i=0; i<N; i++) {
        printf("%d ", vetor[i]);
    }
}

int main() {
    int vetor[N];
    int i,j;

    for(i=0, j=N; i<N; i++, j--) {
        vetor[i] = j;
    }

    escreve(vetor);

    bubblesort(vetor);

    escreve(vetor);

    return 0;
}
