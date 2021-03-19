#include <stdio.h>

int main() {

    if (0) {
        printf("VERDADEIRO \n");
    } else {
        printf("FALSO \n");
    }

    if (!0)
        printf("VERDADEIRO \n");
    else 
        printf("FALSO \n");

    int numero;

    printf("DIGITE UM NUMERO: ");

    scanf("%d", &numero);

    printf("O numero %d é %s !! \n",
        numero, (numero % 2 ? "impar" : "par"));

    printf("DIGITE 1 PARA CONTINUAR OU 0 PARA SAIR: ");

    scanf("%d", &numero);
    
    switch (numero)
    {
        case 0:
            printf("SAIU DO SISTEMA \n");
            break;
        case 1:
            printf("CONTINUA NO SISTEMA \n");
            break;
        
        default:
            break;
    }

    return 0;
}