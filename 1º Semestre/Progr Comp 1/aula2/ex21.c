// O módulo ou valor absoluto de um número é a distância de um ponto da reta à origem (distância do ponto até o zero). 
// Assim, a distância do ponto 5 à origem é 5. 
// A distância do ponto -3 à origem é 3, pois não há sentido em representar distâncias negativas. 
// Então o módulo de -3 é 3. 
// A representação dos módulos é a seguinte:
// |5| = 5
// |-3| = 3
// Desenvolva um programa que solicite ao usuário informar dois valores inteiros. 
// O programa deverá calcular a diferença do primeiro pelo segundo número e após mostrar na tela o módulo desta diferença, isto é, |valor1-valor2|.
// Exemplo:
// Se o usuário digitar como	  O sistema deverá calcular
// Valor 1	Valor 2
// 7	    4	                  | 7 - 4      | = 3
// 7	    -4	                  | 7 + - (-4) | = 11
// -4    	7	                  | -4 - 7     | = 11
// 4	    7	                  | 4 - 7      | = 3
// Observação: Na linguagem de programação C, a função a ser utilizada no cálculo do módulo é abs() para números inteiros e fabs() para números reais. 
// Estas funções estão presentes na bilbioteca math. 

#include <stdio.h>
#include <math.h>

int main() {
    int n1,n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("%d", abs(n1-n2));

    return 0;
}
