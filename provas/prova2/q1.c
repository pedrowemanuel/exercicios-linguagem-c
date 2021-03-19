#include <stdio.h>
#include <stdlib.h>

int main() {

  int *a = NULL, *b = NULL, *c = NULL, m, k, l, i, x, y, contidoEmC = 0, verificaC = 0;

  printf("Qual o tamanho do vetor A: \n");
  scanf("%d", &k);
  a = malloc(k * sizeof(int));

  printf("Qual o tamanho do vetor B: \n");
  scanf("%d", &m);
  b = malloc(m * sizeof(int));

  l = (k < m) ? k : m;
  c = malloc(l * sizeof(int));

  if (!a || !b || !c) {
    printf("Não existe memória disponível\n");
    exit(1);
  }

  // ler os dados
  for(i = 1; i <= k ; i++)
    scanf("%d", a+i);

  for(i = 1; i <= m; i++)
    scanf("%d", b+i);

  for(i = 1; i <= k; i++) {
    for(x = 1; x <= m; x++) {
      if (*(a + i) ==  *(b + x))
      {
        for(y = 1; y <= k; y++) 
          contidoEmC = (*(a + i) == *(c + y)) ? 1 : 0;
        
        if (!contidoEmC) {
          verificaC++;
          *(c + i) = *(a + i);
        }
      }
    }
  }

  if (verificaC)
  {
    for(i = 1; i <= l; i++) {
      if (*(c + i))  printf("C[%d]: %d \n", i, *(c + i));
    }
      
  } else {
    printf("Vetor C vazio!\n");
  }
  
  free(a);
  free(b);
  free(c);

  return 0;
}