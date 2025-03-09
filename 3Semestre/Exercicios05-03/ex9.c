//Implemente uma função que converta temperaturas de Celsius para Fahrenheit.

#include <stdio.h>

float celsiusParaFahrenheit (float c) {
    return c*1.8 + 32;
}

int main() {
    float c;

    printf("Digite um valor em celsius: ");
    scanf("%f", &c);

    printf("Celsius: %f\nFahrenheit: %.1f", c, celsiusParaFahrenheit(c));
}