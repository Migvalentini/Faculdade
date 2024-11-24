// Faça um programa que permita calcular o custo de uma lista de compras. 
// O programa possui como entrada um arquivo texto que na primeira linha possui um inteiro M que indica a quantidade de produtos que estão disponíveis para venda. 
// Seguem os M produtos com seus preços respectivos por unidade ou Kg. 
// A próxima linha de entrada contém um inteiro P que indica a quantidade de diferentes produtos que serão comprados, 
// sendo que após P linhas contendo cada uma delas um texto (com até 50 caracteres) e um valor inteiro, que indicam respectivamente o nome de cada produto e a 
// quantidade deste produto. 
// Abaixo um exemplo de um arquivo de entrada.
// 4
// mamao 2.19
// cebola 3.10
// tomate 2.80
// uva 2.73
// 3
// mamao 2
// tomate 1
// uva 3
// Como saída gere um arquivo texto com o valor que será gasto no seguinte formato: R$ seguido de um espaço e seguido do valor, com 2 casas decimais, conforme o exemplo abaixo.
// R$ 15.37

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct itens {
    char descricao[30];
    float valor;
};
typedef struct itens ITENS;

int main() {
    char entrada[50] = "../arquivos/entrada4.txt";
    char saida[50] = "../arquivos/saida4.txt";
    int m,p,x,y;
    float soma=0,n;
    char desc[30];
    
    FILE *fin = fopen(entrada, "r");

    if (fin == NULL) {
		printf("Erro ao abrir o arquivo %s\n", entrada);
		exit(0);
	}

    fscanf(fin, "%d", &m);

    ITENS *vet = (ITENS *)malloc(m*sizeof(ITENS));

    for(x=0; x<m; x++) {
        fscanf(fin, "%s %f", vet[x].descricao, &vet[x].valor);
    }

    fscanf(fin, "%d", &p);

    for(x=0; x<p; x++) {
        fscanf(fin, "%s %f", desc, &n);
        for(y=0; y<m; y++) {
            if(strcmp(vet[y].descricao, desc) == 0) {
                soma += vet[y].valor * n;
            }
        }
    }

    FILE *fout = fopen(saida, "w");

    if (fout == NULL) {
		printf("Erro ao abrir o arquivo %s\n", saida);
		exit(0);
	}

    fprintf(fout, "RS %.2f", soma);

    fclose(fin);
    fclose(fout);
    free(vet);
}