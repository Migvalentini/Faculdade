/*
implementar uma lista de 10 elementos através de um vetor (array) de tamanho 10. 
Cada elemento é composto de número e nome (usar struct para definir o elemento em C, em Java usar classe).

implementar a operação para inverter a lista (não apenas escrever invertido) .
implementar a operação de inserção no início da lista.
implementar a operação de inserção ordenada (ordenação pelo número) - inserção de um elemento por vez)
implementar, de forma recursiva, a operação para escrever a lista.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5

typedef struct lista
{
    int num;
    char nome[20];
} LISTA;

void inserefim(LISTA v[], int *t) {
    if(*t < N-1) {
        printf("Numero: ");
        scanf("%d", &(v[*t].num));
        printf("Nome: ");
        scanf("%s", v[*t].nome);
        (*t)++;
    }
}

void insereordenado(LISTA v[], int *t) {
    LISTA aux;
    if(*t < N-1) {
        printf("Numero: ");
        scanf("%d", &(v[*t].num));
        printf("Nome: ");
        scanf("%s", v[*t].nome);
        (*t)++;
    }
    int x = *t;
    while(v[x].num<v[x-1].num) {
        aux=v[x];
        v[x]=v[x-1];
        v[x-1]=aux;
        x--;
    }
}

void insereinicio(LISTA v[], int *t) {
    int x;
    for(x=*t-1; x>=0; x--) {
        v[x+1]=v[x];
    }

    if(*t < N-1) {
        printf("Numero: ");
        scanf("%d", &(v[0].num));
        printf("Nome: ");
        scanf("%s", v[0].nome);
        (*t)++;
    }
}

void escreveLista(LISTA v[], int t, int i) {
    if(t==i) {
        return;
    } 
    printf("\nNumero: %d - %s", v[i].num, v[i].nome);
    escreveLista(v, t, i+1);
}

void inverterLista(LISTA v[], int t) {
    int x=0;
    LISTA aux;
    for(x=0; x<t; x++, t--) {
        aux = v[x];
        v[x] = v[t-1];
        v[t-1] = aux;
    }
}

int main() {
    LISTA lst[N];
    int tam = 0;

    inserefim(lst, &tam);
    inserefim(lst, &tam);
    inserefim(lst, &tam);
    //insereinicio(lst, &tam);
    insereordenado(lst, &tam);
    escreveLista(lst, tam, 0);
    printf("\n");
    inverterLista(lst, tam);
    //escreveLista(lst, tam, 0);

    return 0;
}
