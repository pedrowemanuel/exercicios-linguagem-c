#include <stdio.h>

int main() {

  int *ponteiroX = NULL, x = 10;
  char str[2], *ponteiroStr;

  ponteiroX = &x;

  printf("ENDERECO de x: %p \n VALOR DE X: %d\n", ponteiroX, x);

  //////////////////////////

  str[0] = 'a';
  str[1] = 'b';

  ponteiroStr = str; // aponta para o endereco da primeira posicao do array

  printf("VALOR str[1]: %c\n", *(ponteiroStr + 1)); // imprime b

  return 0;
}