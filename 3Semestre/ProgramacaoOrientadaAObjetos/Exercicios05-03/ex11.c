//Escreva uma função que receba dois números e troque seus valores usando ponteiros.

#include <stdio.h>

void troca(int *a, int *b) {
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    int a, b;

    printf("Digite 2 numeros:\n");
    scanf("%d %d", &a, &b);

    printf("A: %d B: %d", a, b);
    troca(&a, &b);
    printf("\nA: %d B: %d", a, b);
}