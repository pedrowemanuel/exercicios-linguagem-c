// Não fiz essa questão na prova estou fazendo agr

#include <stdio.h>
#define N 5

int main() {
  int mae = 0, matrizA[N], matrizB[N], i;

  for(i = 0;i < N;i++) 
    matrizB[i] = i+1;
  
  for(i = 0;i < N;i++) {
    printf("Adicione um valor a matriz A: ");
    scanf("%d", &matrizA[i]);
    printf("\n");
  }

  for(i = 0;i < N;i++) 
    mae += matrizA[i] - matrizB[i];
  
  mae /= N;

  printf("O MAE dos vetores é: %d\n", mae);
  
  return 0;

  // Tá correta?
}