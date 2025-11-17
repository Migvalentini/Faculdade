//Faça um algoritmo que leia uma expressão armazenada em uma árvore binária,
//escrevendo-a na sua forma normal totalmente parentizada (considere que cada subexpressão é composta de dois operandos e um operador). 
//Exemplo: (5+(3*4)) ou ((5+3)*4).

#include <stdio.h>
#include <stdlib.h>

typedef struct noA {
    char info;
    struct noA *esq;
    struct noA *dir;
} TNoA;

void central(TNoA* a) {
    if (a != NULL) {
        central(a->esq);
        printf("%c ",a->info);
        central(a->dir);
    }
}

void escreveParentizada(TNoA *a) {
    if (a == NULL) return;

    // Nó folha = operando (número ou variável)
    if (a->esq == NULL && a->dir == NULL) {
        printf("%c", a->info);
        return;
    }

    // Expressão: (E op D)
    printf("(");
    escreveParentizada(a->esq);
    printf("%c", a->info);
    escreveParentizada(a->dir);
    printf(")");
}

TNoA *criaNo(char ch) {
    TNoA *novo;

    novo = (TNoA *) malloc(sizeof(TNoA));
    novo->info = ch;
    novo->esq = NULL;
    novo->dir = NULL;

    return novo;
}

int main(void) {
    TNoA *raiz;
    raiz = criaNo('+');
    raiz->esq = criaNo('5');
    raiz->dir = criaNo('*');
    raiz->dir->esq = criaNo('3');
    raiz->dir->dir = criaNo('4');

    printf("\nCentral: \n");
    central(raiz);
    
    printf("\nParentizada: \n");
    escreveParentizada(raiz);
};
