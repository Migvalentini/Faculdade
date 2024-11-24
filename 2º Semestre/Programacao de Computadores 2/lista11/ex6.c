// Faça um programa em C que leia um arquivo texto chamado medalhas.txt, 
// onde a primeira linha contém o número de países participantes, seguido pela lista dos países, com suas medalhas de ouro, prata e bronze.
// O programa deverá gerar uma arquivo texto de saída com os países na ordem correta. 
// A ordem dos países no quadro de medalhas é dada pelo número de medalhas de ouro. 
// Se há empate em medalhas de ouro, a nação que tiver mais medalhas de prata fica a frente. 
// Havendo empate em medalhas de ouro e prata, fica mais bem colocado o país com mais medalhas de bronze. 
// Se dois ou mais países empatarem nos três tipos de medalhas, seu programa deve mostrá-los em ordem alfabética. 
// Por exemplo, para um arquivo cujo conteúdo é
// 8
// Belgica 2 2 2
// Brasil 7 6 6
// Franca 10 18 14
// Italia 8 12 8
// Australia 8 11 10
// Colombia 3 2 3
// Suica 3 2 2
// Tailandia 2 2 2
// O arquivo de saída deverá conter:
// Franca 10 18 14
// Italia 8 12 8
// Australia 8 11 10
// Brasil 7 6 6
// Colombia 3 2 3
// Suica 3 2 2
// Belgica 2 2 2
// Tailandia 2 2 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct medalha {
    char nome[50];
    int o, p, b;
};
typedef struct medalha MEDALHA;

MEDALHA * leArquivo(char entrada[50], int *numPaises) {
    FILE *fin = fopen(entrada, "r");
    int np,x;
    
    if(!fin) {
        printf("Erro na abertura do arquivo %s",entrada);
        exit(1);
    }

    fscanf(fin, "%d\n", &np);

    MEDALHA * med = (MEDALHA *)malloc(np * sizeof(MEDALHA));

    for(x=0; x<np; x++) {
        fscanf(fin, "%s %d %d %d", med[x].nome, &med[x].o, &med[x].p, &med[x].b);
    }

    *numPaises = np;
    fclose(fin);

    return med;
}

void ordenaMedalhas(MEDALHA *medalhas, int numPaises) {
    int x,y;
    MEDALHA aux;

    for(x=0; x<numPaises; x++) {
        for(y=0; y<numPaises-x-1; y++) {
            if( medalhas[y].o < medalhas[y+1].o ||
                ((medalhas[y].o == medalhas[y+1].o) && (medalhas[y].p < medalhas[y+1].p)) ||
                ((medalhas[y].o == medalhas[y+1].o && medalhas[y].p == medalhas[y+1].p) && (medalhas[y].b < medalhas[y+1].b)) ||
                ((medalhas[y].o == medalhas[y+1].o && medalhas[y].p == medalhas[y+1].p && medalhas[y].b == medalhas[y+1].b) && (strcmp(medalhas[y].nome, medalhas[y+1].nome) < 0))
            ) {
                aux=medalhas[y];
                medalhas[y]=medalhas[y+1];
                medalhas[y+1]=aux;
            }
        }
    }
}

void escreveArquivo(char saida[50], MEDALHA *medalhas, int numPaises) {
    FILE *fout = fopen(saida, "w");
    int x;

    if(!fout) {
        printf("Erro na abertura do arquivo %s",saida);
        exit(1);
    }

    for(x=0; x<numPaises; x++) {
        fprintf(fout, "%s %d %d %d\n", medalhas[x].nome, medalhas[x].o, medalhas[x].p, medalhas[x].b);
    }

    fclose(fout);
}

int main() {
    char entrada[50] = "../arquivos/entrada6.txt";
    char saida[50] = "../arquivos/saida6.txt";
    int numPaises;

    MEDALHA * med = leArquivo(entrada, &numPaises);
    ordenaMedalhas(med, numPaises);
    escreveArquivo(saida, med, numPaises);
}