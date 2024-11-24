// O arquivo texto "cao.txt" possui o livro "O Cão dos Baskerville" de Arthur Conan Doyle. 
// Faça um programa que leia o arquivo e conte quantas vezes aparece a palavra Holmes.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char entrada[50] = "../arquivos/entrada5.txt";
    char linha[130];
    int x, vezes=0, tamanho;

    FILE *fin = fopen(entrada, "r");

    if(!fin) {
        printf("Erro na abertura do arquivo %s",entrada);
        exit(0);
    }

    while(fgets(linha, 130, fin)) {
        tamanho = strlen(linha);
        for(x=0; x<tamanho-6; x++) {
            if(linha[x] == 'H' && linha[x+1] == 'o' && linha[x+2] == 'l' && linha[x+3] == 'm' && linha[x+4] == 'e' && linha[x+5] == 's') {
                vezes++;
            }
        }
    }

    printf("\nA palavra Holmes aparece %d vezes",vezes);

    fclose(fin);
}