#include <stdio.h>

int impar(int n) {
    return n & 1; // Operação bit a bit com o operador AND e a máscara como 1
}

char minusculo(char c) {
    if(c >= 'A' && c <= 'Z') {
        return c | 32; // Operação bit a bit com o operador OR e a máscara como 32
        //return c | 0x20; // Operação bit a bit com o operador OR e a máscara como 32 - 0x significa que é hexadecimal
        //return c | 0b00100000; // Operação bit a bit com o operador OR e a máscara como 32 - 0x significa que é binário
    }
}

char maiusculo(char c) {
    if(c >= 'a' && c <= 'z') {
        return c & 223;
        //return c & 0xdf;
        //return c & 0b11011111;
    }
}

int main() {
    printf("Impar: %d\n",impar(39));
    printf("Impar: %d\n",impar(38));
    printf("Minusculo: %c\n",minusculo('A'));
    printf("Minusculo: %c\n",minusculo('X'));
    printf("Minusculo: %c\n",minusculo('M'));
    printf("Maiusculo: %c\n",maiusculo('a'));
    printf("Maiusculo: %c\n",maiusculo('x'));
    printf("Maiusculo: %c\n",maiusculo('m'));

    int a=5, b=9; 
    // 5 -> 0101 9 -> 1001

    printf("A: %d B: %d\n",a,b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("A: %d B: %d\n",a,b);

    int c = 0xffc0cb;

    printf("Blue: %d %x\n", c & 0xff, c & 0xff);
    printf("Green: %d %x\n", (c & 0xff00)>>8 , (c & 0xff00)>>8); //>>8 desloca 8 posições para a direita
    printf("Red: %d %x\n", (c & 0xff0000)>>16 , (c & 0xff0000)>>16); //>>16 desloca 16 posições para a direita
}