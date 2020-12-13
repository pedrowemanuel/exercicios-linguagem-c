#include <stdio.h>

int main() {

    // exercicio 3

    unsigned int x; // Pre-requisito do sistema é somente receber valores positivos.

    printf("Digite um número (Entre somente com valores positivos): ");
    scanf("%u", &x); 

    (x % 2) ? printf("%u é IMPAR\n",x) : printf("%u é PAR\n",x);

    return 0;
}