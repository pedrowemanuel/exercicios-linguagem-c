#include <stdio.h>

struct Aluno {
  float nota1;
  float nota2;
  float media;
  // float notas[3];
};

int main() {

  struct Aluno a1;

  printf("Digite a nota 1: ");
  scanf("%f", &(a1.nota1));
  printf("Digite a nota 2: ");
  scanf("%f", &(a1.nota2));

  a1.media = (a1.nota1 + a1.nota2)/2;
  printf("\nMédia das notas %.2f e %.2f é igual a:  %.2f\n", a1.nota1, a1.nota2, a1.media);

  return 0;
}