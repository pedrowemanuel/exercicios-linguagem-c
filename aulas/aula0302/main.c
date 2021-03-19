#include <stdio.h>
#include <stdlib.h>

int main() {

  char str[80], *p;

  p = str; // *p aponta para o primeiro elemento da matriz

  printf("%d %d \n", str[4], *(p+4));

  //////////////

  int *notas[10], var = 2;

  notas[2] = &var;

  printf("%p: %d \n",notas[2], *notas[2]);

  ///// Indireção Múltipla /////////

  int x = 10, *p2 = NULL, **q = NULL;

  p2 = &x;

  q = &p2;

  printf("%d \n", **q);

  
  ///// Alocação Dinâmica /////////

  /* 
    malloc() => aloca memoria
    free() => desaloca memoria
    calloc() -> alloca e zera a memoria, mais demanda mais tempo
  */

  int *p3 = NULL, n, k, soma = 0;

  // tamanho dado em tempo de execucao

  printf("Qual o tamanho do vetor: \n");

  scanf("%d", &n);

  p3 = malloc(n * sizeof(int)); // espaco da heap

  if (!p3) {
    printf("Não existe memória \n");
    exit(1);
  }

  // ler os dados
  for(k = 0; k < n ; k++)
    scanf("%d", p3+k);

  // processamento
  for(k = 0; k < n; k++)
    soma += *(p3 + k);

  printf("Soma: %d \n", soma);

  free(p3);

  return 0;

}