#include <stdio.h>

// REVISE ESSA QUESTÃO. 

int main() {

  unsigned char x,y, operacao, yComBitsMenosSignZero;

  printf("Digite o valor do x: ");
  scanf("%hhu", &x);

  printf("\nDigite o valor do y: ");
  scanf("%hhu", &y);

  printf("\n");

  for(int i = 1;i <= 3;i++) {
    operacao = (x - i) & i;

    yComBitsMenosSignZero = (y >> i);
    yComBitsMenosSignZero = (i << yComBitsMenosSignZero);

    y = operacao | yComBitsMenosSignZero;

  }

  printf("Y: %d \n", y);

  return 0;
}