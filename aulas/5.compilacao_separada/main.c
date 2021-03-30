#include <stdio.h>
#include <stdlib.h>
#include "operacoes.h"
#include "menu.h"

int main(int argc, char *argv[]) {

    int a, b;

    if (argc < 3) {
        printf("Formato: \n\t %s <valor1> <valor2>\n", argv[0]);
        exit(1);
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    
    imprimirMenu();
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
