#include <stdio.h>
#include <stdlib.h>

int main() {
    char entrada[100] = "../arquivos/alunos.txt";

    FILE *f = fopen(entrada,"r");

    if(f == NULL) {
        printf("Erro na abertura do arquivo %s\n",entrada);
        exit(0);
    }

    char saida[100]="../arquivos/saida.txt";
    FILE *s = fopen(saida,"wb");

    if(s == NULL) {
        printf("Erro na abertura do arquivo %s\n",saida);
        exit(0);
    }

    char cod[10], linha[80];
    float n1, n2, n3;
    // while(fscanf(f, "%s %f %f %f",cod, &n1, &n2, &n3) == 4) {
    //     fprintf(s, "%s %.2f\n",cod, (n1+n2+n3)/3);
    // }
    while(fgets(linha, 80, f)) {
        sscanf(linha, "%s %f %f %f", cod, &n1, &n2, &n3);
        fprintf(s, "%s %.2f\n", cod, (n1+n2+n3)/3);
    }

    fclose(f);
    fclose(s);
}