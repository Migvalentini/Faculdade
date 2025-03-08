// Escreva a função
// int strin(const char str1[],const char str2[])
// A função verifica se str1 está contido em str2. Em caso afirmativo, a função retorna 1, em caso negativo, 0. Por exemplo, as chamadas
// strin("ASTRO", "ASTRONAUTA");
// strin("astro", "mastro"); retornam 1,
// mas a chamada
// strin("carro", "caravana"); retorna 0

#include <stdio.h>

int strin(char str1[100], char str2[100]) {
    int x,k;

    for(x=0; str2[x]!='\0'; x++) {
        if(str2[x]==str1[0]) {
            k=0;
            while(str1[k]!='\0'&&str2[x+k]!='\0'&&str1[k]==str2[x+k]) {
                k++;
            }
            if(str1[k]=='\0') {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    printf("%d\n",strin("ASTRO", "ASTRONAUTA"));
    printf("%d\n",strin("astro", "mastro")); 
    printf("%d",strin("carro", "caravana"));

    return 0;
}