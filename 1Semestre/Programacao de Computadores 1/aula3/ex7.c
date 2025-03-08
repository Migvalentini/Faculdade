// Desenvolva um programa que solicite ao usuário digitar dois números inteiros. 
// O programa deverá verificar se estes números são múltiplos entre si. 
// Para realizar esta verificação, devemos dividir os dois números entre si e verificar se o resto da divisão é igual a zero.
// O programa deve mostrar na tela uma das seguintes mensagens "São múltiplos" ou "Não são múltiplos".
// Exemplo: se o usuário informar os números 3 e 21, a mensagem “ São múltiplos” deverá ser mostrada na tela. 
// Se o usuário informar os números 5 e 7, a mensagem “ Não são múltiplos” deverá ser mostrada na tela.
// É importante salientar que para resolver este problema, duas divisões devem ser realizadas. 
// No primeiro exemplo, devemos dividir 3/21 e 21/3. 
// Se uma das duas divisões resultar em resto zero (21/3), então os dois números serão múltiplos.

#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite 2 numeros inteiros: ");
    scanf("%d %d",&n1,&n2);

    if (n1%n2==0 || n2%n1==0) {
        printf("Sao multiplos");
    } else {
        printf("Nao sao multiplos");
    }

    return 0;
}
