#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

struct Node {
  int x;
  struct Node *prox;
};

void imprimir(struct Node *pN);
void ordenar(struct Node *pN);

int main() {

  struct Node head, n1, n2, n3, n4;

  srand(time(NULL));

  head.prox = &n1;
  
  n1.x = rand() % MAX;
  n1.prox = &n2;

  n2.x = rand() % MAX;
  n2.prox = &n3;

  n3.x = rand() % MAX;
  n3.prox = &n4;
  
  n4.x = rand() % MAX;
  n4.prox = NULL;

  printf("%d\n", n1.x);
  printf("%d\n", n2.x);
  printf("%d\n", n3.x);
  printf("%d\n", n4.x);

  printf("\n ------------- \n");

  imprimir(&head);

  return 0;

}

void imprimir(struct Node *pN) {
  struct Node *i;

  for(i = pN->prox;i != NULL;i = i->prox) {
    printf("%d\n", i->x);
  }
}