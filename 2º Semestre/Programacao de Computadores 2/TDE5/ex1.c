// Faça uma função que receba uma string com valores inteiros separados por vírgulas e retorne um vetor com esses valores. 
// A função implementada deverá obrigatoriamente seguir o protótipo que é definido abaixo.
// int * separa(char str[])
// Exemplo:
// String	
// “10,15,245,11,5,1243”  	
// Vetor
// 10	15	245	11	5	1243
// Faça ainda o programa principal que leia a string e chame a função implementada. Após, esse programa deverá escrever o vetor com todos os valores retornados.
// OBSERVAÇÃO: não é permitida a utilização de funções de manipulação de strings.

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int * separa(char str[], int n, int *tam) {
    int x=0,p=0,num=0;
    *tam=1;
    
    while(str[x]!='\0') {
        if (str[x]==',') {
            (*tam)++;
        }
        x++;
    }
    
    int *numeros=(int *)malloc((*tam)*sizeof(int));

    for(x=0; x<n; x++) {
        if(str[x]>='0'&&str[x]<='9') {
            num=(num*10)+str[x]-48;
        } else if (str[x]==',') {
            numeros[p++]=num;
            num=0;
        }
    }

    numeros[p]=num;

    return numeros;
}

int main() {
    char str[100];
    printf("Digite os numeros separados por ,: ");
    gets(str);
    int x,tam;

    int *num=separa(str,strlen(str),&tam);

    printf("\nNumeros: ");

    for(x=0; x<tam; x++) {
        printf("%d ",num[x]);
    }
}