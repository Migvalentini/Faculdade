// Faça uma função 
// int crossover(int n, int m) 
// que retorna um inteiro que representa os 16 bits mais significativos de n e os 16 bits menos significativos de m. Por exemplo:
// int  main() {
//    int x;
//    x = crossover(305419896,1737075661);
//    // 305419896 na base 10  = 12345678 na base 16 = 0001001000110100 - 0101011001111000
//    // 1737075661 na base 10 = 6789ABCD na base 16 = 0110011110001001 - 1010101111001101
//    // x receberá o valor                 
//    // 30544174110 = 1234ABCD16 = 0001001000110100 1010101111001101
//  }
// Faça também um programa que leia 2 inteiros, chame a função com os respectivos valores e receba o seu retorno. O programa deve mostrar os números em decimal e binário, como segue:
// 305419896  0x12345678
// 1737075661 0x6789ABCD
// 305441741  0x1234ABCD

#include <stdio.h>

void escreveBits(int n) {
    int x;

    for(x=31; x>=0; x--) {
        printf("%d",(n>>x)&1);
        if (x%4==0 && x>0) printf(".");
    }
    printf("\n");
}

unsigned int crossover(unsigned int n, unsigned int m) {
    unsigned int res = 0;

    res = n & 0xffff0000;
    res |= m & 0x0000ffff;
    return res;
}

int main() {
    unsigned int x = crossover(305419896,1737075661);
    printf("%u %x\n", x, x);

}


