// O passaporte é o principal documento de identificação para viajar para o exterior. O número desse é formado por 2 letras maiúsculas e seis algarismos. 
// Fazer um programa na linguagem C que leia o número do passaporte em string, no formato LLDDDDDD, onde L é uma letra maiúscula e D é um dígito 
// e escreva o passaporte com numeração subsequente. 
// Caso o número for 999999, encontre o conjunto de letras subsequente.
// Exemplos:
// lê "AB123456" escreve: "AB123457" 
// lê "AB123459" escreve: "AB123460"
// lê "AB999999" escreve: "AC000000" 
// lê "AZ999999" escreve: "BA000000"
// lê "GZ999999" escreve: "HA000000"
// lê "ZZ999999" escreve: "AA000000"

#include <stdio.h>

void passaporteSubsequente(char passaporte[9]) {
    int x=7,vai=1;

    while(vai==1 && x>=2) {
        if(passaporte[x]<='8') {
            passaporte[x]+=1;
            vai=0;
        } else {
            passaporte[x]='0';
        }

        x--;
    }

    if(vai==1 && x==1) {
        if(passaporte[1]=='Z' && passaporte[0]!='Z') {
            passaporte[0]+=1;
            passaporte[1]='A';
        } else if(passaporte[1]=='Z' && passaporte[0]=='Z') {
            passaporte[0]='A';
            passaporte[1]='A';
        } else {
            passaporte[1]+=1;
        }
    }
}

int main() {
    char passaporte1[9]="AB123456";
    char passaporte2[9]="AB123459"; 
    char passaporte3[9]="AB999999";
    char passaporte4[9]="AZ999999"; 
    char passaporte5[9]="GZ999999"; 
    char passaporte6[9]="ZZ999999"; 

    printf("\n%s",passaporte1); passaporteSubsequente(passaporte1); printf(" -> %s",passaporte1);
    printf("\n%s",passaporte2); passaporteSubsequente(passaporte2); printf(" -> %s",passaporte2);
    printf("\n%s",passaporte3); passaporteSubsequente(passaporte3); printf(" -> %s",passaporte3);
    printf("\n%s",passaporte4); passaporteSubsequente(passaporte4); printf(" -> %s",passaporte4);
    printf("\n%s",passaporte5); passaporteSubsequente(passaporte5); printf(" -> %s",passaporte5);
    printf("\n%s",passaporte6); passaporteSubsequente(passaporte6); printf(" -> %s",passaporte6);

    return 0;
}