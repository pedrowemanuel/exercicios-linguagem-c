#include <stdio.h>
#include <string.h>

#define TAM 11


int main() {

  // matriz

  double notas[3]; // 3 é o tamanho da matriz
  char str[TAM]; // 10 caracteres válidos + '0'
  char str2[] = "OLÁ!";

  notas[0] = 7.5;
  notas[1] = 8.0;
  notas[2] = 6.5;
  // -----------------------------

  printf("%s\n", str2);

  // -----------------------------

  printf("DIGITE UM TEXTO: ");
  fgets(str, sizeof(str), stdin); // limita o tamanho da string

  // ou scanf("%11[^\n]s", str); sem &

  printf("\nSTRING: %s \n", str);
  printf("TAMANHO: %li \n", strlen(str));

  // -----------------------------
  // funcoes string

  // strcpy = copiar strings
  // strcat = concatenar strings
  // strlen = tamanho da string
  // strcmp = retorna 0 se iguais

  return 0;
}