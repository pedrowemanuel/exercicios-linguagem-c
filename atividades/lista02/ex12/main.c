#include <stdio.h>

int main(){

    int numero;

    printf("DIGITE UM NÚMERO INTEIRO: ");
    scanf("%d", &numero);

    for (int contador = 0; contador <= 10; contador++)
      printf("%d x %d = %d\n", numero, contador, numero * contador);

    return 0;
}