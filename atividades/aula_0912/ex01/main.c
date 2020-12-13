#include <stdio.h>

int main(void) {

  int i, soma, laco;
  soma = 0;
  i = 0;

  printf("ESCOLHA UMA OPÇÃO:\n");
  printf("1 - FOR \n");
  printf("2 - WHILE \n");
  printf("3 - DO WHILE \n");

  scanf("%d", &laco);

  switch(laco) {
    case 1:

      for(;i < 10; i++) 
        soma += i;

      printf("SOMA: %d \n", soma);

      break;
    
    case 2:

      while(i < 10) {
        soma += i;
        i++;
      }

      printf("SOMA: %d \n", soma);

      break;
    
    case 3:

      do {
        soma += i;
        i++;
      } while(i < 10);

      printf("SOMA: %d \n", soma);

      break;
      
    default:
      printf("OPÇÃO INVÁLIDA! \n");
      break;
  }
  
  return 0;
}