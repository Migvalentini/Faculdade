#include <stdio.h>

int busca_bit(int n, int pos) {
    //return (n>>pos) & 1;
    int mask = 1;
    mask <<= pos;
    int r = (n & mask) >> pos;
    return r;
}

int exp2(int exp) {
    int r = 1;
    return r << exp;
}

int main() {
    printf("%d\n",busca_bit(0x58, 3));
    printf("%d\n",busca_bit(0x50, 3));
    printf("%d\n",exp2(4));
    printf("%d\n",exp2(6));
}