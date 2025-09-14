//Escreva a implementação de operações de inserção e remoção em uma deque de entrada restrita, 
//implementada sobre uma lista de encadeamento (simples ou duplo? Qual a melhor opção?).

#include <stdio.h>
#include <stdlib.h>

struct element {
    int info;
    struct element *prox;
}; typedef struct element Element;

Element *dequeue;

void writeDequeue() {
    Element *aux = dequeue;
    
    printf("\nDequeue:\n");
    while(aux != NULL) {
        printf("%d ",aux->info);
        aux = aux->prox;
    }
}

void push(int number) {
    Element *new;
    new = (Element*)malloc(sizeof(Element));
    new->info = number;
    if(dequeue == NULL) { //first and only
        new->prox = NULL;
    } else { // insert
        new->prox = dequeue;
    }
    dequeue = new;
}

void popFront() {
    if (dequeue == NULL) {
        printf("Deque vazia!\n");
        return;
    }
    Element *aux=dequeue;
    dequeue = dequeue->prox;
    free(aux);
}

void popBack() {
    if (dequeue == NULL) {
        printf("Deque vazia!\n");
        return;
    }
    if (dequeue->prox == NULL) { //Only 1 element
        free(dequeue);
        dequeue = NULL;
        return;
    }
    Element *aux=dequeue, *ant=dequeue;
    while (aux->prox != NULL){
        ant = aux;
        aux = aux->prox;
    }
    ant->prox = NULL;
    free(aux);
}

int main() {
    dequeue = NULL;

    push(1);
    push(2);
    push(3);
    writeDequeue();
    
    popFront();
    writeDequeue();

    popBack();
    writeDequeue();

    return 0;
}
