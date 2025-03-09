//Desenvolva uma função que verifique se um número é primo.

#include <stdio.h>

int ehPrimo (int n) {
    int x;
    if(n==1) {
        return 0;
    }

    for(x=2; x<n-1; x++) {
        if(n%x==0) {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;
    printf("Informe um numero:\n");
    scanf("%d", &n);

    if(ehPrimo(n)) {
        printf("O numero %d eh Primo", n);
    } else {
        printf("O numero %d eh Nao eh primo", n);
    }

    return 0;
}