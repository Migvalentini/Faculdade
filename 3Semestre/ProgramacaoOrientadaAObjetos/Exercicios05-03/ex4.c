//Escreva um programa que use funções para calcular a área de diferentes figuras geométricas (quadrado, triângulo, círculo).

#include <stdio.h>

float calculaAreaQuadrado(float lado) {
    return lado*lado;
}

float calculaAreaTriangulo(float lado, float h) {
    return (lado*h)/2;
}

float calculaAreaCirculo(float raio) {
    return 3.14 * raio*raio;
}

int main()
{
    float lado, h, raio;
    printf("Informe o lado do quadrado:\n");
    scanf("%f", &lado);
    printf("A area do quadrado de lado %f eh %f", lado, calculaAreaQuadrado(lado));
    printf("\nInforme o lado e altura do triangulo:\n");
    scanf("%f %f", &lado, &h);
    printf("A area do quadrado de lado %f e altura %f eh %f", lado, h, calculaAreaTriangulo(lado, h));
    printf("\nInforme o raio do circulo:\n");
    scanf("%f", &raio);
    printf("A area do circulo %f eh %f", raio, calculaAreaCirculo(raio));

    return 0;
}