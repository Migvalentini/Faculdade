//Escreva uma função que receba um array e retorne o maior valor

#include <stdio.h>

int retornaMaior(int vetor[], int tamanho) {
    int x, maior = vetor[0];

    for(x=1; x<tamanho; x++) {
        if(vetor[x] > maior) {
            maior = vetor[x];
        }
    }

    return maior;
}

int main() {
    int vetor[] = {5,121,78,98,2,15};

    printf("Maior elemento: %d", retornaMaior(vetor, 6));
}