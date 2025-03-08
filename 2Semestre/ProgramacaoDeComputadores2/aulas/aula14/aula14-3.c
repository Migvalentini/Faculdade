#include <stdio.h>

int converte_rgb(unsigned char r, unsigned char g, unsigned char b) {
    int cor = r;
    cor = (cor << 8) + g;
    cor = (cor << 8) + b;
    return cor;
}

int main() {
    unsigned char r = 255, g = 192, b = 203;
    int cor = converte_rgb(r,g,b);

    printf("%x\n",cor);
}