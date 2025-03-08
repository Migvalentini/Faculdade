// Faça programa em C que recebe um string de até 1000 caracteres contendo um texto no qual as palavras são separadas pelo caractere '#' 
// que é seguido por um valor que identifica o número de espaços em brancos a serem inseridos pela função. 
// O programa deverá substituir o caracter '#' e o valor pelo número de espaços definidos.  
// Por exemplo, se o string original contém:
// Isto#4é#5uma#6pequena#1frase.
// após a chamada o string ficará:
// Isto    é     uma      pequena frase.

#include <stdio.h>
#include <string.h>

void insereEspacos(char str[1000], char str2[1000]) {
    int i, j, k;
	int num;

	k =0;
	for(i=0; str[i]!='\0'; ){
		if ( str[i] == '#'){
			i++;
			num = 0;
			while ( str[i] >='0' && str[i]<='9'){
				num = num * 10 + (str[i]-'0'); 
				i++;
			}	
			for(j=0;j<num;j++){
				str2[k++]= ' ';
			}	
		}
		else{
			str2[k++] = str[i++];
		}	

	}
	str2[k] ='\0';
}

int main() {
    //char str[1000] = "Isto#4eumapequenafrase";
    char str[1000] = "Isto#4e#5uma#6pequena#1frase";
    char str2[1000];

    insereEspacos(str,str2);

    printf("\n%s",str);
    printf("\n%s",str2);

    return 0;
}