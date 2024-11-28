// Faça um programa em C que leia um arquivo texto chamado pedidos.txt, onde cada linha possui o número de uma peça, número de pedidos, e 
// as quantidades requisitadas para os pedidos (o número de quantidades é definido pelo número de pedidos). 
// O sistema deve produzir um segundo arquivo texto chamado media.txt que contenha o código da peça, o número de pedidos e a média de quantidades requisitadas em cada pedido. 
// Para um arquivo de entrada com o seguinte conteúdo
//  232 3 100.0 200.0 300.0
// 3929 2 200.0 100.0
//   38 1 100.0
// 3949 5 200.0 200.0 300.0 300.0 250.0
//  o resultado seria:
//  232 3   200.0
// 3929 2   150.0
//   38 1   100.0
// 3949 5   250.0

#include <stdio.h>
#include <stdlib.h>

int main() {
    char entrada[50] = "../arquivos/entrada7.txt";
    char saida[50] = "../arquivos/saida7.txt";
    int numeroPeca, numeroPedidos, x;
    float soma, pedido;

    FILE *fin = fopen(entrada, "r");
    FILE *fout = fopen(saida, "w");

    if(!fin || !fout) {
        printf("Erro na abertura do arquivo");
        exit(1);
    }

    while(fscanf(fin, "%d %d", &numeroPeca, &numeroPedidos)==2) {
        soma = 0;
        for(x=0; x<numeroPedidos; x++) {
            fscanf(fin, "%f", &pedido);
            soma+=pedido;
        }
        fprintf(fout, "%d %d %.1f\n", numeroPeca, numeroPedidos, soma/numeroPedidos);
    }

    fclose(fin);
    fclose(fout);
}