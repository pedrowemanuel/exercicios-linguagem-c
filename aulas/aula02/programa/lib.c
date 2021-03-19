#include <stdio.h>

void imprime_soma() {

    extern int valor_1;
    extern int valor_2;

    int resultado = valor_1 + valor_2;

    printf("O resultado é: %d \n", resultado);

    return;
}