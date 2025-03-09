//Crie uma função que receba dois números e some seus valores.

#include <stdio.h>

int soma(int a, int b) {
    return (a + b);
}

int main()
{
    int a, b;
    printf("Informe dois numeros:\n");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d", a, b, soma(a, b));

    return 0;
}