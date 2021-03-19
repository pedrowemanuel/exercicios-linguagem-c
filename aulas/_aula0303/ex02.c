#include <stdio.h>
#include <stdlib.h>


struct Node {
  int x;
  int y;
  float z; // média
};

void media(struct Node* n);

int main() {

  struct Node *pNode = malloc(sizeof(struct Node));

  if(!pNode) {
    printf("Sem espaço!");
    exit(1);
  }

  pNode->x = 1; 
  pNode->y = 4;

  media(pNode);

  printf("%d + %d = %.2f\n", pNode->x, pNode->y, pNode->z); 

  free(pNode);

  return 0;

}

void media(struct Node* pN) {
  pN->z = (float) ((pN->x) + (pN->y)) / 2;
}