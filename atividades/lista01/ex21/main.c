#include <stdio.h>

int main(){

    int numero1, numero2,resto;

    printf("DIGITE UM NÚMERO: ");
    scanf("%d",&numero1);

    printf("DIGITE OUTRO NÚMERO: ");
    scanf("%d",&numero2);
    
    resto = numero1 % numero2;

    switch (resto){
      case 0:
          printf("%d É MÚLTIPLO DE %d", numero1, numero2);
          break;
      default:
          printf("%d NÃO É MÚLTIPLO DE %d", numero1, numero2);
          break;
    }

    return 0;
}