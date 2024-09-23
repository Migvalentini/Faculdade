// Fazer uma função escrita na linguagem C que copia N caracteres de uma matriz de caracteres, a partir da linha e coluna especificadas, para uma string. 
// A quantidade de linhas e colunas da matriz de caracteres estão definidas em QTLIN e QTCOL. 
// Caso a cópia para a string exceda os caracteres de uma linha da matriz, continue a partir do primeiro caractere da linha seguinte. 
// Encerre quando N caracteres forem copiados ou for atingir o último caractere da matriz.
// Exemplo: Matriz com 10 linhas x 15 colunas
// Protótipo: void copia(char m[QTLIN][QTCOL], int lin, int col, int N, char s[TAM])
// PHQGPROVAYLNLFD
// XFIRCVSCXGGBWKF
// NQDUXWFNFOZVSRT
// KJPREPGGXRPNLIN
// GUAGEMSYYCQPEVI
// KEFFMZNIMKKASVW
// SRENZKYCXFXTLSG
// YPSFADPOOEFXZBC
// OEJUVPVAABCDEFG
// HIJKLMNOPQRSABC
// Exemplo:
// copia(m1,0,4,5,s); // após s será "PROVA"
// copia(m1,3,12,9,s); // após s será "LINGUAGEM"
// copia(m1,9,12,6,s); // após s será "ABC"
// copia(m1,5,8,0,s); // após s será ""
// copia(m1,1,14,17,s); // após s será "FNQDUXWFNFOZVSRTK"

#include <stdio.h>

#define QTLIN 10
#define QTCOL 15
#define TAM 150

void copia(char m[QTLIN][QTCOL], int lin, int col, int N, char s[TAM]) {
    int x;

    for(x=0; x<N; x++) {
        s[x]=m[lin][col++];
        if(col==15) {
            col=0;
            lin++;
        }
    }
    s[x]='\0';
}

int main() {
    char m1[QTLIN][QTCOL]={
        {'P','H','Q','G','P','R','O','V','A','Y','L','N','L','F','D'},
        {'X','F','I','R','C','V','S','C','X','G','G','B','W','K','F'},
        {'N','Q','D','U','X','W','F','N','F','O','Z','V','S','R','T'},
        {'K','J','P','R','E','P','G','G','X','R','P','N','L','I','N'},
        {'G','U','A','G','E','M','S','Y','Y','C','Q','P','E','V','I'},
        {'K','E','F','F','M','Z','N','I','M','K','K','A','S','V','W'},
        {'S','R','E','N','Z','K','Y','C','X','F','X','T','L','S','G'},
        {'Y','P','S','F','A','D','P','O','O','E','F','X','Z','B','C'},
        {'O','E','J','U','V','P','V','A','A','B','C','D','E','F','G'},
        {'H','I','J','K','L','M','N','O','P','Q','R','S','A','B','C'}
    };
    char s[150];

    copia(m1,0,4,5,s); printf("%s\n",s); // após s será "PROVA"
    copia(m1,3,12,9,s); printf("%s\n",s); // após s será "LINGUAGEM"
    copia(m1,9,12,6,s); printf("%s\n",s); // após s será "ABC"
    copia(m1,5,8,0,s); printf("%s\n",s); // após s será ""
    copia(m1,1,14,17,s); printf("%s\n",s); // após s será "FNQDUXWFNFOZVSRTK"
}