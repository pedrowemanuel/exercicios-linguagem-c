/*
    Escreva um programa em C que organize em uma Estrutura o endere ̧co de um vetor alocado dinamica-
    mente, a quantidade de elementos desse vetor e a sua m ́edia. Para c ́alculo da m ́edia, crie uma fun ̧c ̃ao o
    mais gen ́erica (reutiliz ́avel) poss ́ıvel. Observe que o vetor n ̃ao  ́e um elemento da Estrutura.
   
    Nas quest ̃oes 2 a 4, utilize apenas aritm ́etica de ponteiros para manipular as matrizes/vetores.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct VetorRand {
    int *ponteiro;
    unsigned quantidade_elementos;
    float media;
} vr;

float media(int *, int);

int main() {
  vr v1;
  int *ponteiro = NULL;
  unsigned int quantidade_elementos, i;

  printf("Digite a quantidade de elementos do vetor: ");
  scanf("%u", &quantidade_elementos);
  ponteiro = (int *) malloc(quantidade_elementos * sizeof(int));

  if(!ponteiro) {
    printf("Sem memória o suficiente!\n");
    exit(1);
  }

  if(!quantidade_elementos) {
    printf("O vetor não terá nenhum elemento!\n");
    exit(1);
  }

  srand(time(NULL));

  for(i = 0;i < quantidade_elementos;i++) 
    *(ponteiro + i) = rand() % 10;
  
  v1.ponteiro = ponteiro;
  v1.quantidade_elementos = quantidade_elementos;
  v1.media = media(v1.ponteiro, v1.quantidade_elementos);

  // exibir os dados
  for(i = 0;i < v1.quantidade_elementos;i++) 
    printf("vetor[%d]: %d\n", i,*(v1.ponteiro + i));

  printf("Média dos valores do vetor: %.2f\n", v1.media);

  return 0;
}

float media(int *ponteiro, int quantidade_elementos) {

    int i;
    float media = 0;

    if (quantidade_elementos)
    {
        for(i = 0;i < quantidade_elementos;i++) 
            media += (float) *(ponteiro + i);

        media /= quantidade_elementos;

        return media;
    }
    
    return 0;
    
}