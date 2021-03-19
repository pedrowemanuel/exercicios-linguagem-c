#include <stdio.h>

int main(){

    int numero,resto;

    printf("DIGITE UM NÚMERO: ");
    scanf("%d",&numero);
    
    resto = numero % 2;

    switch (resto){
      case 0:
          printf("%d É PAR", numero);
          break;
      default:
          printf("%d É ÍMPAR", numero);
          break;
    }

    return 0;
}