// Faça uma função que receba por parâmetro um valor inteiro n e retorne um vetor de n inteiros alocado dinamicamente com os n primeiros primeiros números primos. 
// Faça a função, inicializando as duas primeiras posições com 2 e 3, a verificação da primalidade dos números posteriores seja feita dividindo cada número apenas pelos primos menores que ele, 
// que já estarão no vetor. Se o número não tiver divisores, ocupará a próxima posição livre do vetor. O protótipo da função é dado por:
// int * primos( int n )

#include <stdio.h>
#include <stdlib.h>

int * primos(int n) {
    int j,primo,p=2,x=5,*num=(int *)malloc(n*sizeof(int));
    num[0]=2;
    num[1]=3;

    while(n!=p) {
        
        primo=1;
        for(j=0; j<p; j++) {
            if(x%num[j]==0) {
                primo=0;
                break;
            }
        }
        if(primo==1) {
            num[p++]=x;
        }
        
        x++;
    }

    return num;
}

int main() {
    int n,x;

    printf("Digite o valor n: ");
    scanf("%d",&n);

    int *numPrimos = primos(n);

    printf("Numeros primos: ");
    for(x=0; x<n; x++) {
        printf("%d ",numPrimos[x]);
    }
}