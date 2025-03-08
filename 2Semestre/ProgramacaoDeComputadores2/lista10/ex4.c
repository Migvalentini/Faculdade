// Faça uma função que receba por parâmetro um valor inteiro n e retorne um vetor de n inteiros alocado dinamicamente com os n primeiros termos da série de Fibonacci. 
// Lembre-se que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele. 
// Por exemplo, os 11 primeiros termos da série de Fibonacci são:
// 0 1 1 2 3 5 8 13 21 34 55 …
// O protótipo da função é dado por:
// int * fibonacci(int n)

#include <stdio.h>
#include <stdlib.h>

int * fibonacci(int n) {
    int x,*num = (int *)malloc(n*sizeof(int));
    int n1=0,n2=1,n3;

    num[0]=n1;
    num[1]=n2;

    for(x=2; x<n; x++) {
        n3=n2+n1;
        n1=n2;
        n2=n3;
        num[x]=n3;
    }

    return num;
}

int main() {
    int n,i;

    printf("Digite n: ");
    scanf("%d",&n);

    int *serie = fibonacci(n);

    for(i=0; i<n; i++) {
        printf("%d ",serie[i]);
    }

    free(serie);
}