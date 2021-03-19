#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MAX 10

struct Node {
  int x;
  struct Node* prox;
};

void imprimiAtuaEproximo(struct Node *);

int main() {

  struct Node *pN = NULL;
  int i;

  srand(time(NULL));

  return 0;

}

void imprimiAtuaESeguinte(struct Node * n) {

    printf("x: %d", n->x);

    if ((n->prox) == NULL) {
        printf("Este é o último elemento da lista");
    } else { 
        printf("Seguinte: %d", (n->prox)->x);
    }
}