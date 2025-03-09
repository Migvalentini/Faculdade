//Crie uma função que calcule o fatorial de um número

#include <stdio.h>

int fatorial (int n) {
    int x, total = 1;

    for(x=1; x<=n; x++) {
        total*=x;
    }
    return total;
}

int main()
{
    int n;
    printf("Informe um numero:\n");
    scanf("%d", &n);
    printf("%d! = %d", n, fatorial(n));
}