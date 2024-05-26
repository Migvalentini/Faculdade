// Desenvolva um programa que solicite ao usuário informar o número inteiro referente a matrícula de um aluno e três valores reais que correspondam as três provas do aluno. 
// O programa deverá calcular a nota final utilizando a média harmônica.  
// Caso alguma das notas seja 0 (zero), a média deve receber 0 (zero). 
// Se o aluno obteve uma média abaixo de 6.0 e AINDA PUDER OBTER média igual ou superior a 6.0, o programa deve ler uma quarta nota, correspondente a prova de recuperação, e substituir a menor das três notas pela nota da recuperação, recalculando a média. 
// No caso do aluno ter obtido média inferior a 6.0, uma forma de verificar se ele pode alcançar média 6.0 através da prova de recuperação é substituindo a menor nota por 10 e verificando se a MH resultante é igual ou superior a 6.0. 
// Após o cálculo, o programa deverá mostrar na tela a o número de matrícula, a média final e o conceito obtido

#include <stdio.h>

int main() {
    int matricula;
    float n1,n2,n3,n4,media,aux;

    // printf("Digite a matricula: ");
    // scanf("%d",&matricula);
    matricula=123;

    printf("Digite a nota 1: ");
    scanf("%f",&n1);
    printf("Digite a nota 2: ");
    scanf("%f",&n2);
    printf("Digite a nota 3: ");
    scanf("%f",&n3);

    if (n1>n2){
      aux=n1;
      n1=n2;
      n2=aux;
    }
    if (n1>n3){
      aux=n1;
      n1=n3;
      n3=aux;
    }
    if (n2>n3){
      aux=n2;
      n2=n3;
      n3=aux;
    }

    if (n1 > 0 && n2 > 0 && n3 > 0) {
        media=3/((1/n1)+(1/n2)+(1/n3));
        printf("Matricula: %d\nMedia: %.1f\n",matricula,media);
    }

    if (media<6) {
        if (3/((1/10)+(1/n2)+(1/n3))) {
            printf("Digite a 4 nota: ");
            scanf("%f",&n4);
            media=3/((1/n4)+(1/n2)+(1/n3));
            printf("Matricula: %d\nMedia: %.1f\n",matricula,media);
        }
    }

    if (media>=9) {
        printf("Conceito: 4");
    } else if (media>=8) {
        printf("Conceito: 3");
    } else if (media>=7) {
        printf("Conceito: 2");
    } else if (media>=6) {
        printf("Conceito: 1");
    } else {
        printf("Conceito: 0");
    }

    return 0;
}