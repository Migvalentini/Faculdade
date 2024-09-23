// Faça um programa em C que leia um valor n com o número de camisetas (no máximo 500 camisetas). 
// A seguir o programa deverá ler as informações das n camisetas que correspondem: o nome do cliente, a cor do logo da camiseta ("branco" ou "vermelho") 
// e o tamanho da camiseta ("P", "M" ou "G"). 
// O programa deverá gerar como saída as informações ordenadas pela cor em ordem ascendente, seguido pelos tamanhos em ordem descendente e por último por ordem ascendente de nome.  
// Por exemplo, para uma  entrada cujo conteúdo é:
// 9
// Maria Jose          branco    P
// Mangojata Mancuda   vermelho  P
// Cezar Torres Mo     branco    P
// Baka Lhau           vermelho  P
// JuJu Mentina        branco    M
// Amaro Dinha         vermelho  P
// Adabi Finho         branco    G
// Severina Rigudinha  branco    G
// Carlos Chade Losna  vermelho  P
// O programa deverá gerar um arquivo de saída contendo:
// branco P Cezar Torres Mo
// branco P Maria Jose
// branco M JuJu Mentina
// branco G Adabi Finho
// branco G Severina Rigudinha
// vermelho P Amaro Dinha
// vermelho P Baka Lhau
// vermelho P Carlos Chade Losna
// vermelho P Mangojata Mancuda

#include <stdio.h>
#include <string.h> 

#define N 9

struct camiseta {
    char nomeCliente[50];
    char cor[20];
    char tamanho;
};
typedef struct camiseta CAMISETA;

void escreveCamisetas(CAMISETA camisetas[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Camiseta %d: ",x);
        printf("%8s - %c - %s\n",camisetas[x].cor,camisetas[x].tamanho,camisetas[x].nomeCliente);
    }
}

void ordenacamisetas(CAMISETA camisetas[N]) {
    int x,y;
    CAMISETA aux;

    for(x=0; x<N; x++) {
        for(y=0; y<N-x-1; y++) {
            if(strcasecmp(camisetas[y].cor,camisetas[y+1].cor)>0) {
                aux=camisetas[y];
                camisetas[y]=camisetas[y+1];
                camisetas[y+1]=aux;
            } else if(strcasecmp(camisetas[y].cor,camisetas[y+1].cor)==0 && camisetas[y].tamanho<camisetas[y+1].tamanho) {
                aux=camisetas[y];
                camisetas[y]=camisetas[y+1];
                camisetas[y+1]=aux;
            } else if(strcasecmp(camisetas[y].cor,camisetas[y+1].cor)==0 && camisetas[y].tamanho==camisetas[y+1].tamanho && strcasecmp(camisetas[y].nomeCliente,camisetas[y+1].nomeCliente)>0) {
                aux=camisetas[y];
                camisetas[y]=camisetas[y+1];
                camisetas[y+1]=aux;
            }
        }
    }
}

int main() {
    CAMISETA camisetas[N]={
        {"Maria Jose","branco",'P'},
        {"Mangojata Mancuda","vermelho",'P'},
        {"Cezar Torres Mo","branco",'P'},
        {"Baka Lhau","vermelho",'P'},
        {"JuJu Mentina","branco",'M'},
        {"Amaro Dinha","vermelho",'P'},
        {"Adabi Finho","branco",'G'},
        {"Severina Rigudinha","branco",'G'},
        {"Carlos Chade Losna","vermelho",'P'}
    };

    ordenacamisetas(camisetas);
    escreveCamisetas(camisetas);
}