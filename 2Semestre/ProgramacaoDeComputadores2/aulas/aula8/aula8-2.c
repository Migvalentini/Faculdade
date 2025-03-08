// variavel - alocação de memoria nomeada
// memoria - "vetor" de armazenamento de dados. Nomeia uma posição de memoria
// pointer - variavel que amrmazena o endereço das variáveis

#include <stdio.h>

int main() {
    int a = 5;
    int *p = NULL;  // * significa declaração de pointer. NULL significa que aponta para nada

    p = &a; // armazena o endereço da variável A. P aponta para A

    printf("A=%d P=%d\n",&a,p); // escreve o endereço de uma variável

    printf("%d\n",*p); // operador que escreve o conteúdo do endereço
}