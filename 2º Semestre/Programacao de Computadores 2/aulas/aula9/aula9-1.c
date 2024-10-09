#include <stdio.h>

void escreve(int *v, int n)  { //v[1] muda nada, pois será transformado em um ponteiro
    int i;

    for(i=0; i<n; i++) {
        printf("%d ",v[i]);
    }
    printf("\n");
}

int main() {
    // variáveis inicializadas na main sao armazenadas em pilha de execução
    // variáveis inicializadas fora da main sao armazenadas na sessão de dados (ilimitado)

    // problemas de variaveis globais: prejudica a reutilização de código e são pré-alocadas, ocupando memória

    int v1[5] = {3,2,1,8,5};
    int v2[5] = {6,7};
    int i;

    //printf("%d\n", *(v1+2)); //mesma coisa que v[2], porém o compilador tranforma para *(v+2)

    for(i=0; i<5; i++) {
        printf("%d\n", *(v1+i));
    }

    escreve(v1,5);
    escreve(v2,2);
}