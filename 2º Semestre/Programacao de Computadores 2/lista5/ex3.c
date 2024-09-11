// O algoritmo das pontas de criptografia recebe uma string como argumento e produz uma outra string como resultado, 
// e pode ser descrito da seguinte forma: enquanto a string de entrada contiver caracteres, remova o primeiro e o último caracteres da string de entrada e os coloque na string de saída. 
// Dessa forma, se a string “Programação em Java” for entrada no algoritmo, este mostrará como saída a string “ParvoagJr ammea çoã”. 
// Desenvolva um programa para decodificar uma string usando esse algoritmo.

#include <stdio.h>

void decodifica(char str1[100], char str2[100]) {
    int x,i=0,f=strlen(str1)-1;

    for(x=0; str1[x]!='\0'; ) {
        str2[i++]=str1[x++];
        if(str1[x]!='\0') {
            str2[f--]=str1[x++];
        }
    }
    str2[strlen(str1)]='\0';
}

int main() {
    char str1[100] = "ParvoagJr ammea coa", str2[100];

    printf("Digite uma string: ");
    gets(str1);

    decodifica(str1,str2);

    printf("%s",str2);

    return 0;
}