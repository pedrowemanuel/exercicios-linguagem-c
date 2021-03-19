#include <stdio.h>

int main(void) {
    int numero, fatorial;

    printf("DIFITE UM NÚMERO: ");
    scanf("%d", &numero);
    fatorial = numero;

    for(int i = numero-1; i > 0; i--) 
        fatorial = fatorial*i;
    
    printf("O FATORIAL DE %d É %d \n", numero, fatorial);

  return 0;
}