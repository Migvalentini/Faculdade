// Exercício 3 lista 8

// Faça um programa que leia os dados relativos a N livros (o valor N é definido pela diretiva #define),  cada livro contendo as seguintes informações:
// nome: até 50 caracteres;
// autor: até 50 caracteres;
// data de edição: deve ser outra struct com o dia, mês e ano (os quais são inteiros).
// Após a entrada dos dados o programa deve escrever o nome e autor do livro mais novo e mais antigo. Por exemplo, considerando um N=6 e para a entrada (nome do livro, autor e data de edição)
// Linguagem C Damas 25 10 2006
// Linguagem C: Completa e descomplicada André Backes 13 11 2018
// Elementos de Programação em C Francisco de Assis Cartaxo Pinheiro 6 8 2012
// Começando a Programar em C Para Leigos Dan Gookin 6 3 2016
// C Como Programar Paul Deitel e Harvey Deitel 6 8 2015
// Estudo Dirigido de Linguagem C José Augusto N. G. Manzano 16 4 2002
// o programa deve produzir a seguinte saída
// Livro Mais Novo
// Título: Linguagem C: Completa e descomplicada 
// Autor.: André Backes 
// Edição: 13/11/2018
// Livro Mais Antigo
// Título: Estudo Dirigido de Linguagem C  
// Autor.: José Augusto N. G. Manzano  
// Edição: 16/04/2002

#include <stdio.h>

#define N 3

struct data {
    int d,m,a;
};
typedef struct data DATA;

struct livro {
    char nome[50];
    char autor[50];
    DATA edicao;
};
typedef struct livro LIVRO;

void leLivros(LIVRO v[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Digite o nome do livro: ");
        gets(v[x].nome);
        printf("Digite o autor do livro: ");
        gets(v[x].autor);
        fflush(stdin);
        printf("Digite a data de edicao: ");
        scanf("%d %d %d",&v[x].edicao.d,&v[x].edicao.m,&v[x].edicao.a);
        fflush(stdin);
    }
}

void escreveLivros(LIVRO v[N]) {
    int x;

    printf("\nLIVROS:\n");

    for(x=0; x<N; x++) {
        printf("Nome do livro: %s\n",v[x].nome);
        printf("Autor do livro: %s\n",v[x].autor);
        printf("Data de edicao: %d %d %d\n",v[x].edicao.d,v[x].edicao.m,v[x].edicao.a);
    }
}

LIVRO maisAntigo(LIVRO v[N]) {
    LIVRO antigo=v[0];
    int x,menor=antigo.edicao.a*10000+antigo.edicao.m*100+antigo.edicao.d,aux;

    for(x=1; x<N; x++) {
        aux=v[x].edicao.a*10000+v[x].edicao.m*100+v[x].edicao.d;
        if(aux<menor) {
            menor=aux;
            antigo=v[x];
        }
    }

    return antigo;
}

LIVRO maisNovo(LIVRO v[N]) {
    LIVRO novo=v[0];
    int x,maior=novo.edicao.a*10000+novo.edicao.m*100+novo.edicao.d,aux;

    for(x=1; x<N; x++) {
        aux=v[x].edicao.a*10000+v[x].edicao.m*100+v[x].edicao.d;
        if(aux>maior) {
            maior=aux;
            novo=v[x];
        }
    }

    return novo;
}

int main() {
    LIVRO v[N];

    leLivros(v);
    escreveLivros(v);

    LIVRO antigo=maisAntigo(v);
    LIVRO novo=maisNovo(v);
    printf("Mais antigo:\nNome: %s\nAutor: %sEdicao: %d/%d/%d\n",antigo.nome,antigo.autor,antigo.edicao.d,antigo.edicao.m,antigo.edicao.a);
    printf("Mais novo:\nNome: %s\nAutor: %sEdicao: %d/%d/%d",novo.nome,novo.autor,novo.edicao.d,novo.edicao.m,novo.edicao.a);

    return 0;
}