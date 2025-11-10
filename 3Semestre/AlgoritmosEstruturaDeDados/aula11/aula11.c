#include <stdio.h>
#include <stdlib.h>

typedef struct noA {
    char info;
    struct noA *esq;
    struct noA *dir;
} TNoA;

void posOrdem(TNoA* a) {
  if (a != NULL){
      posOrdem(a->esq);
      posOrdem(a->dir);
      printf("%c ",a->info);
  }
}

void central(TNoA* a) {
  if (a != NULL) {
      central(a->esq);
      printf("%c ",a->info);
      central(a->dir);
  }
}

void preordem(TNoA* a) {
  if (a != NULL) {
      printf("%c ",a->info);
      preordem(a->esq);
      preordem(a->dir);
  }
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
  raiz = criaNo('A');
  raiz->esq = criaNo('B');
  raiz->esq->esq = criaNo('D');
  raiz->esq->dir = criaNo('E');

  raiz->dir = criaNo('C');
  raiz->dir->esq = criaNo('F');
  raiz->dir->dir = criaNo('G');

  printf("Pre Ordem: \n");
  preordem(raiz);

  printf("\nCentral: \n");
  central(raiz);

  printf("\nPos Ordem: \n");
  posOrdem(raiz);
};