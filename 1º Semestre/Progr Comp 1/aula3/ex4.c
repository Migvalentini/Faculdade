#include <stdio.h>

int main () {
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    printf("%d\n", num);

    if (num%2==0)
    {
        printf("O numero %d eh par", num);
    } 
    else 
    {   
        printf("O numero %d eh impar", num); 
    } 
    
    return 0;
}
