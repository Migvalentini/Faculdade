//Crie uma função que receba dois números e divida o primeiro pelo segundo. 
//O que pode dar errado nessa função? Use if internamente e retorne 0 se ocorrer um erro.

#include <stdio.h>

float divisao(float a, float b) {
    if(b==0) {
        return 0;
    }
    return a/b;
}

int main()
{
    float a, b;
    printf("Informe dois numeros:\n");
    scanf("%f %f", &a, &b);
    printf("%.1f / %.1f = %.2f", a, b, divisao(a, b));
}