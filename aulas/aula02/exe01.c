#include <stdio.h>

int main() {

    int a,b,soma;

    printf("Digite o primeiro numero: ");

    scanf("%d", &a);    

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    soma = a + b;

    printf("Resultado: %d\n" , soma);
        
    return 0;
}