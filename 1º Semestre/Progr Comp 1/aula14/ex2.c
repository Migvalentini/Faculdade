// Desenvolva um programa em C que solicite ao usuário informar 10 números inteiros e armazene estes números em um vetor de 10 posições.
// Após leia mais 10 números inteiros e armazene em um segundo vetor de 10 posições.
// Crie, a seguir, um terceiro vetor que seja a intersecção dos dois vetores.
// O vetor intersecção  deve possuir os elementos que estão nos dois vetores, mas não deve possuir valores duplicados.
// No final, os três vetores devem ser mostrados na tela.
// Exemplo:
// 1º Vetor    3  5  4  2  1  6  8  7  11  9
// 2º Vetor    2  1  5  12  3  0  -1  4  7  6
// Intersecção 3  5  4  2  1  6  7

#include <stdio.h>

int main() {
    int x, y, vet1[10], vet2[10], interseccao[10], existe, tem, ultimo=0;

    for(x=0; x<10; x++) {
        printf("Digite vet1[%d]: ",x);
        scanf("%d",&vet1[x]);
    }

    for(x=0; x<10; x++) {
        printf("Digite vet2[%d]: ",x);
        scanf("%d",&vet2[x]);
    }

    for(x=0; x<10; x++) {
        existe=0;
        for(y=0; y<10; y++) {
            if(vet1[x] == vet2[y]) {
                existe=1;
                break;
            }
        }
      if(existe==1) {
        tem=0;
        for(y=0; y<ultimo; y++) {
            if(vet1[x] == interseccao[y]) {
                tem=1;
                break;
            }
        }
        if(tem==0) {
            interseccao[ultimo]=vet1[x];
            ultimo++;
        }
      }
    }

    printf("Vetor 1:\n");
    for(x=0; x<10; x++) {
        printf("Vet1[%d] = %d\n",x, vet1[x]);
    }

    printf("Vetor 2:\n");
    for(x=0; x<10; x++) {
        printf("Vet2[%d] = %d\n",x, vet2[x]);
    }

    printf("Interseccao:\n");
    for(x=0; x<ultimo; x++) {
        printf("Interseccao[%d] = %d\n",x, interseccao[x]);
    }

    return 0;
}
