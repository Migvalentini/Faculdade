// Escreva uma função em C com o seguinte protótipo:
// void int2bin(int n, char str[])
// A função recebe um número inteiro sem sinal e coloca em um string a representação do número em binário. 
// A obtenção da representação em binário de um número é feita através de divisões (inteira) sucessivas do número por 2. 
// O resto de cada divisão fornece os dígitos binários

#include <stdio.h>

void int2bin(int n, char str[100]) {
    int x=0,y,tam;
    char aux;

    while(n>0) {
        str[x++]=(n%2)+48;
        n/=2;
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

    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    int2bin(n,str);

    printf("%s",str);

    return 0;
}