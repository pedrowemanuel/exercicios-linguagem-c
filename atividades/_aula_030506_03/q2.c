#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int x;
  int y;
  float z; // média
} nd;

void media(nd* n);

int main() {

  nd *pNode = malloc(sizeof(nd));

  pNode->x = 1; 
  pNode->y = 4;

  media(pNode);

  printf("média entre %d e %d = %.2f\n", pNode->x, pNode->y, pNode->z); 

  return 0;
}

void media(nd* pN) {
  pN->z = (float) ((pN->x) + (pN->y)) / 2;
}