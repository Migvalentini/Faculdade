//Faça uma função que receba um número inicial e um final e calcule e mostre todos os números primos contidos no intervalo. 
//O que fazer se o final for menor do que o início?

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
    int inicial, final, n;
    printf("Digite um numero inicial e um final:\n");
    scanf("%d %d", &inicial, &final);
    
    if(inicial<final) {
        for(n=inicial; n<=final; n++) {
            if(ehPrimo(n)) {
                printf("%d ",n);
            }
        }
    } else {
        printf("Numeros invalidos");
    }

    return 0;
}