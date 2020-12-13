#include <stdio.h>

int main() {

  unsigned char valor1 = 16; // 10000
  unsigned char valor2 = 19; // 10011
                             // 00011
  valor1 = valor1 ^ valor2;

  printf("RESULTADO: %d \n", valor1);

  return 0;
}