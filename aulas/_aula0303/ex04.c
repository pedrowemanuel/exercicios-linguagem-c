#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MAX 10

struct Node {
  int x;
  int y;
  float z;
  struct Node* prox;
};

void media(struct Node* n);

int main() {

  struct Node n[TAM], *pN = NULL;
  int i;

  srand(time(NULL));

  // atribuir o endereço de n à pN
  pN = n;

  // atribuicao dos dados
  for(i = 0;i < TAM;i++) {
    (pN + i)->x = rand() % MAX; 
    (pN + i)->y = rand() % MAX;
    
    // se for o último atribui para o valor do primeiro
    (pN + i)->prox = (i != (TAM - 1)) ? (pN + i + 1) : pN; 
  }

  // processamento
  for(i = 0;i < TAM;i++) 
    media((pN + i));

  // saida
  for(i = 0;i < TAM;i++) {
    printf("Node = %d \n", i);
    printf("Média do atual = %.2f \n", (pN + i)->z);
    printf("Média do próximo = %.2f \n\n", ((pN + i)->prox)->z);
  }

  return 0;

}

void media(struct Node* n) {
  n->z = ((n->x) + (n->y)) / 2.0;
}