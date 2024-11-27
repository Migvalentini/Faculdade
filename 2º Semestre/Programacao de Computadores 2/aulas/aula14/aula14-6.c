#include <stdio.h>

int escreve_bits(char n) {
    int i;

    for(i = 7; i>=0; i--) {
        printf("%d",(n>>i) & 1);
    }
    printf("\n");
}

int main() {
    char n = -97;

    escreve_bits(97);
    escreve_bits(-97);
}