#include <stdio.h>

int converte_bcd(unsigned char bcd) {
    int u = bcd & 0xf;
    int d = (bcd >> 4 ) & 0xf;

    //return (d*10) + u;
    return ((bcd >> 4 ) & 0xf)*10 + (bcd & 0xf);
}

int main() {
    unsigned char bcd = 0x99;

    printf("Inteiro: %d\n", converte_bcd(bcd));
}