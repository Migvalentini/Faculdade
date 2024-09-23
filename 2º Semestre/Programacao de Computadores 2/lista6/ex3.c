// Implemente um programa que leia uma string com o nome de um indivíduo e gere uma outra string formada apenas pelo sobrenome.
// Exemplos:
// João Paulo da Silva   -> Silva
// Luis Fernando Tavares -> Tavares

#include <stdio.h>
#include <string.h>

#define N 50

void geraSobrenome(char nomeCompleto[N], char sobrenome[N]) {
    int x,y,tam=strlen(nomeCompleto);
    char aux;

    for(x=tam-1, y=0; nomeCompleto[x]!=' '; x--, y++) {
        sobrenome[y]=nomeCompleto[x];
    }
    sobrenome[y]='\0';

    tam=strlen(sobrenome);

    for(x=0, y=tam-1; x<y; x++, y--) {
        aux=sobrenome[x];
        sobrenome[x]=sobrenome[y];
        sobrenome[y]=aux;
    }
}

int main() {
    char nomeCompleto[N],sobrenome[N];

    printf("Digite o nome completo do individuo: ");
    gets(nomeCompleto);

    geraSobrenome(nomeCompleto,sobrenome);
    printf("Sobrenome: %s",sobrenome);

    return 0;
}