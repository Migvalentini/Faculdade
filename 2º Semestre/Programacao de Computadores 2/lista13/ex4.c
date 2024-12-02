// Utilizando operadores bitwise, faça uma função que converta uma letra para minúscula.

#include <stdio.h>

char maiuscula(char m) {
    return m | 32;
}

int main() {
    int n=97;
    printf("A letra 'A' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'B' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'C' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'D' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'E' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'F' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'G' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'H' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'I' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'J' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'K' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'L' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'M' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'N' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'O' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'P' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'Q' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'R' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'S' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'T' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'U' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'V' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'W' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'X' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'Y' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'Z' maiscula eh %c\n",maiuscula(n++));
}