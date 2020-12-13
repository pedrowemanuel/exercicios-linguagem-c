#include <stdio.h>

int main() {

    unsigned int x;

    printf("Digite um número positivo: ");
    scanf("%u", &x); 

    (x % 2) ? printf("%u é ÍMPAR\n",x) : printf("%u é PAR\n",x);

    return 0;
}