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
    
    while(aux != NULL) {
        printf("%c",aux->c);
        aux = aux->prox;
    }
}

void insere(char n) {
    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->c = n;
    if(inicio == NULL) { //primeiro e único
        novo->prox = NULL;
        novo->ant = NULL;
        inicio = novo;
    } else { // insere
        novo->c = n;
        novo->ant = NULL;
        novo->prox = inicio;
        inicio->ant = novo;
        inicio = novo;
    }
}

void verificaPalindrome() {
    Elemento *primeiro = inicio, *ultimo = inicio;
    int num = 1, i, palindrome = 1;

    while(ultimo->prox != NULL) {
        ultimo = ultimo->prox;
        num++;
    }

    for(i = 0; i < num / 2; i++) {
        if(primeiro->c != ultimo->c) {
            palindrome = 0;
        }
        primeiro = primeiro->prox;
        ultimo = ultimo->ant;
    }

    if (palindrome == 1) {
        printf("\nEh palindrome");
    }
    else {
        printf("\nNao eh palindrome");
    }
}

int main() {
    inicio = NULL;

    insere('o');
    insere('v');
    insere('o');

    escreve();
    verificaPalindrome();

    return 0;
}
