#include <stdio.h>
#include <stdlib.h>
#define TAM 3

struct Node {
  int x;
  int y;
  float z;
};

void media(struct Node* n);

int main() {

  struct Node n[TAM], *pN = NULL;
  int i;

  // atribuir o endereço de n à pN
  pN = n;

  // atribuicao dos dados
  for(i = 0;i < TAM;i++) {
    (pN + i)->x = i + 2; 
    (pN + i)->y = i + 4;
  }

  // processamento
  for(i = 0;i < TAM;i++) 
    media((pN + i));

  // saida
  for(i = 0;i < TAM;i++) {
    printf("media(%d, %d) = %.2f \n", (pN + i)->x, (pN + i)->y, (pN + i)->z);
  }

  return 0;

}

void media(struct Node* n) {
  n->z = ((n->x) + (n->y)) / 2.0;
}