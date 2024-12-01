// Faça uma função que receba o nome de dois arquivos binários, e merge de dois arquivos texto ordenados, gerando um terceiro também ordenado. O protótipo da função é dado abaixo:
// void merge_arquivos(char arquivo1[50], char arquivo2[50], char final[50]);
// Por exemplo, se o primeiro arquivo possui o conteúdo:
// 3  4  6  7  9  10
// Se o segundo arquivo possui o conteúdo:
// 1  2  3  5  8  9  12  14  15  16
// O arquivo final deverá possuir o seguinte conteúdo:
// 1  2  3  3  4  5  6  7  8  9  9  10  12  14  15  16   

#include <stdio.h>
#include <stdlib.h>

void merge_arquivos(char arquivo1[50], char arquivo2[50], char final[50]) {
    FILE *fin1 = fopen(arquivo1, "r");
    FILE *fin2 = fopen(arquivo2, "r");
    FILE *fout = fopen(final, "w");
    int n, k=0, x, y, aux;

    if(!fin1 || !fin2 || !fout) {
        printf("Erro na abertura dos arquivos");
        exit(1);
    }

    while(fscanf(fin1, "%d", &n) == 1) { k++; }

    while(fscanf(fin2, "%d", &n) == 1) { k++; }

    int numeros[k];
    k=0;
    rewind(fin1);
    rewind(fin2);

    while(fscanf(fin1, "%d", &n) == 1) {
        numeros[k++] = n;
    }

    while(fscanf(fin2, "%d", &n) == 1) {
        numeros[k++] = n;
    }

    for(x=0; x<k; x++) {
        for(y=0; y<k-x-1; y++) {
            if(numeros[y] > numeros[y+1]) {
                aux=numeros[y];
                numeros[y]=numeros[y+1];
                numeros[y+1]=aux;
            }
        }
    }

    for(x=0; x<k; x++) {
        fprintf(fout, "%d\n", numeros[x]);
    }
}

int main() {
    char entrada1[50] = "../arquivos/entrada8-1.txt";
    char entrada2[50] = "../arquivos/entrada8-2.txt";
    char saida[50] = "../arquivos/saida8.txt";

    merge_arquivos(entrada1, entrada2, saida);
}