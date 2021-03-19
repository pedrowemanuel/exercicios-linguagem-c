#include <stdio.h>
#define LINHAS 1024
#define COLUNAS 768

int main() {

  int matriz[LINHAS][COLUNAS], matrizBinarizada[LINHAS][COLUNAS], limiar;

  printf("Digite o valor limiar: ");
  scanf("%d", &limiar);

  for(int l = 0;l < LINHAS;l++) // DICA: Declarar no laço complica em alguns compiladores. Evitar!
    for(int c = 0;c < COLUNAS;c++) 
      matriz[l][c] = l*c;


  for(int l = 0;l < LINHAS;l++){
    for(int c = 0;c < COLUNAS;c++) {
      matrizBinarizada[l][c] = (matriz[l][c] > limiar) ? 1 : 0;
    }
  }  

  for(int l = 0;l < LINHAS;l++) {
    for(int c = 0;c < COLUNAS;c++) {
      printf("[%d]", matrizBinarizada[l][c]);
    }

    printf("\n");
  } 

  printf("\n");

  return 0;
}