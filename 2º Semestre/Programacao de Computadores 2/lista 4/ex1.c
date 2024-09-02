// Fazer um programa que leia uma letra (L) e um número (N), a seguir gere uma string contendo N letras L.

#include <stdio.h>

int main() {
    char L;
    int N,x;

    printf("Digite uma letra: ");
    fflush(stdin);
    scanf("%c",&L);

    printf("Digite um numero: ");
    scanf("%d",&N);

    char string[N];

    for(x=0; x<N; x++) {
        string[x]=L;
    }
    string[x]='\0';

    printf("String: %s",string);

    return 0;
}