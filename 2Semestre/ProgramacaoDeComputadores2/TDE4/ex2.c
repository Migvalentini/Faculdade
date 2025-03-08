// Considere um vetor de estruturas do tipo PILOTO que contém as informações relativas a N pilotos de corrida: nome, equipe e pontuação das 22 provas realizadas. 
// Os campos da estrutura são definidos conforme descrito a seguir:
// struct piloto {
//     char nome[51];
//     char equipe[51];
//     int pontuacao[22];
// };
// typedef struct piloto PILOTO;
// Faça uma função em C que receba o vetor com N estruturas do tipo PILOTO e retorne o piloto campeão e o vice-campeão. 
// O campeão será o piloto com maior pontuação, sendo que o total de pontos é dado pela soma da pontuação nas 22 provas. 
// A função implementada deverá obrigatoriamente seguir o protótipo que é definido abaixo.
// void calcula_classificacao(PILOTO v[N], PILOTO *campeao, PILOTO *vice) 
// Faça ainda o programa principal que leia o vetor de estruturas. Esse programa deverá chamar a função implementada e, posteriormente, escrever o piloto campeão e o vice-campeão.

#include <stdio.h>

#define N 5

struct piloto {
    char nome[50];
    char equipe[50];
    int pontuacao[22];
};
typedef struct piloto PILOTO;

struct posicao {
    int pontuacao,index;
};
typedef struct posicao POSICAO;

void lePilotos(PILOTO pilotos[N]) {
    int x,y;

    for(x=0; x<N; x++) {
        printf("Digite o nome do piloto %d: ",x);
        gets(pilotos[x].nome);
        printf("Digite a equipe do piloto %d: ",x);
        gets(pilotos[x].equipe);
        for(y=0; y<22; y++) {
            printf("Digite a pontuacao %d: ",y);
            scanf("%d",&pilotos[x].pontuacao[y]);
        }
    }
}

void calculaClassificacao(PILOTO pilotos[N], PILOTO *campeao, PILOTO *vice) {
    int x,y,somaPontuacao=0;
    POSICAO pontuacoes[N];
    POSICAO aux;
    PILOTO aux2;

    for(x=0; x<N; x++) {
        for(y=0; y<22; y++) {
            somaPontuacao+=pilotos[x].pontuacao[y];
            pontuacoes[x].pontuacao=somaPontuacao;
            pontuacoes[x].index=x;
        }
        somaPontuacao=0;
    }

    for(x=0; x<N; x++) {
        for(y=0; y<N-x-1; y++) {
            if(pontuacoes[y].pontuacao < pontuacoes[y+1].pontuacao) {
                aux2=pilotos[y];
                pilotos[y]=pilotos[y+1];
                pilotos[y+1]=aux2;
                aux=pontuacoes[y];
                pontuacoes[y]=pontuacoes[y+1];
                pontuacoes[y+1]=aux;
            }
        }
    }

    *campeao=pilotos[0];
    *vice=pilotos[1];
}

int main() {
    PILOTO pilotos[N] = {
        {"Lewis Hamilton", "Mercedes", {25, 18, 15, 12, 10, 8, 6, 4, 2, 1, 25, 18, 15, 12, 10, 8, 6, 4, 2, 1, 25, 18}},
        {"Max Verstappen", "Red Bull", {18, 25, 18, 25, 25, 18, 18, 12, 15, 12, 25, 25, 18, 15, 18, 12, 15, 25, 18, 25, 25, 18}},
        {"Charles Leclerc", "Ferrari", {15, 12, 10, 8, 12, 10, 8, 10, 8, 15, 12, 8, 10, 15, 12, 10, 8, 12, 10, 15, 12, 10}},
        {"Sergio Perez", "Red Bull 2", {12, 15, 12, 18, 15, 12, 25, 18, 25, 18, 15, 18, 25, 18, 25, 18, 15, 12, 25, 18, 25, 15}},
        {"Fernando Alonso", "Aston Martin", {10, 8, 12, 10, 8, 15, 12, 8, 15, 25, 8, 10, 12, 15, 12, 8, 10, 15, 12, 8, 10, 15}}
    };
    PILOTO campeao,vice;
    // Lista dos pilotos de teste e suas respectivas pontuações:
    // Max Verstappen: 425 pontos
    // Sergio Perez: 399 pontos
    // Fernando Alonso: 258 pontos
    // Lewis Hamilton: 245 pontos
    // Charles Leclerc: 242 pontos

    //lePilotos(pilotos);

    calculaClassificacao(pilotos,&campeao,&vice);

    printf("CAMPEAO:\nNome: %s\nEquipe: %s\n\nVICE:\nNome: %s\nEquipe: %s",campeao.nome,campeao.equipe,vice.nome,vice.equipe);
}