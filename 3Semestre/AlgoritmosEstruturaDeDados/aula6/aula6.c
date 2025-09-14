#include <stdio.h>
#include <stdlib.h>

struct element {
    int info;
    struct element *prox;
}; typedef struct element Element;

Element *stack;
Element *queue;

void writeStack() {
    Element *aux = stack;
    
    printf("\nStack:\n");
    while(aux != NULL) {
        printf("%d ",aux->info);
        aux = aux->prox;
    }
}

void writeQueue() {
    Element *aux = queue;
    
    printf("\nQueue:\n");
    while(aux != NULL) {
        printf("%d ",aux->info);
        aux = aux->prox;
    }
}

void push(int number) {
    Element *new;
    new = (Element*)malloc(sizeof(Element));
    new->info = number;
    if(stack == NULL) { //first and only
        new->prox = NULL;
    } else { // insert
        new->prox = stack;
    }
    stack = new;
}

void pop() {
    Element *aux=stack;
    stack = stack->prox;
    free(aux);
}

void enqueue(int number) {
    Element *new;
    new = (Element*)malloc(sizeof(Element));
    new->info = number;
    if(queue == NULL) { //first and only
        new->prox = NULL;
    } else { // insert
        new->prox = queue;
    }
    queue = new;
}

void dequeue() {
    Element *aux=queue, *prev=queue;
    while (aux->prox != NULL){
        prev = aux;
        aux = aux->prox;
    }
    prev->prox = NULL;
    free(aux);
}

int main() {
    stack = NULL;
    queue = NULL;

    push(1);
    push(2);
    push(3);
    push(4);
    writeStack();

    pop();
    writeStack();

    pop();
    pop();
    writeStack();

    printf("\n------------\n");

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    writeQueue();

    dequeue();
    writeQueue();

    dequeue();
    dequeue();
    writeQueue();

    return 0;
}
