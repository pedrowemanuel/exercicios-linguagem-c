#include <stdio.h>

int main(void) {

  int stop = 1, numero = 0;

  while(1) {

    if(numero % 2) {
      numero++;
      continue;
    }
    
    printf("NÚMERO PAR: %d \n", numero);
    numero++;

    printf("\nDESEJA VER OUTRO NÚMERO PAR? \n");
    printf("0 - SIM, 1 - NÃO: ");
    scanf("%d", &stop);
    printf("\n");

    if(stop) break;
    
  }

  printf("SAIU DO PROGRAMA! \n");

  return 0;
}