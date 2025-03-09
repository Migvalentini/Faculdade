//Crie uma função que receba uma string e retorne o número de vogais.

#include <stdio.h>
#include <ctype.h>

int somaVogais(char string[]) {
    int x, vogais=0; 

    for(x=0; string[x]!='\0'; x++) {
        char c = tolower(string[x]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }
    }

    return vogais;
}

int main() {
    char string[] = "Teste de Contagem de Vogais";

    printf("Soma de vogais: %d", somaVogais(string));
}