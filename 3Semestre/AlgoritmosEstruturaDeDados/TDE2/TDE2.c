//Implementar a operação de inserção ordenada em uma lista encadeada simples que armazena nomes. 
//Os nomes devem inseridos respeitando a ordem alfabética (pode haver nomes repetidos).
//Implementar a operação de remoção na lista. Se a remoção for por valor, e houver nomes repetidos, remover todos os nodos com o nome informado. Se a remoção for por posição, remover apenas o nodo na posição informada (o primeiro elemento da lista está na posição 1).
//Implemente uma operação para exibir o conteúdo da lista.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct elemento {
    char nome[50];
    struct elemento *prox;
}; typedef struct elemento Elemento;

Elemento *inicio;

void insereOrdenado(char nome[]) {
    Elemento *novo, *aux = inicio, *ant = inicio;
    novo = (Elemento*)malloc(sizeof(Elemento));
    strcpy(novo->nome, nome);
    novo->prox = NULL;
    if(inicio == NULL) { //primeiro e único
        inicio = novo;
    } else if(strcasecmp(novo->nome, inicio->nome) <= 0) { //insere na frente do primeiro
        novo->prox = inicio;
        inicio = novo;
    } else {
        printf(" ");
        while (aux != NULL && strcasecmp(aux->nome, novo->nome) < 0){
            ant = aux;
            aux = aux->prox;
        }
        ant->prox = novo;
        novo->prox = aux;
    }
}

void escreve() {
    Elemento *aux = inicio;
    
    printf("\nLista:\n");
    while(aux != NULL) {
        printf("%s\n",aux->nome);
        aux = aux->prox;
    }
}

int main() {
    inicio = NULL;

    insereOrdenado("Ana");
    insereOrdenado("Miguel");
    insereOrdenado("Zezinho");
    insereOrdenado("Paulo");
    escreve();

    return 0;
}
