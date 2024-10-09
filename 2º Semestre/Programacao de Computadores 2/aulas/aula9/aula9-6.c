// Fazer uma função que gere e retorne uma string com N caracteres aleatórios. 
// Cada caracter pode seraleatoriamente escolhido entre qualquer letra maiúscula, minúscula ou dígito. 
// O protótipo da função é dado por char *aleatoria(int n)

#include <stdio.h>
#include <time.h>

char *aleatoria(int n) {
    char *s = (char *)malloc((n+1)*sizeof(char));
    int i,op;

    if(s==NULL) {
        printf("Erro na alocacao");
        exit(0);
    }

    srand(time(NULL));

    for(i=0; i<n; i++) {
        op=rand()%3;
        if(op==0) {
            s[i]=rand()%26 + 'A';
        } else if(op==1) {
            s[i]=rand()%26 + 'a';
        } else if(op==2) {
            s[i]=rand()%10 + '0';
        }
    }
    s[i]='\0';

    return s;
}

int main() {
    int n;

    printf("Digite o numero de vezes: ");
    scanf("%d",&n);

    char *senha=aleatoria(n);

    printf("%s",senha);

    free(senha);
}