#include <stdio.h>

void rgb(int cor, unsigned char *r, unsigned char *g, unsigned char *b) {
    *b = cor & 0xff;
    *g = (cor & 0xff00) >> 8; // mesma coisa que (cor >> 8) & 0xff
    *r = (cor & 0xff0000) >> 16; // mesma coisa que (cor >> 16) & 0xff
}

int main() {
    //int cor = 0xffffff; //branco
    int cor = 0xffc0cb; //rosa
    unsigned char r,g,b;
    rgb(cor, &r, &g, &b);

    printf("%x %d\n",cor,cor);
    printf("R: %x %d\n",r,r);
    printf("G: %x %d\n",g,g);
    printf("B: %x %d\n",b,b);
}