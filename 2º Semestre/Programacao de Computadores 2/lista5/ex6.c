// Faça programa em C que recebe um string de até 1000 caracteres contendo um texto no qual as palavras são separadas pelo caractere '#' 
// que é seguido por um valor que identifica o número de espaços em brancos a serem inseridos pela função. 
// O programa deverá substituir o caracter '#' e o valor pelo número de espaços definidos.  
// Por exemplo, se o string original contém:
// Isto#4é#5uma#6pequena#1frase.
// após a chamada o string ficará:
// Isto    é     uma      pequena frase.

#include <stdio.h>
#include <string.h>

void insereEspacos(char str[1000], char str2[1000]) {
    int x,y,max=strlen(str)-1;

    for(x=0; x<=max; x++) {
        if(str[x]=='#'&&str[x+1]>'0'&&str[x+1]<'9') {
            y=max+(str[x+1]-'0'-2);
            printf("%d",y);
            while(y>=x) {
                //str2[y]=str[y-str[x+1]-'0'-2];
                //printf("%d",y-str[x+1]-'0'-2);
                y--;
            }
            break;
        } 
    }
    //str2[30]='\0';
}

int main() {
    //char str[1000] = "Isto#4eumapequenafrase";
    char str[1000] = "Isto#4e#5uma#6pequena#1frase";
    char str2[1000];

    insereEspacos(str,str2);

    // int a=strlen(str),x;

    printf("\n%s",str);
    printf("\n%s",str2);

    return 0;
}