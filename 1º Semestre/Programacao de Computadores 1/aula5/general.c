// Desenvolva um programa que solicite ao usuário digitar cinco números inteiros com valores entre 1 e 6, correspondente ao arremesso de 5 dados no jogo do general. 
// O programa deverá escrever na tela mensagens para indicar: 
// - Se os 5 valores são iguais
// - Se há 4 valores iguais e um diferente
// - Se os 5 valores formam uma sequência (1,2,3,4,5 ou 2,3,4,5,6)
// - Se os valores formam um full-hand (3 valores iguais entre si, e os outros dois valores também iguais entre si)
// - Nenhuma das combinações acima
// Observação: considere que o usuário sempre informará valores entre 1 e 6 e que os dados estarão em ordem crescente. Não precisa realizar a conferência do valor informado.

#include <stdio.h>

int main() {
    int a, b, c, d, e;

    printf("Digite cinco numeros inteiros entre 1 e 6, correspondentes ao arremesso de 5 dados no jogo do general, em ordem crescente:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if (a == b && b == c && c == d && d == e) 
        printf("Os 5 valores sao iguais.\n");
    else if ((a == b && b == c && c == d) || (b == c && c == d && d == e))
        printf("Ha 4 valores iguais e um diferente.\n");
    else if ((b == a + 1) && (c == b + 1) && (d == c + 1) && (e == d + 1))
        printf("Os valores formam uma sequencia.\n");
    else if ((a == b && ((c == d && d == e) || (b == c && d == e))) || (d == e && a == b && b == c))
        printf("Os valores formam um full-hand.\n");
    else
        printf("Nenhuma das combinacoes acima.\n");

    return 0;
}
