// Desenvolva um algoritmo que solicite ao usuário digitar dois números inteiros. 
// O algoritmo deverá verificar entre estes dois valores qual é o maior e mostrar na tela o maior valor. 
// Se dois valores iguais forem digitados, o algoritmo deverá mostrar a mensagem que dois números iguais foram mostrados. 
// Exemplo: se o usuário informar os números 15 e 43, deverá ser mostrado na tela a mensagem “Maior valor: 43”.  
// Se o usuário informar os números 15 e 15, deverá ser mostrado na tela a mensagem “Dois números iguais foram informados”. 

#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite 2 numeros inteiros: ");
    scanf("%d %d",&n1,&n2);

    if (n1>n2) {
        printf("O numero %d eh maior", n1);
    }
    else {
        if (n2>n1) {
            printf("O numero %d eh maior", n2);
        }
        else {
            printf("Os numeros sao iguais");
        }
    }

    return 0;
}
