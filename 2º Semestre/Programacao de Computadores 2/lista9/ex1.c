//Fazer uma função que troque o valor de duas variáveis inteiras informadas como parâmetro.

#include <stdio.h>

void trocaVariaveis(int *a, int *b) {
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    int a=1, b=2;

    printf("A = %d B = %d\n",a,b);
    
    trocaVariaveis(&a,&b);

    printf("A = %d B = %d",a,b);
}