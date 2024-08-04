//Desenvolva um programa em C que leia 10 datas de aniversário, cada uma composta por dia e mes, e escreva as 10 datas em ordem cronológica crescente.

#include <stdio.h>

int main() {
    int x, dias[10], meses[10], flag=0, cont, aux;

    for(x=0; x<10; x++) {
        printf("Digite o dia da data %d: ",x);
        scanf("%d",&dias[x]);
        printf("Digite o mes da data %d: ",x);
        scanf("%d",&meses[x]);
    }

    while(flag==0) {
        cont=0;
        for(x=0; x<9; x++) {
            if(meses[x] > meses[x+1]) {
                aux = meses[x];
                meses[x] = meses[x+1];
                meses[x+1] = aux;
                aux = dias[x];
                dias[x] = dias[x+1];
                dias[x+1] = aux;
                cont++;
            }
        }
        if(cont==0) {
            flag=1;
        }
    }
    flag=0;
    while(flag==0) {
      cont=0;
      for(x=0; x<9; x++) {
          if(dias[x] > dias[x+1] && meses[x] == meses[x+1]) {
              aux = dias[x];
              dias[x] = dias[x+1];
              dias[x+1] = aux;
              cont++;
          }
      }
      if(cont==0) {
          flag=1;
      }
    }

    for(x=0; x<10; x++) {
        printf("%d/%d\n",dias[x],meses[x]);
    }

    return 0;
}
