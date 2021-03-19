// 20. Construir um programa que apresente como resultado o fatorial dos valores  ́ımpares situados na faixa numero de 1 a 10.

#include <stdio.h>

int main() {

  int fatorial;
  
  for(int numero = 1; numero <= 10; numero++) {
    if(numero % 2) {

      fatorial = 1;

      for(int i = numero; i >= 1; i--) 
        fatorial = fatorial * i;

      printf("O FATORIAL DE %d É: %d \n", numero, fatorial);
    }
  }
  return 0;
}