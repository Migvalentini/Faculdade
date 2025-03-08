// Fazer uma função que gere e retorne uma string S com N caracteres C. O protótipo da função é dado por: char * gerastr(int n, char c)

#include <stdio.h>
#include <stdlib.h>

char * gerastr(int n, char c) {
    char *s = (char *)malloc((n+1)*sizeof(char));
    int i;

    if(s==NULL) {
        printf("Erro na alocacao");
        exit(0);
    }

    for(i=0; i<n; i++) {
        s[i]=c;
    }
    s[i]='\0';
    
    return s;
}

int main() {
    int n;
    char c;

    printf("Digite o caracter e o numero de vezes: \n");
    scanf("%c %d",&c,&n);
    
    char *s = gerastr(n,c);

    printf("%s",s);

    free(s);
}