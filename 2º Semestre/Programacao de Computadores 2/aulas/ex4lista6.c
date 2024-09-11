// ex4 lista 6:
// Faça um programa que leia uma string deverá escrever o maior número existente na string, e a posição onde este começa. Os números estão separados pelo caracter ‘#’. 
// Por exemplo, para a string
// 10#20#191#7#34
// o programa deve escrever
// Numero: 191 


#include <stdio.h>

int retornaMaior(char str[100]) {
    int i,n=0,maior=0;

    for(i=0; str[i]!='\0';i++) {
        if(str[i]>='0'&&str[i]<='9') {
            n=n*10+(str[i]-48);
        } else {
            if(n>maior) {
                maior=n;
            }
            n=0;
        }
    }

    return n > maior ? n : maior;
}

int main() {
    char str[100] = "10#20#191#7#34";
    printf("%d",retornaMaior(str));
    
    return 0;
}
