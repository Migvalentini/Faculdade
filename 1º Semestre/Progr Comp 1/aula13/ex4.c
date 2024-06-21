// Desenvolva um programa em C que solicite ao usuário informar 15 valores reais e armazene estes valores em um vetor.
// Após solicite ao usuário informar um valor inteiro que corresponda a quantidade de vezes que será aplicada uma rotação circular para a esquerda (rotate left) nos elementos do vetor. 
// Na rotação circular para a esquerda, cada elemento é copiado para a posição à esquerda, e o primeiro elemento é copiado para a última posição. 
// Após a troca dos elementos, mostrar na tela o vetor modificado.
// Exemplo: Se o usuário informar que deseja 5 rotações e os seguintes números:
// Valores informados: 124  98  6  56.98  45  5.5  11.3  2.5  13.1  21  1.9  8.2  2.7  23.45  22.67
// O programa em C deverá efetuar a rotação circular:
// 1º deslocamento: 98  6  56.98  45  5.5  11.3  2.5  13.1  21  1.9  8.2  2.7  23.45  22.67  124
// 2º deslocamento: 6  56.98  45  5.5  11.3  2.5  13.1  21  1.9  8.2  2.7  23.45  22.67  124  98
// 3º deslocamento: 56.98  45  5.5  11.3  2.5  13.1  21  1.9  8.2  2.7  23.45  22.67  124  98  6
// 4º deslocamento: 45  5.5  11.3  2.5  13.1  21  1.9  8.2  2.7  23.45  22.67  124  98  6  56.98
// 5º deslocamento: 5.5  11.3  2.5  13.1  21  1.9  8.2  2.7  23.45  22.67  124  98  6  56.98  45
// O programa em C deverá mostrar na tela os números:
// 5.5  11.3  2.5  13.1  21  1.9  8.2  2.7  23.45  22.67  124  98  6  56.98  45

#include <stdio.h>

int main() {
    int x, aux, vezes;
    float vet[5];

    for(x=0; x<5; x++) {
        printf("Digite vet[%d]: ",x); scanf("%f",&vet[x]);
    }

    printf("Digite quantas vezes sera rotacionado o vetor: "); scanf("%d",&vezes);

    for(x=0; x<5; x++) {
        printf("%.1f ",vet[x]);
    }

    printf("\n");

    for(x=0; x<vezes; x++) {
        aux = vet[0];
        for(x=0; x<4; x++) {
            vet[x] = vet[x+1];
        }
        vet[4] = aux;
    }

    for(x=0; x<5; x++) {
        printf("%.1f ",vet[x]);
    }

    return 0;
}
