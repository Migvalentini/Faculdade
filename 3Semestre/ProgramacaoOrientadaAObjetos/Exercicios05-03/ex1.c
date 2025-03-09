//Crie uma função que receba um número e retorne se ele é par ou ímpar.

#include <stdio.h>

int ehPar(int num) {
    return num%2==0;
}

int main()
{
    int num;
    printf("Informe um numero:\n");
    scanf("%d", &num);

    if(ehPar(num)) {
      printf("O numero %d eh par", num);
    } else {
      printf("O numero %d eh impar", num);
    }

    return 0;
}


