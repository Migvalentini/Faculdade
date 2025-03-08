// Usando o operador deslocamento à direita e o operador AND sobre bits e uma máscara, 
// escreva uma função descompactaCaracteres que recebe o inteiro unsigned short int e o descompacte em dois caracteres.

#include <stdio.h>

unsigned short int compactaCaracteres(char a, char b) {
    unsigned short int res;
    res = a;
    res <<= 8;
    res |= b;
    return res;
}

void descompactaCaracteres(unsigned short int n, char *a, char *b) {
    *b= n & 0xff;
    n >>= 8;
    *a = n & 0xff;
}

int main() {
    char a='a', b='b';
    char r1, r2;

    short int aux =  compactaCaracteres(a,b);
	printf("Compactado: %x\n", aux);

    descompactaCaracteres(aux, &r1, &r2);
    printf("Descompactado: %c%c\n", r1, r2);
}