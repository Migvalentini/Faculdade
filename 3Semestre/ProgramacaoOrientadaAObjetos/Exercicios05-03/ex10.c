//Implemente uma função que receba um vetor e retorne a soma de seus elementos.

#include <stdio.h>

int somaVetor(int vetor[], int tamanho) {
    int x, soma=0;

    for(x=0; x<tamanho; x++) {
        soma += vetor[x];
    }

    return soma;
}

int main() {
    int vet[] = {1,2,3,4,5,6,7,8,9,10};

    printf("Soma: %d", somaVetor(vet, 10));
}