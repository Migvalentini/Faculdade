#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 100

int tamanho(char str[N]) { // Mesma coisa que strlen
    int i;

    for(i=0; str[i]!='\0'; i++);

    return i;
}

char minusculo(char c) { // Mesma coisa que tolower
    if(c>='A' && c <='Z') {
        c+=32;
    }

    return c;
}

int palindromo(char str[N]) {
    int i,j;

    for(i=0, j=strlen(str)-1; i<j ; i++, j--) { 
        if(tolower(str[i])!=tolower(str[j])) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str[N];

    printf("Digite a string: ");
    gets(str);
    printf("Tamanho: %d\n",tamanho(str));

    if(palindromo(str) == 1) {
        printf("Palindromo");
    } else {
        printf("N eh palindromo");
    }

    return 0;
}