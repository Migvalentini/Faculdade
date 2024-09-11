// Escreva uma função em C com o seguinte protótipo
// int str2int(const char str[])
// que receba uma string com um número válido, após converta o número lido para decimal, armazenando-o em uma variável inteira e a retorne.

#include <stdio.h>

int str2int(char str[100]) {
    int x,n=0;

    for(x=0; str[x]!='\0'; x++) {
        if(str[x]>=48&&str[x]<=57) {
            n=(n*10)+str[x]-48;
        }
    }

    return n;
}

int main() {
    char str[100];

    printf("Digite uma string em um numero valido: ");
    gets(str);

    printf("Numero: %d",str2int(str));

    return 0;
}