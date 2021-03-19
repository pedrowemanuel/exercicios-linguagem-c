#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int x;
  int y;
} nd;

int main() {

  nd n, *pN = NULL;
  
  // atribuir o endereço de n à pN
  pN = &n;

  pN->x = 1; 
  pN->y = 4;

  printf("x: %d, y: %d \n", pN->x, pN->y);  // -> usar quando for usado ponteiros para estruturas

  return 0;

} 