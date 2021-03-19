#include <stdio.h>

int main() {

  unsigned char valor1 = 16, valor2 = 19;
                             
  valor1 = valor1 ^ valor2; // 00011

  printf("RESULTADO: %d \n", valor1);

  return 0;
}