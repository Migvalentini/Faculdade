//Uma palíndrome é um texto (ou palavra) que pode ser lido da esquerda para a direita ou da direita para a esquerda, 
//produzindo o mesmo resultado (ou o mesmo texto). Por exemplo: "arara", "amor e roma", "ele", "1234554321". 

//Considere que um texto está armazenado em uma lista duplamente encadeada, na qual cada nodo contém um caractere. 
//Implemente uma função (em C, C#, C++, Java, Python) que verifique se o texto armazenado é uma palíndrome ou não, 
//retornando 0 se o texto não for palíndrome e 1 se for palíndrome.

#include <stdio.h>
#include <stdlib.h>

struct elemento {
    char c;
    struct elemento *prox, *ant;
}; typedef struct elemento Elemento;

Elemento *inicio;

void escreve() {
    Elemento *aux = inicio;
    
    printf("\nLista:\n");
    while(aux != NULL) {
        printf("%c\n",aux->c);
        aux = aux->prox;
    }
}

void insere(char n) {
    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->c = n;
    if(inicio == NULL) { //primeiro e único
        novo->prox = NULL;
    } else { // insere
        novo->prox = inicio;
    }
    inicio = novo;
}

int main() {
    inicio = NULL;

    insere('a');
    insere('b');
    insere('c');

    escreve();

    return 0;
}
