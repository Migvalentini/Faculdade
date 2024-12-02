// Faça um programa que leia o nome de um arquivo binário com dados relativos a um número indefinido de livros, cada livro contendo as seguintes informações:
// nome: até 50 caracteres;
// autor: até 50 caracteres;
// data de edição: deve ser outra struct com o dia, mês e ano (os quais são inteiros).
// Após a entrada dos dados o programa deve escrever o nome e autor do livro mais novo e mais antigo. 
// Por exemplo, considerando um arquivo binário com as seguintes informações (nome do livro, autor e data de edição)
// Linguagem C                             Damas                                25 10 2006
// Linguagem C: Completa e descomplicada   André Backes                         13 11 2018
// Elementos de Programação em C           Francisco de Assis Cartaxo Pinheiro  06 08 2012
// Começando a Programar em C Para Leigos  Dan Gookin                           06 03 2016
// C Como Programar                        Paul Deitel e Harvey Deitel          06 08 2015
// Estudo Dirigido de Linguagem C          José Augusto N. G. Manzano           16 04 2002
// o programa deve produzir a seguinte saída
// Livro Mais Antigo
// Título: Linguagem C: Completa e descomplicada 
// Autor.: André Backes 
// Edição: 13/11/2018
// Livro Mais Novo
// Título: Estudo Dirigido de Linguagem C  
// Autor.: José Augusto N. G. Manzano  
// Edição: 16/04/2002

#include <stdio.h>
#include <stdlib.h>

struct data {
    int d, m, a;
};
typedef struct data DATA;

struct livro {
    char nome[50];
    char autor[50];
    DATA edicao;
};
typedef struct livro LIVRO;

void livroAntigoNovo(char entrada[], LIVRO *antigo, LIVRO *novo) {
    LIVRO aux;
    int flag=0, a;

    FILE *f = fopen(entrada, "rb");

    if (!f){
		printf("Erro ao abrir o arquivo");
		exit(0);
	}


    while(fread(&aux, sizeof(LIVRO), 1, f)) {
        if(flag==0) {
            flag=1;
            *antigo=aux;
            *novo=aux;
        }

        a=aux.edicao.a*10000 + aux.edicao.m*100 + aux.edicao.d;

        if(a>antigo->edicao.a*10000 + antigo->edicao.m*100 + antigo->edicao.d) {
            *antigo=aux;
        }
        if(a<novo->edicao.a*10000 + novo->edicao.m*100 + novo->edicao.d) {
            *novo=aux;
        }
    }

    fclose(f);
}

int main() {
    char entrada[] = "../arquivos/entrada6.bin";
    LIVRO antigo, novo;

    livroAntigoNovo(entrada, &antigo, &novo);

    printf("Livro Mais Antigo:\nTitulo: %s\nAutor: %s\nEdicao: %d/%d/%d\n\n", antigo.nome, antigo.autor, antigo.edicao.d, antigo.edicao.m, antigo.edicao.a);
    printf("Livro Mais Novo:\nTitulo: %s\nAutor: %s\nEdicao: %d/%d/%d", novo.nome, novo.autor, novo.edicao.d, novo.edicao.m, novo.edicao.a);

}