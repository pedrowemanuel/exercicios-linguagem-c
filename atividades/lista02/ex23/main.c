// 23. Escreva um programa que mostre a diferenca entre pr ́e-incrementar e pos-incrementar usando o operador –.

#include <stdio.h>

int main() {

  int numero1 = 1, numero2 = 1;

  printf("VALOR PÓS-INCREMENTADO: %d \n", numero1--);
  printf("VALOR PRÉ-INCREMENTADO: %d \n", --numero2);

  return 0;
}