#include <stdio.h>

struct Professor {
  char nome[30];
  int matricula;
};

struct Disiciplina {
  char nome[20];
  int cargaHoraria;
  struct Professor professor;
};

int main() {

  struct Disiciplina d1;
  struct Professor p1;

  return 0;
}