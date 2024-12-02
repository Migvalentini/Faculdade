// Faça uma função que escreva os bits de uma número inteiro de 32 bits.

#include <stdio.h>

void escreveBits(int n) {
    int x;

    for(x=31; x>=0; x--) {
        printf("%d",(n>>x) & 1);
        if (x%4 == 0 && x>0) printf(".");
    }
    printf("\n");
}

int main() {
    escreveBits(16);
    escreveBits(254);
    escreveBits(255);
    escreveBits(4294967295);
}