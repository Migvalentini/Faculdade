//Implementar a operação de inserção ordenada em uma lista encadeada simples que armazena nomes. 
//Os nomes devem inseridos respeitando a ordem alfabética (pode haver nomes repetidos).
//Implementar a operação de remoção na lista. Se a remoção for por valor, e houver nomes repetidos, remover todos os nodos com o nome informado. 
//Se a remoção for por posição, remover apenas o nodo na posição informada (o primeiro elemento da lista está na posição 1).
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
        while (aux != NULL && strcasecmp(aux->nome, novo->nome) < 0){
            ant = aux;
            aux = aux->prox;
        }
        ant->prox = novo;
        novo->prox = aux;
    }
}

void removeValor(char valor[]) {
    Elemento *aux=inicio, *ant=inicio, *aux2=inicio;

    while(inicio != NULL && strcmp(inicio->nome, valor) == 0) {
        aux = inicio;
        inicio = inicio->prox; 
        free(aux);
    }
    while(aux != NULL) {
        if(strcmp(aux->nome, valor) == 0) {
            aux2 = aux->prox;
            ant->prox = aux->prox;
            free(aux);
            aux = aux2;
        } else {
            ant = aux;
            aux = aux->prox;
        }
    }
}

void removePosicao(int pos) {
    Elemento *aux=inicio, *ant=inicio;
    int i=1, flag=0;

    if(pos == 1 && inicio->prox == NULL) { //Primeiro e único
        free(inicio);
        inicio = NULL;
        flag=1;
    } else if (pos == 1 && inicio->prox != NULL) { //Primeiro, mas não único
        inicio = inicio->prox;
        free(aux);
        flag=1;
    } else {
        while (aux != NULL && i<pos) {
            ant = aux;
            aux = aux->prox;
            i++;
        }
        if (aux!=NULL && pos>0) {
            ant->prox = aux->prox;
            free(aux);
            flag=1;
        }
    }

    if(flag==0) {
        printf("\nNumero Invalido!\n");
    }
}

void escreve() {
    Elemento *aux = inicio;
    
    printf("\nLista:\n");
    while(aux != NULL) {
        printf("- %s\n",aux->nome);
        aux = aux->prox;
    }
}

int main() {
    inicio = NULL;

    insereOrdenado("Ana");
    insereOrdenado("Miguel");
    insereOrdenado("Julio");
    insereOrdenado("Ana");
    insereOrdenado("Zezinho");
    insereOrdenado("Miguel");
    escreve();

    removeValor("Ana");
    removeValor("Miguel");
    escreve();

    removePosicao(1);
    escreve();

    return 0;
}
