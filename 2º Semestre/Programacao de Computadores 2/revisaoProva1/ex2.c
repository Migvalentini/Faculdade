// Escreva um programa que leia uma string do usuário e o converta em um número real float. A string deve estar seguindo os padrões brasileiros.
// Exemplos de entrada:
// 1234,56
// 1.234,56
// 1.234.654,89
// 1234654,89
// 1234,5678
// 1.234,653
// 1234654,89145

#include <stdio.h>
#include <math.h>

#define N 10

float str2float(char str[N]) {
    int x=0,y;
    float num=0,exp=1;

    while(str[x]!=',') {
        if(str[x]!='.') {
            num=(num*10)+(str[x]-48);
        }
        x++;
    }

    if(str[x]==',') {
        for(y=x+1; str[y]!='\0'; y++) {
            if(str[y]>='0'&&str[y]<='9') {
                num+=((str[y]-48)/pow(10,exp));
                exp++;
            }
        }
    }

    return num;
}

int main() {
    printf("%f\n",str2float("1234,56"));
    printf("%f\n",str2float("1.234,56"));
    printf("%f\n",str2float("1.234.654,89"));
    printf("%f\n",str2float("1234654,89"));
    printf("%f\n",str2float("1234,5678"));
    printf("%f\n",str2float("1.234,653"));
    printf("%f\n",str2float("1234654,89145"));
}