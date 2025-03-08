// Faça uma função em linguagem C que receba uma matriz de caracteres que contenha apenas dígitos números ('0' - '9') e calcule a frequência de cada dígito numérico em cada coluna da matriz. 
// O programa deve exibir o resultado em um formato de histograma para cada coluna, mostrando quantas vezes cada dígito aparece. 
// A quantidade de linhas e colunas da matriz de caracteres estão definidas através da diretiva #define
// Protótipo: void histograma(char mat[N][M])

#include <stdio.h>

#define N 10
#define M 10

void histograma(char mat[N][M]) {
    int c,l,x,y,cont[N]={0};

    for(c=0; c<N; c++) {
        for(l=0; l<N; l++) {
            switch (mat[l][c])
            {
                case '0': cont[0]++; break;
                case '1': cont[1]++; break;
                case '2': cont[2]++; break;
                case '3': cont[3]++; break;
                case '4': cont[4]++; break;
                case '5': cont[5]++; break;
                case '6': cont[6]++; break;
                case '7': cont[7]++; break;
                case '8': cont[8]++; break;
                case '9': cont[9]++; break;
            }       
        }
        printf("Coluna: %d\n",c);
        for(x=0; x<N; x++) {
            printf("%d: ",x);
            for(y=0; y<cont[x]; y++) {
                printf("*");
            }
            printf("\n");
        }
        for(x=0; x<N; x++) {cont[x]=0;}
    }
}

int main() {
    char matriz[N][M] = {
        {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'},
        {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'},
        {'9', '8', '7', '6', '5', '4', '3', '2', '1', '0'},
        {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
        {'1', '3', '5', '7', '9', '1', '3', '5', '7', '9'},
        {'0', '2', '4', '6', '8', '0', '2', '4', '6', '8'},
        {'2', '4', '6', '8', '0', '2', '4', '6', '8', '0'},
        {'9', '7', '5', '3', '1', '9', '7', '5', '3', '1'},
        {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
        {'5', '5', '5', '5', '5', '5', '5', '5', '5', '5'}
    };

    histograma(matriz);
}