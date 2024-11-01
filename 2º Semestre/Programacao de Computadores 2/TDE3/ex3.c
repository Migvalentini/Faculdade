// Considere um vetor de estruturas do tipo TABELA que contém as informações relativas aos N times (o valor de N é definido através da diretiva #define) que disputam um campeonato de futebol.  
// Os campos da estrutura são definidos conforme descrito a seguir:
// struct tabela {
//     char nome[50];
//     int vitorias;
//     int empates;
//     int derrotas;
//     int marcados;
//     int sofridos;
// };
// typedef struct tabela TABELA;
// Faça um programa que leia um vetor do tipo TABELA e escreva os times em ordem de classificação. 
// As equipes são classificadas de acordo com o número de pontos obtidos, ou seja, a equipe com mais pontos fica melhor classificado.  
// Na pontuação, a vitória vale 3 pontos, o empate vale 1 ponto e a derrota vale 0. 
// Em caso de empate no número de pontos, o critério de desempate é o número de vitórias. 
// A equipe com mais vitórias fica em posição mais alta na classificação.  
// Se ainda houver empate, o saldo de gols é considerado. 
// O saldo de gols é a diferença entre gols marcados e gols sofridos ao longo de todas as partidas. 
// A equipe com um saldo de gols superior ganha vantagem na classificação. 

#include <stdio.h>

#define N 20

struct tabela {
    char nome[50];
    int vitorias;
    int empates;
    int derrotas;
    int marcados;
    int sofridos;
};
typedef struct tabela TABELA;

void leTimes(TABELA times[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Digite o nome do time: ");
        fflush(stdin);
        gets(times[x].nome);
        printf("Digite o numero de vitorias: ");
        scanf("%d",&times[x].vitorias);
        printf("Digite o numero de empates: ");
        scanf("%d",&times[x].empates);
        printf("Digite o numero de derrotas: ");
        scanf("%d",&times[x].derrotas);
        printf("Digite o numero de marcados: ");
        scanf("%d",&times[x].marcados);
        printf("Digite o numero de sofridos: ");
        scanf("%d",&times[x].sofridos);
    }
}

void ordenaTimes(TABELA times[N]) {
    int x,y,pontosA,pontosB,saldoGolsA,saldoGolsB;
    TABELA aux;

    for(x=0; x<N; x++) {
        for(y=0; y<N-x-1; y++) {
            pontosA=times[y].vitorias*3+times[y].empates;
            pontosB=times[y+1].vitorias*3+times[y+1].empates;
            saldoGolsA=times[y].marcados-times[y].sofridos;
            saldoGolsB=times[y+1].marcados-times[y+1].sofridos;
            if(pontosA<pontosB) {
                aux=times[y];
                times[y]=times[y+1];
                times[y+1]=aux;
            } else if(pontosA==pontosB && times[y].vitorias<times[y+1].vitorias) {
                aux=times[y];
                times[y]=times[y+1];
                times[y+1]=aux;
            } else if(pontosA==pontosB && times[y].vitorias==times[y+1].vitorias && saldoGolsA<saldoGolsB) {
                aux=times[y];
                times[y]=times[y+1];
                times[y+1]=aux;
            }
        }
    }
}

void escreveTimes(TABELA times[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("%02d - %s, %02d pontos, %02d vitorias, saldo %d\n",x+1,times[x].nome,times[x].vitorias*3+times[x].empates,times[x].vitorias,times[x].marcados-times[x].sofridos);
    }
}

int main() {
    TABELA times[N] = {
        {"TimeK", 5, 9, 4, 17, 19},  // 24 pontos, 5 vitórias, saldo -2
        {"TimeD", 9, 7, 2, 25, 10},  // 34 pontos, 9 vitórias, saldo +15
        {"TimeJ", 6, 6, 6, 18, 17},  // 24 pontos, 6 vitórias, saldo +1
        {"TimeE", 8, 8, 2, 22, 18},  // 32 pontos, 8 vitórias, saldo +4
        {"TimeN", 2, 12, 4, 14, 15}, // 18 pontos, 2 vitórias, saldo -1
        {"TimeS", 1, 5, 12, 7, 28},  // 8 pontos, 1 vitória, saldo -21
        {"TimeT", 0, 4, 14, 5, 27},  // 4 pontos, 0 vitórias, saldo -22
        {"TimeF", 7, 9, 2, 21, 16},  // 30 pontos, 7 vitórias, saldo +5
        {"TimeB", 10, 5, 3, 28, 14}, // 35 pontos, 10 vitórias, saldo +14
        {"TimeG", 9, 3, 6, 20, 20},  // 30 pontos, 9 vitórias, saldo 0
        {"TimeI", 6, 8, 4, 19, 21},  // 26 pontos, 6 vitórias, saldo -2
        {"TimeC", 10, 4, 4, 27, 20}, // 34 pontos, 10 vitórias, saldo +7
        {"TimeA", 10, 5, 3, 30, 15}, // 35 pontos, 10 vitórias, saldo +15
        {"TimeH", 8, 6, 4, 24, 22},  // 30 pontos, 8 vitórias, saldo +2
        {"TimeM", 3, 11, 4, 15, 16}, // 20 pontos, 3 vitórias, saldo -1
        {"TimeQ", 0, 10, 8, 8, 22},  // 10 pontos, 0 vitórias, saldo -14
        {"TimeO", 1, 10, 7, 10, 20}, // 13 pontos, 1 vitória, saldo -10
        {"TimeL", 4, 10, 4, 16, 18}, // 22 pontos, 4 vitórias, saldo -2
        {"TimeP", 2, 8, 8, 12, 25},  // 14 pontos, 2 vitórias, saldo -13
        {"TimeR", 1, 6, 11, 9, 30},  // 9 pontos, 1 vitória, saldo -21
    };



    //leTimes(times);
    ordenaTimes(times);
    escreveTimes(times);
}