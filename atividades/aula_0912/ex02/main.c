#include <stdio.h>

int main(void) {

  for(int linha = 1; linha <= 4; linha++) {
    for(int coluna = 1; coluna <= linha; coluna++) 
      printf("%d", linha);

    printf("\n");
  }

  return 0;
}