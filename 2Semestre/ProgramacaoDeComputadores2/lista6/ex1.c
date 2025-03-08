// Faça um programa que leia uma string e determine o percentual de frequência de vogais no texto. 
// Por exemplo, para a string programacaodecomputadoresII
// o percentual de vogais é 48.1481%. Considere vogais em maiúsculo ou minúsculo e escreva o resultado usando uma precisão de quatro casas decimais.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 50

float percentualVogais(char str[N]) {
    int x,vogais=0,tam=strlen(str);

    for(x=0; x<N; x++) {
        if(toupper(str[x])=='A'||toupper(str[x])=='E'||toupper(str[x])=='I'||toupper(str[x])=='O'||toupper(str[x])=='U') {
            vogais++;
        }
    }

    return (float)(vogais*100)/tam;
}

int main() {
    char str[N]="programacaodecomputadoresII";

    printf("%.4f",percentualVogais(str));

    return 0;
}