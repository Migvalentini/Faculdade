#include <stdio.h>

int ehPalindromo(unsigned char n) {
    int i, f;

    for(i=7, f=0; i>f; i--, f++) {
        if(((n>>i) & 1) != ((n>>f) & 1)) {
            return 0;
        }

    }

    return 1;
}

int main() {
    ehPalindromo(165) == 1 ? printf("Eh palindromo") : printf("Nao eh palindromo");
}