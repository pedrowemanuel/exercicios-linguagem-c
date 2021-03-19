#include <stdio.h>
#define TAMANHO 15

int main() {

  float vetor[TAMANHO], menor = 0, valor;

  for(int i = 0;i < TAMANHO;i++) {
    printf("DIGITE UM VALOR INTEIRO: ");
    scanf("%f", &valor);
    printf("\n");

    vetor[i] = valor;
    
    if (i == 0 || vetor[i] < menor)
      menor = vetor[i];
    
  }

  printf("O MENOR VALORE É: %f", menor);
  printf("\n");

  return 0;
}