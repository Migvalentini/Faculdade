// Idem ao anterior, mas sem distinção de maiúsculas e minúsculas. Por exemplo, a função deverá retornar 1 para as strings: 
// Arara
// Ovo
// OsSo

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int palindromo(char str[100]) {
    int x,y,tam=strlen(str)-1;

    for(x=0,y=tam; x<y; x++,y--) {
        if(toupper(str[x])!=toupper(str[y])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];

    printf("Digite a string: ");
    gets(str);

    printf("%d",palindromo(str));

    return 0;
}