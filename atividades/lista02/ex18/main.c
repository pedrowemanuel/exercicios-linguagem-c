#include <stdio.h>

int main(){
    /* Elaborar um programa que apresente a m´edia aritm´etica dos n´umeros inteiros existentes entre uma faixa especificada pelo usu´ario. */
    int i, valor, valorfinal;
    float soma = 0, numero = -1;

    printf("\nInforme o início: \n");
    scanf("%d", &valor);
    printf("Informe o fim: \n");
    scanf("%d", &valorfinal);

    for (i = valor; i < valorfinal; i++) { 
      soma += i;
      numero++;
    }

    printf("\nMédia: %.2f \n\n", soma/numero);

    return 0;
}