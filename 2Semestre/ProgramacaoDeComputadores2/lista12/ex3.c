// Foi feita uma pesquisa nos 26 estados brasileiros para coletar dados sobre acidentes de trânsito e gerar algumas estatísticas. 
// Em cada estado observaram-se os seguintes aspectos: nome do estado, número de veículos que circulam no estado e número de acidentes de trânsito. 
// Considere uma estrutura do tipo ESTADO para armazenar esses dados, com as seguintes informações:
// struct estado{
//     char nome[31];
//     int numveic;
//     int numacid;
// };
// typedef struct estado ESTADO;
// Faça uma função que leia, de um arquivo binário, um conjunto de 26 estruturas do tipo ESTADO e retorne a estrutura com o estado que apresenta o maior número de acidentes de trânsito. 
// O protótipo da função é dado abaixo. Desenvolva ainda o programa principal.

// ESTADO estado_maior_numero_acidentes(char nome_arquivo[80]);

#include <stdio.h>
#include <stdlib.h>

struct estado{
    char nome[31];
    int numveic;
    int numacid;
};
typedef struct estado ESTADO;

ESTADO estadoMaiorNumeroAcidentes(char nome_arquivo[80]) {
    FILE *f = fopen(nome_arquivo, "rb");
    ESTADO aux, maior;

    if(!f) {
        printf("Erro na abertura");
        exit(1);
    }

    maior.numacid=0;
    while(fread(&aux, sizeof(ESTADO), 1, f)) {
        if(aux.numacid > maior.numacid) {
            maior=aux;
        }
    }
    
    fclose(f);
    return maior;
}

int main() {
    char entrada[] = "../arquivos/entrada3.bin";
    
    ESTADO maisAcidentes = estadoMaiorNumeroAcidentes(entrada);

    printf("Nome: %s\nVeiculos: %d\nAcidentes: %d",maisAcidentes.nome, maisAcidentes.numveic, maisAcidentes.numacid);
}