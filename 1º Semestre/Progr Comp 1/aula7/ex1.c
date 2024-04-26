#include <stdio.h>

int main () {
    int menorNumero, x;
    
    printf("Digite um numero: ");
    scanf("%d",&x);
    menorNumero=x;

    while (x != 0) {
        if (x>0 && x<menorNumero) {
            menorNumero=x;
        }

        printf("Digite um numero: ");
        scanf("%d",&x);
    }

    printf("Menor numero: %d",menorNumero);

    return 0;
}
