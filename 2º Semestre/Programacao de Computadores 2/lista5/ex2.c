// Escreva uma função em C com o seguinte protótipo
// int chrtimes(const char str1[], const char ch)
// A função recebe um string e um caractere e retorna o número de ocorrências da letra correspondente ao caractere no string. Por exemplo, a chamada
// chrtimes("paranapanema", 'a')
// retorna 5 (observe que as letras maiúsculas e minúsculas tem códigos ASCII diferenciados).

#include <stdio.h>

int chrtimes(char str[100], char ch) {
    int x,n=0;

    for(x=0; str[x]!='\0'; x++) {
        if(str[x]==ch) {
            n++;
        }
    }

    return n;
}

int main() {
    char str[100];
    char c;

    printf("Digite uma string: ");
    gets(str);
    printf("Digite um caracter: ");
    scanf("%c",&c);

    printf("%d",chrtimes(str,c));

    return 0;
}