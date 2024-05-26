// Desenvolva um programa que solicite ao usuário digitar um número inteiro. 
// Após a digitação, o computador deverá mostrar na tela uma mensagem informando se o número é par ou ímpar. 
// O número par é o número que dividido por 2 resulta resto zero. 
// O número ímpar é o número que dividido por 2 resulta resto um.  
// Considere que o usuário não digitará o número zero, pois o número zero não é um número para e nem um número ímpar.
// Exemplo: se o usuário informar o número 98, deverá ser mostrado na tela a mensagem “98 é um número par”.  
// Se o usuário informar o número 37, deverá ser mostrado na tela a mensagem “37 é um número ímpar”.

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    printf("%d\n", num);

    if (num%2==0)
    {
        printf("O numero %d eh par", num);
    } 
    else 
    {   
        printf("O numero %d eh impar", num); 
    } 
    
    return 0;
}
