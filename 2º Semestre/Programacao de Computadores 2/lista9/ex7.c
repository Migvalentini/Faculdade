// Faça uma função, cujo protótipo é definido por
// void dois_maiores(char str[], int *primeiro, int *segundo)
// que recebe uma string (números positivos separados pelo caracter ‘#’) e retorne os dois maiores valores existentes (ordem decrescente) na string pelos parâmetros primeiro e segundo. 
// Por exemplo, para a string
// 10#20#191#7#34
// a função deverá retornar 191 no parâmetro primeiro e 34 no parâmetro segundo. Note que os valores estão em ordem decrescente.

#include <stdio.h>

#define N 100

void doisMaiores(char str[N], int *primeiro, int *segundo) {
    int n=0,x,y,numeros[N],i=0,aux;

    for(x=0; str[x]!='\0'; x++) {
        if(str[x]!='#') {
            n=(n*10)+str[x]-48;
        } else {
            numeros[i++]=n;
            n=0;
        }
    }
   
    numeros[i++]=n;
    
    for(x=0; x<i; x++) {
        for(y=0; y<i-x-1; y++) {
            if(numeros[y]<numeros[y+1]) {
                aux=numeros[y];
                numeros[y]=numeros[y+1];
                numeros[y+1]=aux;
            }
        }
    }

    *primeiro=numeros[0];
    *segundo=numeros[1];
}

int main() {
    char str[N]="10#20#191#7#34";
    int primeiro, segundo;

    doisMaiores(str,&primeiro,&segundo);

    printf("\nPrimeiro = %d Segundo = %d",primeiro,segundo);
}