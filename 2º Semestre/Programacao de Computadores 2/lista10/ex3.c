// Implemente a função 
// char *ultimo_nome(char *nome_completo)
// que recebe como parâmetro uma string  com o nome completo de uma pessoa e retorna uma string alocada dinamicamente com o último nome encontrado. 
// A string alocada deverá ter o tamanho exato para comportar os caracteres do último nome, além do caractere nulo ('\0').
// Faça um programa que leia 5 strings com os nomes e mostre os últimos nomes, um por linha. Por exemplo, para as entradas
// Carlos Alberto Silva
// Sebastião Lazaroni
// Carlos Alberto Sant'ana
// Mário Jorge Lobo Zagallo
// Vanderlei Luxemburgo
// o programa deve produzir a seguinte saída
// Silva
// Lazaroni
// Sant'ana
// Zagallo
// Luxemburgo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ultimo_nome(char *nome_completo) {
    int i,j,k=0,tamNome=strlen(nome_completo)-1,tamSobrenome=0;

    for(i=tamNome; nome_completo[i]!=' '; i--) {
        tamSobrenome++;
    }
    
    char *sobrenome = (char *)malloc((tamSobrenome+1)*sizeof(char)),aux;

    for(i=tamNome; nome_completo[i]!=' '; i--) {
        sobrenome[k++]=nome_completo[i];
    }
    sobrenome[k]='\0';

    for(i=0, j=k-1; i<j; i++, j--) {
        aux=sobrenome[i];
        sobrenome[i]=sobrenome[j];
        sobrenome[j]=aux;
    }

    return sobrenome;
}

int main() {
    int x;
    char nome_completo[50];

    for(x=0; x<5; x++) {
        printf("Digite o nome completo: ");
        fflush(stdin);
        gets(nome_completo);
        char *sobrenome = ultimo_nome(nome_completo);

        printf("Sobrenome: %s\n",sobrenome);

        free(sobrenome);
    }
}