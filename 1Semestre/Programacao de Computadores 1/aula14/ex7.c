//Desenvolva um programa em C que leia um vetor X(10) e ordene seus elementos em ordem crescente. Escreva o vetor ordenado. 

#include <stdio.h>

int main() {
    int x, vet[10], flag=0, aux,cont ;

    for(x=0; x<10; x++) {
        printf("Digite vet[%d]: ",x);
        scanf("%d",&vet[x]);
    }

    while(flag==0) {
        cont=0;
        for(x=0; x<9; x++) {
            if(vet[x] > vet[x+1]) {
                aux = vet[x];
                vet[x] = vet[x+1];
                vet[x+1] = aux;
                cont++;
            }
        }
        if(cont==0) {
            flag=1;
        }
    }

    printf("Vetor Final:\n");
    for(x=0; x<10; x++) {
        printf("Vet[%d]: %d\n", x, vet[x]);
    }

    return 0;
}
