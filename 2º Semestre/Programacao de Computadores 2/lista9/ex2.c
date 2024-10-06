//Fazer uma função que retorne os dois dígitos verificadores do cpf informado como parâmetro (inteiro).

#include <stdio.h>

void retornaCPF(int cpf, int *d1, int *d2) {
    int aux=cpf,soma1=0,soma2=0,x;

    for(x=2;x<=10; x++) {
        if(cpf%10>0) {
            soma1+=(cpf%10)*x;
        }
        cpf/=10;
    }

    if((soma1%11)<2) {
        *d1=0;
    } else {
        *d1=11-(soma1%11);
    }

    cpf=aux;

    for(x=3;x<=11; x++) {
        if(cpf%10>0) {
            soma2+=(cpf%10)*x;
        }
        cpf/=10;
    }
    soma2+=*d1*2;

    if((soma2%11)<2) {
        *d2=0;
    } else {
        *d2=11-(soma2%11);
    }
}

int main() {
    int cpf,d1,d2;

    cpf=123456789;
    
    retornaCPF(cpf,&d1,&d2);

    printf("CPF=%d-%d%d",cpf,d1,d2);
}