// STRUCTS - estrutura heterogênea para armazenar valores distintos numa mesma variável

#include <stdio.h>

/*struct pessoa {
    int cod;
    char nome[50];
    char sexo;
    float salario;
};*/
//typedef struct pessoa PESSOA; // renomeia a variável para 'PESSOA'
typedef struct pessoa {
    int cod;
    char nome[50];
    char sexo;
    float salario;
}PESSOA;


int main() {
    struct pessoa p1;
    PESSOA p2;

    printf("Digite o codigo: ");
    scanf("%d",&p1.cod);
    fflush(stdin);
    printf("Digite o nome: ");
    gets(p1.nome);
    printf("Digite o sexo: ");
    scanf("%c",&p1.sexo);
    printf("digite o salario: ");
    scanf("%f",&p1.salario);
    
    // p2.cod=p1.cod;
    // //p2.nome=p1.nome; não funcina, pois não é possivel copiar um vetor
    // strcpy(p2.nome,p1.nome);
    // p2.sexo=p1.sexo;
    // p2.salario=p1.salario;

    p2=p1; // substitui as linhas acima

    printf("Codigo: %d\n",p2.cod);
    printf("Nome: %s\n",p2.nome);
    printf("Sexo: %c\n",p2.sexo);
    printf("Salario: %.2f",p2.salario);

    return 0;
}