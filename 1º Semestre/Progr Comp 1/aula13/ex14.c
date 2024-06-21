// Desenvolva um programa em C que solicite ao usuário informar 10 números inteiros e armazene estes números em um vetor de 10 posições. 
// Cada número corresponde à quantidade de amostras de um determinado item. 
// Após, o programa em C deverá colocar em um segundo vetor a porcentagem que a quantidade de cada amostra contida no primeiro vetor corresponde em relação ao total. 
// Exemplo: supondo que, após a leitura das quantidades, o primeiro vetor tenha os seguintes valores:
// 15, 67, 13, 96, 43, 99, 6, 78, 123, 7.
// O total de amostras será:
// 15 + 67 + 13 + 96 + 43 + 99 + 6 + 78 + 123 + 7 = 547.
// Assim, o conteúdo do segundo vetor será ser :
// 2.74, 12.24, 2.37, 17.55, 7.83, 18.09, 1.09, 14.25, 22.48, 1.27.

#include <stdio.h>

int main() {
    int x, vet[10], total=0;
    float porcentagem[10];

    for(x=0; x<10; x++) {
        printf("Digite vet[%d]: ",x); scanf("%d",&vet[x]);
    }

    for(x=0; x<10; x++) {
        total += vet[x];
    }

    printf("%d\n",total);

    for(x=0; x<10; x++) {
        porcentagem[x] = (float)(vet[x]*100)/total;
    }

    for(x=0; x<10; x++) {
        printf("%.2f ",porcentagem[x]);
    }

    return 0;
}
