//Dada uma lista L1, na qual cada nodo armazena um número inteiro, implementada com encadeamento simples, que pode conter números repetidos. 
//Implemente operações (funções, métodos) em C/Java/C++/C#/Python para:

//a) verifique se L1 está ordenada ou não (a ordem pode ser crescente ou decrescente);
//b) faça uma cópia da lista L1 em uma outra lista L2;
//c) faça uma cópia da Lista L1 em uma outra lista L2, eliminando elementos repetidos;
//d) inverta L1 colocando o resultado em L2;
//e) inverta L1 colocando o resultado na própria L1;
//f) gere uma lista L3 que representa a concatenação de L1 e uma outra lista L2;
//g) gere uma lista L2 onde cada registro contém dois campos de informação: elem contém um elemento de L1, e count contém quantas vezes este elemento apareceu em L1;
//h) assumindo que os elementos da lista L1 são inteiros positivos, forneça os elementos que aparecem o maior e o menor número de vezes (forneça os elementos e o número de vezes correspondente).
//i)  escrever os elementos que estão repetidos em L1 (escrever uma vez cada valor repetido).
//j) apresentar a soma dos valores armazenados nas posições ímpares de L1 (o primeiro elemento é da posição 1, e assim por diante).
//k) ler um valor. Se ele estiver em L1, colocar seu nodo como primeiro da lista. Se ele não estiver na lista, inseri-lo no final da lista.

#include <stdio.h>
#include <stdlib.h>

struct elemento {
    int num;
    struct elemento *prox;
}; typedef struct elemento Elemento;

void escreve(Elemento *lista) {
    Elemento *aux = lista;
    
    printf("\nLista:\n");
    while(aux != NULL) {
        printf("%d\n",aux->num);
        aux = aux->prox;
    }
}

void insere(Elemento **lista, int numero) {
    Elemento *novo, *aux = *lista;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->num = numero;
    novo->prox = NULL;
    if(*lista == NULL) { //primeiro e único
        *lista = novo;
    } else { // insere no fim
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
}

void verificaOrdenacao(Elemento *lista) {
    Elemento *aux=lista;
    int crescente = 1, decrescente = 1;

    while(aux != NULL && aux->prox != NULL) {
        if(aux->num > aux->prox->num) {
            crescente = 0;
        }
        if(aux->num < aux->prox->num) {
            decrescente = 0;
        }
        aux = aux->prox;
    }

    if(crescente == 0 && decrescente == 0) {
        printf("Nao eh ordenada");
    }
}

void copia(Elemento *lista1, Elemento **lista2) {
    Elemento *aux1 = lista1;
    
    while (aux1 != NULL) {
        insere(lista2, aux1->num);
        aux1 = aux1->prox;
    }
}

int main() {
    Elemento *L1 = NULL;
    Elemento *L2 = NULL;

    insere(&L1, 8);
    insere(&L1, 7);
    insere(&L1, 3);
    escreve(L1);

    copia(L1, &L2);
    escreve(L2);

    verificaOrdenacao(L1);
}
