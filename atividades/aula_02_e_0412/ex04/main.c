#include <stdio.h>

int main() {

  int valor1, valor2;
  float resultado;

  printf("Digite um número: ");
  scanf("%d", &valor1);

  printf("Digite outro número: ");
  scanf("%d", &valor2);
  
  resultado = (float)valor1 / valor2;

  printf("O resultado da divisão é: %.2f \n", resultado);
  
  return 0;
}