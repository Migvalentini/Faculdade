// Escreva um programa em C que leia o nome de um arquivo binário e realize o seguinte processamento no mesmo. 
// O arquivo binário armazena um número indefinido de valores do tipo float. 
// O programa deve calcular a média desses valores e escrever o valor do menor elemento maior ou igual à média calculada. 
// Por exemplo,  se o arquivo binário de entrada possui o conteúdo:
// 8.00  6.00  10.00  9.00  6.00  3.00  8.00  7.00  5.00  9.00
// o programa deverá escrever:
// 8.00
// pois a média é 7.1

#include <stdio.h>
#include <stdlib.h>

int main() {
    char entrada[50] = "../arquivos/entrada1.bin";
    float n, soma;
    int k=0, flag=0;
    float menor=0;

    FILE *f = fopen(entrada, "rb");

    if(!f) {
        printf("Erro na abertura");
        exit(1);
    }

    while(fread(&n, sizeof(float), 1, f)) {
        soma+=n;
        k++;
    }

    float media=soma/k;
    rewind(f);

    while(fread(&n, sizeof(float), 1, f)) {
        if(n>media && (flag==0 || n<=menor)) {
            menor=n;
            flag=1;
        }
    }
    printf("Media: %.1f\n",media);
    printf("Menor: %.1f\n",menor);

    fclose(f);
}