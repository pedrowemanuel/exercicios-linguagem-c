#include <stdio.h>
#include <stdlib.h>
#include "operacoes.h"

int main(int argc, char *argv[]) {

    int a, b;

    if (argc < 3) {
        printf("Formato: \n\t %s <valor1> <valor2>\n", argv[0]);
        exit(1);
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    
    printf("\t 0 -> Sair \n");
    printf("\t 1 -> Somar \n");
    printf("\t 2 -> Subtrair \n");
    printf("\t 3 -> Multiplicar \n");
    printf("\t 4 -> Dividir \n");

    scanf("%u", &operacao);

    switch (operacao) {
        case Sair:
            exit(0);
        break;
        case Somar:
            printf("Resultado: %d\n", somar(a, b));
        break;
        case Subtrair:
            printf("Resultado: %d\n", subtrair(a, b));
        break;
        case Multiplicar:
            printf("Resultado: %d\n", multiplicar(a, b));
        break;
        case Dividir:
            printf("Resultado: %.2f\n", dividir(a, b));
        break;
        default:
            printf("Escolha uma opção válida!\n");
        break;
    }
}
