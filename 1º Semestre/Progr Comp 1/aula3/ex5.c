// Desenvolva um programa que solicite ao usuário digitar seis números inteiros. 
// O programa deverá contar e mostrar na tela a quantidade de valores ímpares informados. 
// Exemplo: se o usuário informar os números 21, 15, 43, 34, -7 e 120 deverá ser mostrado na tela a mensagem  “Foram informados  4 números ímpares.”

#include <stdio.h>

int main() {
    int n1,n2,n3,n4,n5,n6,cont=0;

    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
    printf("Digite o segundo numero: ");
    scanf("%d",&n2);
    printf("Digite o terceiro numero: ");
    scanf("%d",&n3);
    printf("Digite o quarto numero: ");
    scanf("%d",&n4);
    printf("Digite o quinto numero: ");
    scanf("%d",&n5);
    printf("Digite o sexto numero: ");
    scanf("%d",&n6);

    if (n1%2==1) {
        cont=cont+1;
    }
    if (n2%2==1) {
        cont=cont+1;
    }
    if (n3%2==1) {
        cont=cont+1;
    }
    if (n4%2==1) {
        cont=cont+1;
    }
    if (n5%2==1) {
        cont=cont+1;
    }
    if (n6%2==1) {
        cont=cont+1;
    }

    printf("A quantidade de numeros impares eh: %d",cont);

    return 0;   
}
