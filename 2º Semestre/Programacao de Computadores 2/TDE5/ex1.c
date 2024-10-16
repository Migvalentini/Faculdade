// Faça uma função que receba uma string com valores inteiros separados por vírgulas e retorne um vetor com esses valores. 
// A função implementada deverá obrigatoriamente seguir o protótipo que é definido abaixo.
// int * separa(char str[])
// Exemplo:
// String	Vetor
// “10,15,245,11,5,1243”  	
// 10	15	245	11	5	1243
// Faça ainda o programa principal que leia a string e chame a função implementada. Após, esse programa deverá escrever o vetor com todos os valores retornados.
// OBSERVAÇÃO: não é permitida a utilização de funções de manipulação de strings.

#include <stdio.h>
#include <stdlib.h>

#define N 100

int * separa(char str[N]) {
    int x,p,n,numeros=1;
    
    for(x=0; x<N; x++) {
        if (str[x]==',') {
            numeros++;
        }
    }
    
    int *num=(int *)malloc(numeros*sizeof(int));

    for(x=0; x<N; x++) {
        if(str[x]>'0'&&str[x]<'9') {
            n+=str[x];
        } else if (str[x]==',') {
            num[p++]=n;
            n=0;
        }
    }

    return num;
}

int main() {
    char str[N]="10,15,245,11,5,1243";
    int x;

    int *num=separa(str);

    for(x=0; x<N; x++) {
        printf("%d ",num[x]);
    }
}