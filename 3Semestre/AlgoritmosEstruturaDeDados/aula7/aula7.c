#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stackP {
    char f[20];
    struct stackP *prox;
}; typedef struct stackP StackP;
 
StackP *letters[26];

int main() {
    int i, pos;

    for(i=0; i<26; i++) {
        letters[i] = NULL;
    }

    
    StackP *new;
    new = (StackP*)malloc(sizeof(StackP));
    strcpy(new->f, "Acai");
    new->prox = NULL;
    
    pos = (int)(new->f)[0];
    pos = pos - 'a';
    letters[pos] = new;

    return 0;
}
