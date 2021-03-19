// 21. Um palındromo  ́e um numero, ou frase textual, que pode ser lido da mesma forma da esquerda para a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco dıgitos  ́e um pal ́ındromo: 12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco d ́ıgitos e determine se ele  ́e ou n ̃ao um pal ́ındromo. [Dica: use os operadores de divis ̃ao e modulo para separar o numero em seus dıgitos individuais.]

#include <stdio.h>

int main() {

  int numero,numeroMantido,numeroInvertido = 0,resto,numeroInicial;

  printf("DIGITE UM NÚMERO INTEIRO DE CINCO DIGITOS: ");

  scanf("%d",&numero);
  numeroInicial = numero;

  numeroMantido = numero;

  for (; numero > 0;){
    resto = numero % 10;

    numeroInvertido = numeroInvertido * 10 + resto;
    
    numero /= 10;
  }

  (numeroInvertido == numeroInicial) ?
    printf("É PALÍNDRO! NÚMERO INICIAL: %d NÚMERO FINAL: %d \n",numeroInicial,numeroInvertido)
  :
    printf("NÃO É PALÍNDRO! NÚMERO INICIAL: %d NÚMERO FINAL: %d \n",numeroInicial,numeroInvertido);

  return 0;
}