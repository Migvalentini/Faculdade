// Implemente uma função em Linguagem C que receba uma string contendo apenas caracteres minúsculos e o endereço de duas estrututras do tipo LETRA, definidas como:
// typedef struct letra {
//     char letra; 
//     int ocorrencias;
// }LETRA;
// A função devará modificar as duas estruturas, retornando os dois caracteres que mais ocorrem na string. 
// Em caso de empate na contagem de ocorrências, os caracteres devem ser ordenados em ordem alfabética. 
// Por exemplo, para a string "aabbbccde", a função deverá retornar a letra 'b', pois esta aparece 3 vezes, e a letra 'a', pois esta aparece 2 vezes. 
// A função deverá obrigatoriamente seguir o seguinte protótipo:
// void caracteres_mais_frequentes(char *string, LETRA *mais1, LETRA *mais)
// Implemente o programa principal (main) que leia uma string, chame a função caracteres_mais_frequentes e escreva os valores das estruturas retornadas.
// OBSERVAÇÃO: não serão aceitas soluções que usem funções para manipulação de strings.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct letra {
    char letra; 
    int ocorrencias;
}LETRA;

void caracteresMaisFrequentes(char *string, LETRA *mais1, LETRA *mais2) {
    int x,m1=0,m2=0,p1=0,p2=0;
    int vezes[26]={0};

    for(x=0; string[x]!='\0'; x++) {
        vezes[string[x]-97]++;
    }

    for(x=0; x<26; x++) {
        printf("%d ",vezes[x]);
        if(vezes[x]>m1) {
            m2=m1;
            m1=vezes[x];
            p2=p1;
            p1=x;
        } else if(vezes[x]>m2) {
            m2=vezes[x];
            p2=x;
        }
    }

    mais1->letra=p1+97;
    mais1->ocorrencias=m1;
    mais2->letra=p2+97;
    mais2->ocorrencias=m2;
}

int main() {
    char str[100];
    LETRA mais1, mais2;

    //printf("Digite a string: ");
    //gets(str);

    strcpy(str, "aabbbccde");                           // - b (3 ocorrências) e a (2 ocorrências)
    //strcpy(str, "abcdefg");                             // - a e b (ambas com 1 ocorrência, ordenadas alfabeticamente)
    //strcpy(str, "aaaaaa");                              // - a (6 ocorrências) e letra vazia ou a novamente
    //strcpy(str, "abcabc");                              // - a e b (ambas com 2 ocorrências, ordenadas alfabeticamente)
    //strcpy(str, "aabbccddeeffggghhhhiiijjjkklmmmnnno"); // - h (4 ocorrências) e a (2 ocorrências)
    //strcpy(str, "zzzzyyyxxw");                          // - z (4 ocorrências) e y (3 ocorrências)

    caracteresMaisFrequentes(str,&mais1,&mais2);

    printf("\nMais 1: %c - %d ocorrencias\n",mais1.letra,mais1.ocorrencias);
    printf("Mais 2: %c - %d ocorrencias\n",mais2.letra,mais2.ocorrencias);
}