#include <stdio.h>
#include <string.h>

#define TAMANHO 100


int main() {

  char str[TAMANHO], caractere;
  int contemOCaractere = 0;

  printf("DIGITE UM TEXTO: ");
  fgets(str, sizeof(str), stdin);

  printf("\n");

  printf("DIGITE UM CARACTERE: ");
  scanf("%c", &caractere);

  printf("\n");

  for(int i = 0;i < strlen(str);i++) {
    if (str[i] == caractere) {
      contemOCaractere++;
      break;
    }
  }

  (contemOCaractere) ? printf("CONTÉM O CARACTERE") : printf("NÃO CONTÉM O CARACTERE");

  printf("\n");

  return 0;
}