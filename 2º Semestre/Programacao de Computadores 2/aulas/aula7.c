// Exercício 1 lista 8

// Faça um programa em C que leia um valor n com o número de camisetas (no máximo 500 camisetas). 
// A seguir o programa deverá ler as informações das n camisetas que correspondem: 
// o nome do cliente, a cor do logo da camiseta ("branco" ou "vermelho") e o tamanho da camiseta ("P", "M" ou "G"). 
// O programa deverá gerar como saída as informações ordenadas pela cor em ordem ascendente, seguido pelos tamanhos em ordem descendente e por último por ordem ascendente de nome.
// Por exemplo, para uma  entrada cujo conteúdo é:
// 9
// Maria Jose branco P
// Mangojata Mancuda vermelho P
// Cezar Torres Mo branco P
// Baka Lhau vermelho P
// JuJu Mentina branco M
// Amaro Dinha vermelho P
// Adabi Finho branco G
// Severina Rigudinha branco G
// Carlos Chade Losna vermelho P
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

typedef struct camiseta {
    char nome[50];
    char cor[20];
    char tam;
}CAMISETA;


void leCamiseta(CAMISETA v[500], int n) {
    int x;

    for(x=0; x<n; x++) {
        printf("Digite o nome do cliente: ");
        gets(v[x].nome);
        printf("Digite a cor: ");
        scanf("%s",v[x].cor);
        fflush(stdin);
        printf("Digite o tamanho: ");
        scanf("%c",&v[x].tam);
        fflush(stdin);
    }
}

void ordenaCamisetas(CAMISETA v[500],int n) {
    CAMISETA aux;
    int i,j;

    for(i=0; i<n-1; i++) {
        for(j=0; j<n-1-i; j++) {
            if(strcasecmp(v[j].cor,v[j+1].cor)>0) {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            } else if(strcasecmp(v[j].cor,v[j+1].cor)==0 && v[j].tam<v[j+1].tam) {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            } else if(strcasecmp(v[j].cor,v[j+1].cor)==0 &&strcasecmp(v[j].tam,v[j+1].tam)==0 && strcasecmp(v[j].nome,v[j+1].nome)>0) {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
}

void escreveCamiseta(CAMISETA v[500], int n) {
    int x;

    printf("\nDados:\n");

    for(x=0; x<n; x++) {
        printf("Cor: %s",v[x].cor);
        printf("Tamanho: %c",v[x].tam);
        printf("Cliente: %s",v[x].nome);
    }
}

int main() {
    CAMISETA v[500];
    int n;

    printf("Digite o valor N: ");
    scanf("%d",&n);
    fflush(stdin);

    leCamiseta(v,n);
    ordenaCamisetas(v,n);
    escreveCamiseta(v,n);

    return 0;
}