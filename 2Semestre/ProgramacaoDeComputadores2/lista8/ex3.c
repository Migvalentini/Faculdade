// Faça um programa que leia os dados relativos a N livros (o valor N é definido pela diretiva #define), cada livro contendo as seguintes informações:
// nome: até 50 caracteres;
// autor: até 50 caracteres;
// data de edição: deve ser outra struct com o dia, mês e ano (os quais são inteiros).
// Após a entrada dos dados o programa deve escrever o nome e autor do livro mais novo e mais antigo. Por exemplo, considerando um N=6 e para a entrada (nome do livro, autor e data de edição)
// Linguagem C                            - Damas                               - 25 10 2006
// Linguagem C: Completa e descomplicada  - André Backes                        - 13 11 2018
// Elementos de Programação em C          - Francisco de Assis Cartaxo Pinheiro - 6 8 2012
// Começando a Programar em C Para Leigos - Dan Gookin                          - 6 3 2016
// C Como Programar                       - Paul Deitel e Harvey Deitel         - 6 8 2015
// Estudo Dirigido de Linguagem C         - José Augusto N. G. Manzano          - 16 4 2002
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

#define N 6

struct edicao {
    int dia,mes,ano;
}; typedef struct edicao EDICAO;

struct livro {
    char nome[50];
    char autor[50];
    EDICAO data;
}; typedef struct livro LIVRO;

LIVRO retornaAntigo(LIVRO livros[N]) {
    int x,dia;
    int menor=livros[0].data.ano*10000 + livros[0].data.mes*100 + livros[0].data.dia;
    LIVRO antigo;

    for(x=1; x<N; x++) {
        dia=livros[x].data.ano*10000 + livros[x].data.mes*100 + livros[x].data.dia;
        if(dia<menor) {
            menor=dia;
            antigo=livros[x];
        }
    }

    return antigo;
}

LIVRO retornaNovo(LIVRO livros[N]) {
    int x,dia;
    int maior=livros[0].data.ano*10000 + livros[0].data.mes*100 + livros[0].data.dia;
    LIVRO novo;

    for(x=1; x<N; x++) {
        dia=livros[x].data.ano*10000 + livros[x].data.mes*100 + livros[x].data.dia;
        if(dia>maior) {
            maior=dia;
            novo=livros[x];
        }
    }

    return novo;
}

int main() {
    LIVRO livros[N]={
        {"Linguagem C","Damas",{25,10,2006}},
        {"Linguagem C: Completa e descomplicada","Andre Backes",{13,11,2018}}, // Mais Novo
        {"Elementos de Programação em C","Francisco de Assis Cartaxo Pinheiro",{6,8,2012}},
        {"Começando a Programar em C Para Leigos","Dan Gookin",{6,3,2016}},
        {"C Como Programar","Paul Deitel e Harvey Deitel",{6,8,2015}},
        {"Estudo Dirigido de Linguagem C","Jose Augusto N. G. Manzano",{16,4,2002}} // Mais Antigo
    };
    LIVRO novo=retornaNovo(livros);
    LIVRO antigo=retornaAntigo(livros);

    printf("Livro Mais Novo:\n");
    printf("Titulo: %s\n",novo.nome);
    printf("Autor.: %s\n",novo.autor);
    printf("Edicao: %d/%d/%d\n",novo.data.dia,novo.data.mes,novo.data.ano);
    printf("Livro Mais Antigo:\n");
    printf("Titulo: %s\n",antigo.nome);
    printf("Autor.: %s\n",antigo.autor);
    printf("Edicao: %d/%d/%d\n",antigo.data.dia,antigo.data.mes,antigo.data.ano);
}