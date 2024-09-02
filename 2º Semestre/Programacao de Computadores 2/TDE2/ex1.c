//Faça um programa em linguagem C que leia uma string e verifique se essa corresponde a um endereço de IP (Internet Protocol) válido. 
//Um IP corresponde a uma sequencia de 4 valores numéricos compreendidos no intervalo [0-255] e separados entre si por um carácter “.”

// String lida	     Saída Gerada
// 200.135.80.9	     IP válido
// 192.168.1.1	     IP válido
// 8.35.67.74	     IP válido
// 257.32.4.5	     IP inválido
// 85.345.1.2	     IP inválido
// 1.2.a.4	         IP inválido
// 9.8b.234.5	     IP inválido
// .168.0.255	     IP inválido
// 192.168.0.255.2	 IP inválido
// 192.168.0.255.	 IP inválido
// 8.35..74	     IP inválido

#include <stdio.h>

int main() {
    char IP[100] = {'2','5','5','.','1','3','5','.','8','0','.','9','\0'};
    int x;

    //printf("Digite um IP: ");
    //gets(IP);
    
    int soma=0;

    for(x=0; IP[x]!='.'; x++) {
        soma+=IP[x];
    }

    printf("\nSoma Final: %d",soma);

    //printf("\n%.4s",IP);

    return 0;
}