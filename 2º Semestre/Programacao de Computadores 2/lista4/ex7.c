// Escreva uma função em C com o seguinte protótipo
// int int2str(int n, char str[])
// que receba um número inteiro positivo e armazene os dígitos do mesmo em uma string recebida por parâmetro.

#include <stdio.h>

void int2str(int n, char str[100]) {
    int x=0,y,tam;
    char aux;

    while(n>0) {
        str[x]=(n%10)+48;
        n/=10;
        x++;
    }
    str[x]='\0';

    tam=x-1;

    for(x=0,y=tam; x<y; x++,y--) {
        aux=str[x];
        str[x]=str[y];
        str[y]=aux;
    }
}

int main() {
    int n;
    char str[100];

    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&n);

    int2str(n,str);

    printf("%s",str);

    return 0;
}