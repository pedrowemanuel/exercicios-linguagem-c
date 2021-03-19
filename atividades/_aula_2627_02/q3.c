#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct vetorRand {
  int *ponteiro;
  unsigned tamanho;
  float media;
};
int main() {
  struct vetorRand v1;
  int *ponteiro = NULL;
  unsigned int tamanho, i;

  printf("Digite a quantidade de elementos do vetor: ");
  scanf("%u", &tamanho);
  ponteiro = (int *) malloc(tamanho * sizeof(int));

  if(!ponteiro) {
    printf("Sem memória o suficient!\n");
    exit(1);
  }

  srand(time(NULL));

  for(i = 0;i < tamanho;i++) 
    *(ponteiro + i) = rand() % 10;
  
  v1.ponteiro = ponteiro;
  v1.tamanho = tamanho;

  for(i = 0;i < tamanho;i++) 
    v1.media += (float) *(ponteiro + i);

  v1.media /= tamanho;

  // exibir os dados
  for(i = 0;i < tamanho;i++) 
    printf("vetor[%d]: %d\n", i,*(v1.ponteiro + i));

  printf("Média dos valores do vetor: %.2f\n", v1.media);

  return 0;
}