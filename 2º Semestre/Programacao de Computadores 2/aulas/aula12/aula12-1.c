/*
ARQUIVOS:

Tipos de Arquivos:

1 - Texto
2 - Binário: ocupa menos espaço em disco

Modos de Abertura:

Para arquivos texto:
- R: read
- W: write
- A: append

Para  arquivos binarios:
- RB
- WB
- AB
- RW
- WR
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char entrada[100] = "../arquivos/questao1.bin";

    FILE *f = fopen(entrada, "rb");

    if(f == NULL) {
        printf("Erro na abertura do arquivo %s\n",entrada);
        exit(0);
    }

    float num,soma=0;
    int c=0;
    while (fread(&num, sizeof(float), 1, f)) {
        soma+=num;
        c++;
    }

    float media = soma / c;

    printf("Media: %f\n",media);

    rewind(f); // volta para o início do arquivo
    //fseek(f, -2*sizeof(float), SEEK_CUR); // sizeof(float) pula x*4 bytes, o que vai para a próxima posição
    // SEEK_SET - em relação ao início
    // SEEK_END - em relação ao final

    char saida[100]="../arquivos/questao1.lix";
    FILE *s = fopen(saida,"wb");

    if(s == NULL) {
        printf("Erro na abertura do arquivo %s\n",saida);
        exit(0);
    }

    fread(&num, sizeof(float),1,f);

    while (fread(&num, sizeof(float), 1, f)) {
        if(num>media) {
            //fprintf(s,"Numero: %f\n",num);
            fwrite(&num, sizeof(float),1,s);
        }
    }
    
    fclose(f);
    fclose(s);

    return 0;
}
