//Usando a função do exercício 6, mostre todos os números primos entre 100 e 200.

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
    
    for(n=100; n<=200; n++) {
        if(ehPrimo(n)) {
            printf("%d ",n);
        }
    }

    return 0;
}