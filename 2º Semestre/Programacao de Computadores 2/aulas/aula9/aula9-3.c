#include <stdio.h>

int main() {
    // CASTING

    int a=1, b=2;
    float f = (float)a/b; // converte a para float, oa invés de converter o resultado para float
    printf("%f",f); //exibe 0, pois é feita uma divisão de inteiro por inteiro
    //float é mais lento computacionalmente ao declarar uma variável como float
}