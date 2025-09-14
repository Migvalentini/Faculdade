//Desenvolva uma programa que leia um texto, e escreva as palavras do texto em ordem invertida. 
//Use uma pilha, e considere que os separadores de palavras são espaços em branco (se quiser considere também outros separadores, como : , ; . ! etc)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 20

struct element {
    char word[N];
    struct element *prox;
}; typedef struct element Element;

Element *stack;

void writeStack() {
    Element *aux = stack;
    
    printf("\nStack:\n");
    while(aux != NULL) {
        printf("%s\n", aux->word);
        aux = aux->prox;
    }
}

void push(char newWord[N]) {
    Element *new;
    new = (Element*)malloc(sizeof(Element));
    strcpy(new->word, newWord);
    if(stack == NULL) { //first and unique
        new->prox = NULL;
    } else { // insere
        new->prox = stack;
    }
    stack = new;
}

int main() {
    stack = NULL;
    char text[N];
    char word[N];
    int i = 0, j = 0, k;

    printf("Write the text: ");
    fgets(text, N, stdin);

    for (k = 0; text[k] != '\0'; k++) {
        if (text[k] == '\n') {
            text[k] = '\0';
            break;
        }
    }

    while(text[i] != '\0') {
        if(text[i] == ' ') {
            push(word);
            j = 0;
        } else {
            word[j++] = text[i];
            word[j] = '\0';
        }
        i++;
    }
    push(word);

    writeStack();

    return 0;
}
