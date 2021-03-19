#include <stdio.h>

int main() {

    // exercicio 2

    long int number;

    printf("Digite um número: ");
    scanf("%li", &number);
        
    number = (number > 0) ? number : number * -1;

    printf("Valor: %li \n ", number);

    return 0;
}