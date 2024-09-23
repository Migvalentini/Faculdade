// Faça um programa que leia uma string e escreva o maior número existente na string, e a posição onde este começa. 
// Os números estão separados pelo caracter ‘#’. Por exemplo, para a string
// 10#20#191#7#34
// o programa deve escrever
// Numero: 191 

#include <stdio.h>

#define N 50

int retornaMaior(char str[N]) {
    int x,maior=0,num=0;

    for(x=0; str[x]!='\0'; x++) {
        if(str[x]>='0'&&str[x]<='9') {
            num=(num*10)+(str[x]-48);
        } else {
            if(num>maior) {
                maior=num;
            }
            num=0;
        }
    }

    if(num>maior) {
        return num;
    }

    return maior;
}

int main() {
    char str[N]="10#20#191#7#34";

    printf("Maior: %d",retornaMaior(str));

    return 0;
}