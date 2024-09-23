// Escreva uma função em C com o seguinte protótipo
// int int2hex(int n, char str[])
// que receba um número inteiro positivo e armazene o número convertido para hexadecimal em uma string recebida por parâmetro.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define N 50

void int2hex(int n, char str[N]) {
    int x=0,y,tam,aux;

    while(n>0) {
        if(n%16<10) {
            str[x]=(n%16)+48;
            x++;
        } else {
            str[x]=(n%16)+55;
            x++;
        }
        n/=16;

    }
    str[x]='\0';

    tam=strlen(str)-1;

    for(x=0, y=tam; x<y; x++, y--) {
        aux=str[x];
        str[x]=str[y];
        str[y]=aux;
    }
}

int main() {
    char str[N];

    int2hex(10995,str);
    printf("%s",str);
}