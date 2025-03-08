// Desenvolva um programa que solicite ao usuário informar dois valores inteiros. 
// O computador deverá mostrar o maior valor informado.
// Para calcular o maior entre dois valores quaisquer, dividimos a soma dois números informados e do módulo da diferença do primeiro pelo segundo número por 2 (dois), isto é, 
// (valor1 + valor2 + |valor1-valor2|) / 2
// Exemplo:
// Se o usuário digitar como	O sistema deverá calcular	Resultado - Maior Valor
// Valor 1	Valor 2
// 7	    4	                ( 7 + 4 + | 7 -  4| )/2	    7
// 7	   -4	                ( 7 - 4 + | 7 +  4| )/2	    7
// -4	    7	                ( -4 + 7 + | -4 -  7| )/2	7
// 4     	7	                ( -4 -7 + |-4 +7| )/2	   -4
// Observação: Na linguagem de programação C, a função a ser utilizada no cálculo do módulo é abs() para números inteiros e fabs() para números reais.
// Estas funções estão presentes na bilbioteca math. 

#include <stdio.h>
#include <math.h>

int main() {
    int n1,n2;

    printf("Figite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Figite o segundo numero: ");
    scanf("%d", &n2);

    printf("%d", (n1+n2 + abs(n1-n2)) / 2);

    return 0;
}
