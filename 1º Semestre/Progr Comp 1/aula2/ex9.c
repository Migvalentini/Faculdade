#include <stdio.h>;

main() {
    int primeiro, ultimo, razao;

    printf("Digite o primeiro termo: ");
    scanf("%d", &primeiro);

    printf("Digite o ultimo termo: ");
    scanf("%d", &ultimo);

    printf("Digite a razao: ");
    scanf("%d", &razao);

    int somatermos = ((ultimo - primeiro) / razao) * ((primeiro + ultimo) / 2);

    printf("%d", somatermos);
}