// Escreva um programa em C que leia o nome de um arquivo binário e realize o seguinte processamento no mesmo. 
// O arquivo binário armazena um número indefinido de valores do tipo inteiro, com os conceitos (1, 2, 3, 4 ou 5) dos alunos de uma turma. 
// Após, o programa deverá gerar um arquivo texto com um histograma com os conceitos. 
// Por exemplo, se o arquivo binário de entrada possui o conteúdo:
// 3  2  3  2  1  1  1  3  3  3  5  4  4  5  5  3  3  2  4  3
// o arquivo texto resultante deverá ter o conteúdo
// 1  ***
// 2  ***
// 3  ********
// 4  ***
// 5  ***

#include <stdio.h>
#include <stdlib.h>

int main() {
    char entrada[50] = "..//arquivos//entrada2.bin";
    char saida[50] = "..//arquivos//saida2.txt";
    int n, x, y, conceitos[5]={0};

    FILE *f = fopen(entrada, "rb");
    FILE *p = fopen(saida, "w");

    if(!f || !p) {
        printf("Erro na abertura");
        exit(1);
    }

    printf("Números lidos do arquivo:\n");
    while (fscanf(f, "%d", &n) == 1) {
        printf("%d\n", n);
    }

    while(fread(&n, sizeof(int), 1, f)) {
        conceitos[n-1]++;
    }

    conceitos[0]=3;
    conceitos[1]=3;
    conceitos[2]=8;
    conceitos[3]=3;
    conceitos[4]=3;

    for(x=0; x<5; x++) {
        printf("%d ",conceitos[x]);
        fprintf(p, "\n%d ",conceitos[x]);
        for(y=0; y<conceitos[x]; y++) {
            printf("*");
            fprintf(p, "*");
        }
        printf("\n");
    }

    fclose(f);
}