#include <stdio.h>
#include <stdlib.h>

typedef struct noA{
    char info;
    struct noA *esq;
    struct noA *dir;
} TNoA;

TNoA *criaNo(char ch) {
    TNoA *novo;
    novo = (TNoA *) malloc(sizeof(TNoA));
    novo->info = ch;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

void preordem(TNoA* a){
    if (a!= NULL){
        printf("%c\n",a->info);
        preordem(a->esq);
        preordem(a->dir);
    }
}


int main(void) {
    TNoA *raiz;
    raiz = criaNo('A');
    raiz->esq = criaNo('B');
    raiz->dir = criaNo('C');
    raiz->dir->esq = criaNo('D');
    raiz->dir->dir = criaNo('E');

    preordem(raiz);

};
