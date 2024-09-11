// Faça programa em C que recebe um string de até 1000 caracteres contendo um texto no qual as palavras são separadas pelo caractere '#' 
// que é seguido por um valor que identifica o número de espaços em brancos a serem inseridos pela função. 
// O programa deverá substituir o caracter '#' e o valor pelo número de espaços definidos.  
// Por exemplo, se o string original contém:
// Isto#4é#5uma#6pequena#1frase.
// após a chamada o string ficará:
// Isto    é     uma      pequena frase.

#include <stdio.h>

void insereEspacos(char str[1000]) {
    int x,y,max=strlen(str)-1;

    for(x=0; str[x]!='\0'; x++) {
        if(str[x]=='#') {
            max++;
            printf("X = %d\n",x);
            for(y=max; y>x; y--) {
                printf("%c %c\n",str[y],str[y-1]);
                str[y]=str[y-1];
            }
            str[x]=' ';
            printf("\n");
        }
    }
}

int main() {
    char str[1000] = "Isto#4eumapequenafrase";
    //char str[1000] = "Isto#4e#5uma#6pequena#1frase";

    insereEspacos(str);

    // int a=strlen(str),x;

    // for(x=a; x>0; x--) {
    //     printf("%d ",x);
    //     str[x]=str[x-1];
    // }
    // str[x]=' ';

    printf("\n%s",str);

    return 0;
}