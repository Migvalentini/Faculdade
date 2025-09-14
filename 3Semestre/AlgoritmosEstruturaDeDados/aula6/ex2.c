//Como você implementaria duas pilhas sobre o mesmo vetor? 
//O vetor tem tamanho fixo (defina o tamanho), mas as pilhas não, o tamanho de cada uma pode variar tendo como restrição o tamanho do vetor 
//e o espaço ocupado pela outra pilha. 
//Escreva o procedimento/método para empilhar e desempilhar, que possa ser utilizado para as duas pilhas.

#include <stdio.h>
#include <stdlib.h>

#define N 20

int array[N];
int top1=-1;
int top2=N;

void writeArray() {
    int i;
    printf("\nArray:\n");
    for(i=0; i<N; i++) {
        printf("%d ", array[i]);
    }
}

void push1(int number) {
    if(top1 < top2) {
        array[++top1] = number;
    }
}

void push2(int number) {
    if(top1 < top2) {
        array[--top2] = number;
    }
}

void pop1() {
    if(top1 > 0) {
        array[top1--] = 0;
    }
}

void pop2() {
    if(top2<N) {
        array[top2++] = 0;
    }
}

int main() {
    push1(1);
    push1(2);
    push1(3);
    push1(4);
    push1(5);

    push2(20);
    push2(19);
    push2(18);
    push2(17);
    push2(16);

    writeArray();

    pop1();
    pop1();
    pop2();
    writeArray();

    pop2();
    pop2();
    pop2();
    pop2();
    pop2();
    writeArray();

    push2(20);
    push2(19);
    push2(18);
    push2(17);
    push2(16);

    writeArray();

    return 0;
}
