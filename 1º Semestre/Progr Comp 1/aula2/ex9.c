// Desenvolva um programa que solicite ao usuário informar três valores inteiros, respectivamente o primeiro termo de uma progressão aritmética (PA), o último termo da progressão e a razão desta progressão. 
// O computador deverá calcular e mostrar na tela a soma dos termos da PA. 
// Porém precisaremos antes de aplicarmos esta fórmula, teremos de descobrir o número de termos da PA, pois esta informação não foi digitada pelo usuário.
// Exemplo: se o usuário informar os valores 7 (primeiro termo), 31 (último termo) e 4 (razão), o programa deverá:
// calcular  o número de termos: (31-7)/4 = 6
// calcular a soma dos termos: (7+31)/2*6= 114
// mostrar na tela o resultado final, ou seja, 114.

#include <stdio.h>

int main() {
    int primeiro, ultimo, razao;

    printf("Digite o primeiro termo: ");
    scanf("%d", &primeiro);

    printf("Digite o ultimo termo: ");
    scanf("%d", &ultimo);

    printf("Digite a razao: ");
    scanf("%d", &razao);

    int somatermos = ((ultimo - primeiro) / razao) * ((primeiro + ultimo) / 2);

    printf("%d", somatermos);

    return 0;
}
