// Escreva uma função em C com o seguinte protótipo
// int numchrtimes(const char str1[])
// A função recebe um string e retorna o número de ocorrências de caracteres numéricos no string. Por exemplo, a chamada
// numchrtimes("alfa1 bravo2 charlie 5")
// retorna 3.

#include <stdio.h>

int numchrtimes(char str[100]) {
    int x,n=0;

    for(x=0; str[x]!='\0'; x++) {
        if(str[x]>=48&&str[x]<=57) {
            n++;
        }
    }

    return n;
}

int main() {
    char str[100];

    printf("Digite a string: ");
    gets(str);

    printf("%d",numchrtimes(str));

    return 0;
}