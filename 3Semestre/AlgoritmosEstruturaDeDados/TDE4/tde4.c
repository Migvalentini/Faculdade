//Implementar uma tabela hash (por endereçamento aberto - as listas encadeadas armazenam as colisões) para incluir nomes de cidades brasileiras:
//- defina o tamanho da tabela a partir de algum critério que faça sentido (!)
//- defina uma função hash para transformar o nome da cidade (que é a chave) em um endereço da tabela
//- insira pelo menos uns 50 nomes de cidades na tabela hash, e depois pesquise alguns nomes.

#include <stdio.h>
#include <string.h>

#define TAM 71
#define N 30

int hash(char cidades[][N], char nome[], int modo) {
    int soma = 0, x;

    for (x = 0; nome[x] != '\0'; x++) {
        soma += nome[x] * (x + 1);
    }   

    int pos = soma % TAM, bkp = soma % TAM;
    
    while (1) {
        if (modo == 1) { // busca
            if (strcmp(cidades[pos], "") == 0) {
                return -1; 
            }
            if (strcmp(cidades[pos], nome) == 0) {
                return pos; 
            }
        }
        else { // inserção
            if (strcmp(cidades[pos], "") == 0) {
                return pos;
            }
            if (strcmp(cidades[pos], nome) == 0) {
                return -2; 
            }
        }

        pos = (pos + 1) % TAM;
        if (pos == bkp)
            return -1; 
    }
}

void inserirCidade(char cidades[][N], char nome[]) {
    int pos = hash(cidades, nome, 0);

    if(pos == -1) {
        printf("ERRO: tabela cheia ao inserir %s\n", nome);
        return;
    }
    if (pos == -2) {
        printf("ERRO: Cidade '%s' ja existe\n", nome);
        return;
    }

    strcpy(cidades[pos], nome);
    printf("Inserida %-30s na posicao %d\n", nome, pos);
}

void buscarCidade(char cidades[][N], char nome[]) {
    int pos = hash(cidades, nome, 1);

    if (pos == -1) {
        printf("ERRO: Cidade '%s' nao encontrada\n", nome);
    }
    else {
        printf("Cidade '%s' encontrada na posicao %d\n", nome, pos);
    }
}

int main() {
    char cidades[TAM][N];
    int i;

    for (i = 0; i < TAM; i++) {
        strcpy(cidades[i], "");
    }
    
    inserirCidade(cidades, "Caxias do Sul");
    inserirCidade(cidades, "Porto Alegre");
    inserirCidade(cidades, "Florianopolis");
    inserirCidade(cidades, "Curitiba");
    inserirCidade(cidades, "Sao Paulo");
    inserirCidade(cidades, "Rio de Janeiro");
    inserirCidade(cidades, "Belo Horizonte");
    inserirCidade(cidades, "Vitoria");
    inserirCidade(cidades, "Salvador");
    inserirCidade(cidades, "Recife");
    inserirCidade(cidades, "Fortaleza");
    inserirCidade(cidades, "Natal");
    inserirCidade(cidades, "Joao Pessoa");
    inserirCidade(cidades, "Maceio");
    inserirCidade(cidades, "Aracaju");
    inserirCidade(cidades, "Belem");
    inserirCidade(cidades, "Manaus");
    inserirCidade(cidades, "Boa Vista");
    inserirCidade(cidades, "Palmas");
    inserirCidade(cidades, "Campo Grande");
    inserirCidade(cidades, "Cuiaba");
    inserirCidade(cidades, "Goiania");
    inserirCidade(cidades, "Brasilia");
    inserirCidade(cidades, "Uberlandia");
    inserirCidade(cidades, "Ribeirao Preto");
    inserirCidade(cidades, "Campinas");
    inserirCidade(cidades, "Santos");
    inserirCidade(cidades, "Sorocaba");
    inserirCidade(cidades, "Londrina");
    inserirCidade(cidades, "Maringa");
    inserirCidade(cidades, "Joinville");
    inserirCidade(cidades, "Blumenau");
    inserirCidade(cidades, "Pelotas");
    inserirCidade(cidades, "Santa Maria");
    inserirCidade(cidades, "Passo Fundo");
    inserirCidade(cidades, "Lajeado");
    inserirCidade(cidades, "Itajai");
    inserirCidade(cidades, "Chapeco");
    inserirCidade(cidades, "Criciuma");
    inserirCidade(cidades, "Foz do Iguacu");
    inserirCidade(cidades, "Ponta Grossa");
    inserirCidade(cidades, "Campos dos Goytacazes");
    inserirCidade(cidades, "Niteroi");
    inserirCidade(cidades, "Volta Redonda");
    inserirCidade(cidades, "Juiz de Fora");
    inserirCidade(cidades, "Montes Claros");
    inserirCidade(cidades, "Petropolis");
    inserirCidade(cidades, "Teresina");
    inserirCidade(cidades, "Santarem");
    inserirCidade(cidades, "Macapa");

    for (i = 0; i < TAM; i++) {
        printf("%d - %s\n", i, cidades[i]);
    }

    buscarCidade(cidades, "Caxias do Sul");
    buscarCidade(cidades, "Pelotas");
    buscarCidade(cidades, "Teste");

    return 0;
}