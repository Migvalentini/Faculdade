// Fazer um programa que leia uma string e a partir desta gere uma nova contendo um espaço em branco entre cada caracter da string original. 
// Escreva a nova string. Por exemplo, para a string
// "LIVRO DE C"
// o programa deverá gerar a string:
// "L I V R O D E C"

#include <stdio.h>
#include <string.h>

void geraMatriz(char str[100], char str2[200]) {
    int x,y=0;

    for(x=0; str[x]!='\0'; x++) {
        if (str[x] != ' ') {
            str2[y++]=str[x];
            str2[y++] = ' ';
        }
    }
    str2[y-1]='\0';
}

int main() {
    char str[100],str2[200];

    printf("Digite a string: ");
    gets(str);

    geraMatriz(str,str2);

    printf("\n%s",str2);

    return 0;
}