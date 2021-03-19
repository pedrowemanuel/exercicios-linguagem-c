#include <stdio.h>

typedef enum {
  BRANCO,
  PRETO,
  VERMELHO,
  AZUL
} cor;

int main() {
  cor c;
  char *cores[] = {"BRANCO", "PRETO", "VERMELHO", "AZUL"}, *coresHexa[] = {"#FFFFFF", "#000000", "#ED4F1C", "#2E5ACC"};

  for(c = BRANCO; c <= AZUL; c++)
    printf("%s: %s \n", cores[c], coresHexa[c]);

  return 0;
}