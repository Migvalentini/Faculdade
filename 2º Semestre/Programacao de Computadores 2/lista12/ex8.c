// Fazer uma função que inclua um número em um arquivo binário (de inteiros), mas não no final. 
// A função deve incluir o valor de forma que os números fiquem em ordem.  
// Considerar que os valores que já estão no arquivo, estão em ordem. 
// A função deverá possuir dois parâmetros, o arquivo e o valor a ser inserido.  
// O protótipo da função é dado abaixo. 
// void insere_valor(char nome_arquivo[80], int n);

#include <stdio.h>
#include <stdlib.h>

void escreveArquivo(char entrada[]) {
    FILE *f = fopen(entrada, "rb");
    int n;

    if(!f) {
        printf("Erro na abertura do arquivo");
        exit(1);
    }

    while(fread(&n, sizeof(int), 1, f)) {
        printf("%d ", n);
    }

    printf("\n\n");

    fclose(f);
}

void insere_valor(char arquivo[50], int n){
	int aux, k=0, x, y;
	
	FILE *f = fopen(arquivo,"rb");
	
	if (!f){
		printf("Erro ao abrir o arquivo %s\n", arquivo);
		exit(0);
	}
	
	while ( fread(&aux, sizeof(int), 1, f ) ){
		k++;
	}

    int *numeros = (int *)malloc((k+1) * sizeof(int));
    k=0;

    rewind(f);
    while ( fread(&aux, sizeof(int), 1, f ) ){
		numeros[k++]=aux;
	}

    for(x=0; x<k; x++) {
        if(numeros[x]<n && n<numeros[x+1]) {
            for(y=k; y>=x+2; y--) {
                numeros[y]=numeros[y-1];
            }
            numeros[x+1]=n;
        }
    }

    f = fopen(arquivo, "wb");

    for(x=0; x<k+1; x++) {
        fwrite(&numeros[x], sizeof(int), 1, f);
    }

	fclose(f);
    free(numeros);
}


int main() {
    char entrada[] = "../arquivos/entrada8.bin";

    escreveArquivo(entrada);
    insere_valor(entrada, 55);
    escreveArquivo(entrada);
}