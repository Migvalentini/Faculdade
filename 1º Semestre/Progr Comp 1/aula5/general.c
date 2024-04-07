#include <stdio.h>

int main () {
     int a, b, c, d, e;
    printf("Digite cinco numeros inteiros entre 1 e 6, correspondentes ao arremesso de 5 dados no jogo do general, em ordem crescente:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if (a == b && b == c && c == d && d == e) 
        printf("Os 5 valores sao iguais.\n");
    else if ((a == b && b == c && c == d) || (b == c && c == d && d == e))
            printf("Ha 4 valores iguais e um diferente.\n");
        else if ((b == a + 1) && (c == b + 1) && (d == c + 1) && (e == d + 1))
                printf("Os valores formam uma sequencia.\n");
            else if ((a == b && ((c == d && d == e) || (b == c && d == e))) || (d == e && a == b && b == c))
                    printf("Os valores formam um full-hand.\n");
                else
                    printf("Nenhuma das combinacoes acima.\n");
    return 0;
}
