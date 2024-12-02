// Utilizando operadores bitwise, faça uma função que verifique se um número é impar.

#include <stdio.h>

int ehImpar(int n) {
    return n & 1;
}

int main() {
    ehImpar(1) ? printf("O numero 1 eh primo\n") : printf("O numero 1 NAO eh primo\n");
    ehImpar(2) ? printf("O numero 2 eh primo\n") : printf("O numero 2 NAO eh primo\n");
    ehImpar(3) ? printf("O numero 3 eh primo\n") : printf("O numero 3 NAO eh primo\n");
    ehImpar(4) ? printf("O numero 4 eh primo\n") : printf("O numero 4 NAO eh primo\n");
    ehImpar(5) ? printf("O numero 5 eh primo\n") : printf("O numero 5 NAO eh primo\n");
}