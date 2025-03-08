//Utilizando operadores bitwise, faça uma função que troque duas variáveis.

#include <stdio.h>

void troca(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int a=5;
    int b=9;

    printf("A: %d B: %d\n",a,b);

    troca(&a, &b);

    printf("A: %d B: %d",a,b);
}