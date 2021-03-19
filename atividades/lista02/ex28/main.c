/* 28. Escreva um programa que receba dois valores num ́ericos X e Y (unsigned char ) e esconda todos os bits
de X em cada um dos bits menos significativos dos 4 elementos imediatamente anteriores e posteriores
a Y. (Obs.: Nao utilizar valores para Y menores que 5). */    

#include <stdio.h>


int addBitX(unsigned char x, unsigned char i) {

  unsigned char operacacao, iComBitMenosSignZero;

  operacacao = (x & 1);
  iComBitMenosSignZero = (i >> 1);
  iComBitMenosSignZero = (1 << iComBitMenosSignZero);

  operacacao = operacacao | iComBitMenosSignZero;

  printf("VALOR: %d \n", i);
  printf("VALOR COM UM BIT DO X: %d \n", operacacao);

  printf("============== \n");

  return 0;
}

int main() {

  unsigned char x, y, operacacao;

  printf("DIGITE O VALOR DE X: ");
  scanf("%hhu", &x);
  printf("\n");

  printf("DIGITE O VALOR DE Y: ");
  scanf("%hhu", &y);
  printf("\n");

  for(int i = y - 1;i >= y - 4; i--) {
    addBitX(x, i);
    x = (x>>1);
  }

  for(int i = y + 1;i <= y + 4; i++) {
    addBitX(x, i);
    x = (x>>1);
  }

  return 0;
}
