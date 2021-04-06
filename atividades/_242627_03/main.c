#include <stdio.h>
#include "funcoes.h"

int main() {
    int a, b;
    printf("Digite um valor: \n");
    scanf("%d", &a);
    printf("Digite outro valor: \n");
    scanf("%d", &b);

    printf("Soma: %d\n", somar(a,b));
    return 0;
}