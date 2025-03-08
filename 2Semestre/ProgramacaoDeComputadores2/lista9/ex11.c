// Desenvolva uma função em C que receba um vetor de inteiros e retorne o número que mais aparece no vetor e quantas vezes ele aparece. 
// Se houver dois elementos que aparecem o mesmo número de vezes, a função deverá retornar o maior deles.
// A função implementada deverá obrigatoriamente seguir o protótipo que é definido abaixo.
// void mais_vezes(int *vet, int n, int *valor, int *vezes)

#include <stdio.h>
#include <stdlib.h>

void maisVezes(int *vet, int n, int *valor, int *vezes) {
    int x,y,k=1,esta;

    *valor=vet[0];
    *vezes=1;

    int val[n];
    val[0]=vet[0];
    int vez[n];

    for(x=0; x<n; x++) { vez[x]=1; }

    for(x=1; x<n; x++) {
        for(y=0; y<k; y++) {
            esta=0;
            if(vet[x]==val[y]) {
                esta=1;
                vez[y]++;
                break;
            }
        }
        if(!esta) {
            val[k++]=vet[x];
        }
    }

    printf("\nVetor: ");

    for(x=0; x<n; x++) {
        printf("%d ",vet[x]);
    }

    for(x=0; x<k; x++) {
        if(vez[x]>*vezes) {
            *valor=val[x];
            *vezes=vez[x];
        } 
        else if(vez[x]==*vezes && val[x]>*valor) {
            *valor=val[x];
            *vezes=vez[x];
        }
    }
}

int main() {
    int vet1[5] = {1, 2, 3, 4, 5};  
    int vet2[6] = {1, 2, 2, 3, 2, 4};
    int vet3[5] = {4, 4, 6, 6, 2}; 
    int vet4[1] = {7};  
    int vet5[4] = {5, 5, 5, 5};  
    int vet6[6] = {-1, -2, -2, 3, 3, 3};
    int valor, vezes;

    maisVezes(vet1,5,&valor,&vezes); // Saída esperada: valor = 5, vezes = 1
    printf("\nValor: %d Vezes: %d\n",valor,vezes);
    maisVezes(vet2,6,&valor,&vezes); // Saída esperada: valor = 2, vezes = 3
    printf("\nValor: %d Vezes: %d\n",valor,vezes);
    maisVezes(vet3,5,&valor,&vezes); // Saída esperada: valor = 6, vezes = 2
    printf("\nValor: %d Vezes: %d\n",valor,vezes);
    maisVezes(vet4,1,&valor,&vezes); // Saída esperada: valor = 7, vezes = 1
    printf("\nValor: %d Vezes: %d\n",valor,vezes);
    maisVezes(vet5,4,&valor,&vezes); // Saída esperada: valor = 5, vezes = 4
    printf("\nValor: %d Vezes: %d\n",valor,vezes);
    maisVezes(vet6,6,&valor,&vezes); // Saída esperada: valor = 3, vezes = 3
    printf("\nValor: %d Vezes: %d\n",valor,vezes);
}