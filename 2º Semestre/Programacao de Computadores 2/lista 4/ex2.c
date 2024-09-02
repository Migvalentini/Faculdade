// Fazer um programa que leia uma string e a partir desta gere uma nova duplicando cada caracter da string original. 
// Escreva a nova string. Por exemplo, para as strings abaixo, o programa deverá escrever:
// "OI" => "OOII"
// "PROVA 1" => "PPRROOVVAA 11"

#include <stdio.h>

void duplicaString(char str[100],char str2[100]) {
    int x,y=0;

    for(x=0; str[x]!='\0'; x++) {
        str2[y++]=str[x];
        str2[y++]=str[x];
    }
    str2[y]='\0';
}

int main() {
    char str1[100],str2[100];

    printf("Digite a string: ");
    gets(str1);

    duplicaString(str1,str2);

    printf("%s",str2);

    return 0;
}