// O operador de deslocamento à esquerda pode ser usado para compactar dois valores de caracteres em uma variável unsigned short int (2 bytes). 
// Escreva um programa que leia 2 caracteres do teclado e passe para a função compactaCaracteres. 
// Para compactar dois caracteres em uma variável inteira unsigned short int, atribua o primeiro caracter a variável unsigned short int, 
// desloque a variável para esquerda em 8 posições de bits e combine a variável unsigned com o segundo caractere usando o operador OR sobre bits.

#include <stdio.h>

unsigned short int compactaCaracteres(char a, char b) {
    unsigned short int res;
    res = a;
    res <<= 8;
    res |= b;
    return res;
}

int main() {
    printf("%x\n",compactaCaracteres('a', 'b'));
    printf("%x\n",compactaCaracteres('f', 'h'));
    printf("%x\n",compactaCaracteres('x', 'y'));
}