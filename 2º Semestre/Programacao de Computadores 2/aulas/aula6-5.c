#include <stdio.h>
#include <string.h>

#define N 7

int main() {
    char str1[N] = "bianca";
    char str2[N] = "Bruno";

    if(strcasecmp(str1,str2)<0) { // Retorna 0 se ambas forem iguais. Retorna -n se str1<str2. Retorna +n se str1>str2. strcmp não considera maiuscula e minuscula. strcasecmp considera
        printf("%s\n",str1);
        printf("%s",str2);
    } else {
        printf("%s\n",str2);
        printf("%s",str1);
    }
}