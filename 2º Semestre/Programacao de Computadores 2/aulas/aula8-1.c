#include <stdio.h>

void troca(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void troca2(int a, int b) {
    int aux = a;
    a=b;
    b=aux;

    printf("Troca: A = %d B = %d\n",a,b);
}

int main() {
    int a=5, b=9;

    troca(&a,&b); // realiza uma passagem de endereços e altera as variáveis da função main
    //troca2(a,b); // realiza uma passagem por cópia ou valor, mas não altera as variáveis da função main
    // ao passar vetores inteiros, a troca acima funciona
    // ao passar valores dentro de vetores, a troca acima não funciona

    printf("Main:  A = %d B = %d",a,b);
}