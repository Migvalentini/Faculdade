// STRINGS

#include <stdio.h>
//#include <stdio_ext.h> para Linux

#define N 100

void geraString(char s[N], int n, char c) {
    int i;

    for(i=0; i<n; i++) {
        s[i]=c;
    }
    s[i]='\0';
}

void duplica(char str1[N], char str2[N]) {
    int i,j=0;

    for(i=0; str1[i]!='\0'; i++) {
        str2[j++]=str1[i];
        str2[j++]=str1[i];
    }
    str2[j]='\0';
}

int main() {
    //char str[N] = {'A', 'B', 'C', 'D', 'E', '\0'}; // \0 representa o final da string
    //char str[N] = {65, 66, 67, 68, 69, '\0'}; // Output: ABCDE
    //char str[N] = {97, 98, 99, 100, 101, '\0'}; // Output: abcde
    //char str[N] = {48, 49, 50, 51, 52, '\0'}; // Output: 01234
    //char str = "ABCDE"; // Aspas duplas é um vetor. Aspas simples é um caracter
    //int i;

    // for(i=0; str[i]!='\0';i++) {
    //     printf("%d %c\n",str[i],str[i]); // O formatador define a saída dos elementos
    // }

    //printf("%s",str); // %s exibe toda a string
    
    char str[N], c;
    char str1[N],str2[N];
    int n;

    // printf("Digite o numero de vezes: ");
    // scanf("%d",&n);
    
    // fflush(stdin);
    // printf("Digite o caracter: ");
    // scanf("%c",&c);

    // geraString(str, n, c);

    // printf("%s!!!",str);

    printf("\nDigite a string completa: ");
    gets(str1);
    //scanf("%s",str); // O espaço separa a string, então ao inserir "Miguel Valentini", ele armazena apenas "Miguel"
    duplica(str1,str2);
    printf("%s!!!",str2);
}