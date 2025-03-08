// Escreva uma função em C com o seguinte protótipo
// int hex2int(const char str[])
// que receba uma string com um número em hexadecimal, após converta o número lido para decimal, armazenando-o em uma variável inteira e a retorne.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define N 50

int hex2int(const char str[N]) {
    int x,n=0,exp=strlen(str)-1;

    for(x=0; str[x]!='\0'; x++) {
        if(str[x]>='0'&&str[x]<='9') {
            n+=(str[x]-48)*pow(16,exp);
        } else{
            n+=(toupper(str[x])-55)*pow(16,exp);
        }

        exp--;
    }

    return n;
}

int main() {
    printf("%s = %d\n","2AF3",hex2int("2AF3"));
    printf("%s = %d\n","01A8",hex2int("01A8"));
    printf("%s = %d","1A82",hex2int("1A82"));
}