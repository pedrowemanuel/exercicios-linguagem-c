#include <stdio.h>
#define TAM 3

struct Curso {
  char nome[20];
  unsigned int semestre;
};

struct Aluno {
  float notas[2];
  float media;
  struct Curso curso;
};

float media(float a, float b);
float media2(struct Aluno a);

int main() {

  struct Aluno alunos[TAM];
  int i;
  float mediaAlunos = 0;

  // entrada dos dados
  for(i = 0; i < TAM; i++) {
    printf("Digite a nota 1 do aluno %d: ", i+1);
    scanf("%f", &(alunos[i].notas[0]));

    printf("Digite a nota 2 do aluno %d: ", i+1);
    scanf("%f", &(alunos[i].notas[1]));

    printf("Digite o curso do aluno %d: ", i+1);
    scanf("%s", alunos[i].curso.nome);
    

    // alunos[i].media = media(alunos[i].notas[0], alunos[i].notas[1]);
  }

  // processamento
  for(i = 0; i < TAM; i++)
    alunos[i].media = media2(alunos[i]);

  for(i = 0; i < TAM; i++)
    mediaAlunos += alunos[i].media;
  
  mediaAlunos /= TAM;

  // saída dos dados
  for(i = 0; i < TAM; i++) {
    printf("Aluno: %d \n", i+1);
    printf("Curso: %s \n", alunos[i].curso.nome);
    printf("Média: %.2f \n", alunos[i].media);
    printf("\n---------\n");

    // alunos[i].media = media(alunos[i].notas[0], alunos[i].notas[1]);
  }

  printf("\n\nMédia dos alunos: %.2f \n", mediaAlunos);

  return 0;
}

float media(float a, float b) {
  return (a + b)/2;
}

float media2(struct Aluno a) {
  return (a.notas[0] + a.notas[1])/2;
}