// Faça uma função, chamada somaDigitos() que receba uma string como parâmetro e retorne a soma dos dígitos que estão em uma string. 
// Caracteres que não são dígitos devem ser desconsiderados. 
// A seguir, alguns exemplos de chamadas da função e o respectivo valor a ser retornado pela função são apresentados:
// somaDigitos(“abcde”) deve retornar 0
// somaDigitos(“1234”) deve retornar 10 
// somaDigitos(“a36]8”) deve retornar 17
// somaDigitos(“”) deve retornar 0

#include <stdio.h>

#define N 50

int somaDigitos(char str[N]) {
    int x,soma=0;

    for(x=0; str[x]!='\0'; x++) {
        if(str[x]>='0' && str[x]<='9') {
            soma+=str[x]-'0';
        }
    }

    return soma;
}

int main() {
    printf("%d\n",somaDigitos("abcde")); //deve retornar 0
    printf("%d\n",somaDigitos("1234")); // deve retornar 10 
    printf("%d\n",somaDigitos("a36]8")); // deve retornar 17
    printf("%d",somaDigitos("")); // deve retornar 0

    return 0;
}