// Desenvolva um programa em C que solicite ao usuário informar vários números inteiros até que o usuário digite um valor negativo (que deve ser descartado) ou informe 100 valores. 
// Os valores informados devem ser armazenados em um vetor. 
// O programa em C deve identificar a maior subsequência de elementos, não necessariamente contíguos, de tal forma que cada elemento desta subsequência seja menor ou igual ao anterior.  
// O programa em C deve mostrar na tela o comprimento da maior subsequência encontrada.  
// Exemplo: se o usuário digitar as seguintes informações:
// Número  Iteração
// 1ª 23
// 2ª 30
// 3ª 6
// 4ª 3
// 5ª 12
// 6ª 18
// 7ª 12
// 8ª 9
// 9ª 5
// 10ª 5
// 11ª 22
// 12ª 4
// 13ª 32
// 14ª 54
// 15ª 89
// O programa em C deverá mostrar uma mensagem informando que o comprimento da maior sequência é de 5 números ( 18, 12, 9, 5 e 5).

#include <stdio.h>

int main() {
    int vet[10],x,cont=0,maior=0,maiorSeq=0;

    while(cont<10) {
        printf("Digite o valor %d: ",cont);
        scanf("%d",&vet[cont]);
        if(vet[cont]>=0) {
            cont++;
        } else {
            break;
        }
    }

    for(x=0; x<cont; x++) {
        printf("Vet[%d]=%d - Vet[%d]=%d - maiorSeg = %d - maior = %d\n",x+1,vet[x+1],x,vet[x],maiorSeq,maior);
        if(vet[x+1]<=vet[x]) {
            if(maiorSeq>maior) {
                maior=maiorSeq;
            }
            maiorSeq=0;
        } else {
            maiorSeq++;
        }
    }

    printf("O comprimento da maior subsequencia eh de %d numeros.\n",maiorSeq);

    return 0;
}
