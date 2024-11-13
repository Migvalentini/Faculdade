#include <stdio.h>
#include <stdlib.h>

int main() {
    char entrada[100] = "../questao7.txt";
    char saida[100] = "../saida7.txt";
    FILE *f = fopen(entrada,"r");
    FILE *s = fopen(saida,"w");

    if(!f || !s) {
        printf("Erro na abertura");
        exit(0);
    }

    int i, cod, qtd;
    float n, soma;

    while(fscanf(f, "%d %d",&cod, &qtd) == 2) {
        soma=0;
        for(i=0; i<qtd; i++) {
            fscanf(f, "%f", &n);
            soma+=n;
        }
        printf("% 6d\t % 3d % 5.1f\n", cod, qtd, soma/qtd);
        fprintf(s, "% 6d\t % 3d % 5.1f\n", cod, qtd, soma/qtd);
    }

    fclose(f);
    fclose(s);
}