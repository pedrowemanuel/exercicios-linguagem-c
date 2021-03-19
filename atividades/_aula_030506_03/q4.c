#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MAX 10

typedef struct Node {
  int x;
  int y;
  float z;
  struct Node* prox;
} nd;

void media(nd* n);

int main() {

  nd *pN = NULL;
  int i;

  srand(time(NULL));

  // alocação de memória
  pN = malloc(TAM * sizeof(nd));

  // validação
  if(!pN) {
    printf("Sem memória o sufiente!\n");
    exit(1);
  }

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
    printf("Média do próximo = %.2f \n\n", (pN + i)->prox->z);
  }

  free(pN);
  
  return 0;

}

void media(nd* n) {
  n->z = ((n->x) + (n->y)) / 2.0;
}