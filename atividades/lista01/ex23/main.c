#include <stdio.h>

int main(){
    int numero,numeroInvertido = 0, resto, guardarNumero;

    printf("DIGITE TRÊS NÚMEROS: ");
    scanf("%d",&numero);

    guardarNumero = numero;

    while (numero > 0){
        resto = numero % 10;
        numeroInvertido = (numeroInvertido * 10) + resto;
        numero = numero / 10;
    }
    
    printf("%d INVERTIDO É: %d \n",guardarNumero, numeroInvertido);

    return 0;
}