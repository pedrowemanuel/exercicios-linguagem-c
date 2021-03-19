#include <stdio.h>
#define TAM 3

struct Aluno {
  float notas[2];
  float media;
};

float media(float a, float b);

int main() {

  struct Aluno alunos[TAM];
  int i;
  float mediaAlunos = 0;

  for(i = 0; i < TAM; i++) {
    printf("Digite a nota 1 do aluno %d: ", i+1);
    scanf("%f", &(alunos[i].notas[0]));
    printf("Digite a nota 2 do aluno %d: ", i+1);
    scanf("%f", &(alunos[i].notas[1]));

    alunos[i].media = media(alunos[i].notas[0], alunos[i].notas[1]);
  }

  for(i = 0; i < TAM; i++)
    mediaAlunos += alunos[i].media;
  
  mediaAlunos /= TAM;

  printf("\nMédia dos alunos: %.2f \n", mediaAlunos);

  return 0;
}

float media(float a, float b) {
  return (a + b)/2;
}