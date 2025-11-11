//Implementar uma árvore binária  que armazena números inteiros. Fazer a operação de inserção e também:
//4) Implementar uma operação que escreva quantos níveis tem a árvore binária.

#include <stdio.h>
#include <stdlib.h>

typedef struct noA {
    int info;
    struct noA *esq;
    struct noA *dir;
} TNoA;

void preordem(TNoA* a) {
    if (a != NULL) {
        printf("%d ",a->info);
        preordem(a->esq);
        preordem(a->dir);
    }
}

void somaNiveis(TNoA* a, int nivel, int *maiornivel) {
    if (a != NULL) {
        int proxNivel = nivel + 1;
        if (proxNivel > *maiornivel) {
            *maiornivel = proxNivel;
        }

        somaNiveis(a->esq, proxNivel, maiornivel);
        somaNiveis(a->dir, proxNivel, maiornivel);
    }
}

TNoA *criaNo(int ch) {
    TNoA *novo;

    novo = (TNoA *) malloc(sizeof(TNoA));
    novo->info = ch;
    novo->esq = NULL;
    novo->dir = NULL;

    return novo;
}

int main(void) {
    TNoA *raiz;
    raiz = criaNo(37);
    raiz->esq = criaNo(24);
    raiz->esq->esq = criaNo(7);
    raiz->esq->dir = criaNo(32);
    raiz->esq->dir->dir = criaNo(120);

    raiz->dir = criaNo(42);
    raiz->dir->esq = criaNo(40);
    raiz->dir->dir = criaNo(47);

    printf("Pre Ordem: \n");
    preordem(raiz);

    int maiornivel = 0;
    somaNiveis(raiz, 0, &maiornivel);

    printf("\nA arvore tem %d niveis", maiornivel);
};