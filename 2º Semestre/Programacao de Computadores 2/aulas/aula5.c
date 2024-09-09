#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define N 100

int str2num(char str[N]) {
    int x,s=0;

    for(x=0; str[x]!='\0'; x++) {
        if(str[x]>='0' && str[x]<'9') {
            s=(s*10)+str[x]-48; // -48 ou -'0' é a mesma coisa. Converte string para numero
        }
    }

    return s;
}

void num2str(int num, char str[N]) {
    int i=0,f;
    char aux;

    while(num>0) {
        str[i++]=(num%10)+48;

        num/=10;
    }
    str[i]='\0';

    f=i-1;
    for(i=0; i<f ;i++,f--) {
        aux=str[i];
        str[i]=str[f];
        str[f]=aux;
    }
}

void int2bin(int num, char str[N]) {
    int i=0,f;
    char aux;

    while(num>0) {
        str[i++]=(num%2)+48;

        num/=2;
    }
    str[i]='\0';

    f=i-1;
    for(i=0; i<f ;i++,f--) {
        aux=str[i];
        str[i]=str[f];
        str[f]=aux;
    }
}

int bin2num(char str[N]) {
    int x,s=0,exp=pow(2,strlen(str)-1);

    for(x=0; str[x]!='\0'; x++) {
        s+=(str[x]-48)*exp;
        exp/=2;
    }

    return s;
}

int hexa2num(char str[N]) {
    int x,s=0,exp=strlen(str)-1;

    for(x=0; str[x]!='\0'; x++) {
        if(str[x]>='0'&&str[x]<='9') {
            s+=(str[x]-48)*pow(16,exp);
        }
        else {
            s+=(toupper(str[x])-55)*pow(16,exp);
        }
        exp--;
    }

    return s;
}

int main() {
    // unsigned char c = 255;
    unsigned char a;

    // printf("%d = %c\n",97,97); // Resultado é a
    // printf("%d = %c\n",65,65); // Resultado é A
    // printf("%d\n",c); // Resultado é 255
    // c++;
    // printf("%d\n",c); // Dará 0, pois não é possível armazenar 256, pois o máximo é 255 (128+64+32+16+8+4+2+1)


    for(a=0;a<128;a++) {
        printf("%d = %c\n",a,a); // \0 = 0 na tabela ascii
    }

    char str[N];
    int num;

    printf("String para numero: (Ex: 1234)\nDigite a string: ");
    scanf("%s",str); // & é apenas para tipos primitivos (char, int). String não é tipo primitivo
    printf("Decimal: %d\n",str2num(str));

    // printf("Numero para string: (Ex: 1234)\nDigite o numero: ");
    // scanf("%d",&num);
    // num2str(num,str);
    // printf("String:%s",str);

    // printf("Numero para binario: (Ex: 1234)\nDigite o numero: ");
    // scanf("%d",&num);
    // int2bin(num,str);
    // printf("Binario: %s",str);

    // printf("Binario para numero: (Ex: 11101)\nDigite o binario: ");
    // scanf("%s",str);
    // printf("Numero: %d",bin2num(str));

    // printf("Hexadecimal para numero: (Ex: 2ACA)\nDigite o hexadecimal: ");
    // scanf("%s",str);
    // printf("Numero: %d",hexa2num(str));

    return 0;
}