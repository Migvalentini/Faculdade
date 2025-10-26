//3) Faça execuções de ordenação de dados para comparar as execuções dos dois métodos implementados:

//os métodos vão ordenar os dados em ordem crescente de valores;
//coloque contadores para o número de comparações e para o número de trocas realizadas, em cada método implementado;
//execute cada método implementado para ordenar um conjunto de 1000 números, em ordem aleatória 
//(use a função rand( ) ou similar para gerar os números aleatórios - use o mesmo conjunto de números para as duas execuções). 
//Exiba os contadores de trocas e de comparações;
//execute cada método implementado para ordenar um conjunto de 1000 números, em ordem decrescente de valores 
//(use a função rand( ) ou similar para gerar os números aleatórios - use o mesmo conjunto de números para as duas execuções). 
//Exiba os contadores de trocas e de comparações.

#include <stdio.h>
#include <stdlib.h>
#define N 30

struct elemento {
    int info;
    struct elemento *prox;
}; typedef struct elemento Elemento;

Elemento *inicio;

void bubblesortLista() {
    Elemento *aux = inicio, *aux2 = inicio;
    int troca = 0;
    int trocas = 0, comparacoes = 0;

    while (aux != NULL) {
        while (aux2 != NULL) {
            comparacoes++;
            if(aux->info > aux2->info) {
                trocas++;
                troca = aux->info;
                aux->info = aux2->info;
                aux2->info = troca;
            }

            aux2 = aux2->prox;
        }   
        aux = aux->prox;
        aux2 = aux;
    }
    printf("\n\nComparacoes: %d - Trocas: %d\n", comparacoes, trocas);
}

void insereLista(int numero) {
    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = numero;
    if(inicio == NULL) { //primeiro e único
        novo->prox = NULL;
    } else { // insere
        novo->prox = inicio;
    }
    inicio = novo;
}

void escreveLista() {
    Elemento *aux = inicio;
    
    printf("\nLista:\n");
    while(aux != NULL) {
        printf("%d ",aux->info);
        aux = aux->prox;
    }
}

void bubblesortVetor(int *vetor) {
    int i, aux, flag = 0, cont;
    int trocas = 0, comparacoes = 0;

    while(flag==0) {
        cont=0;
        for(i=0; i<N; i++) {
            comparacoes++;
            if(vetor[i] > vetor[i+1]) {
                trocas++;
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                cont++;
            }
        }
        if(cont==0) {
            flag=1;
        }
    }
    printf("\n\nComparacoes: %d - Trocas: %d\n", comparacoes, trocas);
}

void escreveVetor(int vetor[]) {
    printf("\nVetor:\n");
    int i;

    for(i=0; i<N; i++) {
        printf("%d ", vetor[i]);
    }
}

int main() {
    inicio = NULL;
    int i;

    for(i=1; i<N+1; i++) {
        insereLista(i);
    }

    escreveLista();

    bubblesortLista();

    escreveLista();

    ////////////////////////////

    int vetor[N];

    for(i=0; i<N; i++) {
        vetor[i] = N - i;
    }

    printf("\n---------------------------------\n");

    escreveVetor(vetor);

    bubblesortVetor(vetor);

    escreveVetor(vetor);

    return 0;
}


