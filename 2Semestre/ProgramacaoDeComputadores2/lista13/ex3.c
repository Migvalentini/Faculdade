// Utilizando operadores bitwise, faça uma função que converta uma letra para maiúscula.

#include <stdio.h>

char maiuscula(char m) {
    return m & 223;
}

int main() {
    int n=97;
    printf("A letra 'a' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'b' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'c' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'd' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'e' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'f' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'g' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'h' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'i' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'j' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'k' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'l' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'm' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'n' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'o' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'p' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'q' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'r' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 's' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 't' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'u' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'v' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'w' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'x' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'y' maiscula eh %c\n",maiuscula(n++));
    printf("A letra 'z' maiscula eh %c\n",maiuscula(n++));
}