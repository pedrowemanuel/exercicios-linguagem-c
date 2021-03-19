// 22. Escreva um programa que leia um n ́umero inteiro e determine e imprima quantos d ́ıgitos no inteiro sao algarismos 7.

#include <stdio.h>

int main() {

  int numero, resto, possuiSete = 0;

  printf("DIGITE UM NÚMERO INTEIRO: ");

  scanf("%d",&numero);

  for (; numero > 0;){
    resto = numero % 10;

    if(resto == 7) possuiSete++;

    numero /= 10;
  }

  (possuiSete) 
  ? printf("CONTÉM PELO MENOS UM 7. \n")
  : printf("NÃO CONTÉM NENHUM 7 \n");

  return 0;
}