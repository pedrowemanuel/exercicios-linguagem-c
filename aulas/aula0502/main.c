#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int m[2][2];
  int *p = m[0], k;

  m[0][0] = 1;
  m[0][1] = 2;
  m[1][0] = 3;
  m[1][1] = 4;

  for(k = 0; k < (2 * 2); k++) {
    if(k != 0 && (k % 2 == 0)) printf("\n--------- \n");

    printf("%d -- ", *(p + k));
  }

  printf("\n");

  ///////// Pseudoaleatório ///////////

  int v[10];

  srand(time(NULL));

  for(k = 0; k < 10; k++) {
    v[k] = rand() % 100 + 20; // gerar valores aleatórios de 20 até 120
    printf("%d \n", v[k]);
  }

  // formula 
  // int M[2][3];
  // *p = M[0]
  // M[2][1] = p + 2 * NumerodeCol + 1;
  // em um loop
  // valor = p + i * NumerodeCol + j; // j é o deslocamento
  // encontrar o quadro
  // valor % 10
  return 0;

}