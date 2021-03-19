// operacoes com estruturas

#include <stdio.h>

struct coor {
  char x; // 2 byts
  int y; // 4 byts
  double z; // 8 byts
};

int main() {
  // alinhamento e preenchimento
  struct coor c = {'a', 1, 2.3};
  printf("TAMANHO: %lu", sizeof(c)); // resultado 16

  // não é possível comparar estruturas
  return 0;
}