// Escreva uma função em C com o seguinte protótipo
// int palindromo(const char str[])
// A função deverá retornar 1 caso a string  for palíndromo e 0  caso contrário.  São exemplos de strings palíndromos:
// ARARA
// ovo

#include <stdio.h>
#include <ctype.h>

int palindromo(char str[100]) {
    int x,y,tam=strlen(str)-1;

    for(x=0,y=tam; x<y; x++,y--) {
        if(str[x]!=str[y]) {
            return 0;
        }

    }
    return 1;
}

int main() {
    char str[100];

    printf("Digite a string: ");
    gets(str);

    printf("%d",palindromo(str));

    return 0;
}