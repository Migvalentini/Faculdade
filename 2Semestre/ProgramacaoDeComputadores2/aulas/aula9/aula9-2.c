#include <stdio.h>
#include <stdlib.h>

#define N 1000000

int main() {
    //LOCAÇÃO DINÂMICA - vetor comum, com armazenamento diferente
    int *v = NULL;

    v=(int *)malloc(N*sizeof(int)); //malloc aloca memória para qualquer coisa. Quantos bytes a gente quer armazenar. Retorna a memória alocada
    // sizeof retorna o tamanho de bytes do tipo informado

    if(v==NULL) {
        printf("Erro na alocacao");
        exit(0);
    }

    int i;
    for(i=0; i<N; i++) {
        v[i]=0;
    }
    printf("Cheguei aqui"); // executa normalmente pois variaveis locais são armazenadas na pilha. Variáveis globais são armazenadas na sessão de dados (ilimitado). Variáveis dinâmicas são armazenadas ho heap (ilimitado)

    free(v); //desaloca
}