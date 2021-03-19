#include <stdio.h>
#define TAMANHO 15

int main() {

  int vetor[TAMANHO], soma = 0, valor;

  for(int i = 0;i < TAMANHO;i++) {
    printf("DIGITE UM VALOR INTEIRO: ");
    scanf("%d", &valor);
    printf("\n");

    soma += valor;
  }

  printf("A SOMA DOS VALORES INTEIROS: %d", soma);
  printf("\n");

  return 0;
}