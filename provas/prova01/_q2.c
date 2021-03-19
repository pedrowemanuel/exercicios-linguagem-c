#include <stdio.h>

int verificarPontos(float x, float y) {
  if(x < 0 || y < 0) return 0;

  if(((x*x) + (y*y)) > 1) return 0;

  return 1;
}

int main() {
  float x,y;

  printf("Digite o valor do x: ");
  scanf("%f", &x);

  printf("\nDigite o valor do y: ");
  scanf("%f", &y);

  (verificarPontos(x, y)) ? printf("Pertence a figura!") : printf("Não pertence a figura!");

  printf("\n");

  return 0;
}