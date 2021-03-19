#include <stdio.h>

int main(){

  int contador= 0, valor;

  do {  
    printf("\nDIGITE UM NÚMERO DE 1 A 7: \n 0 - SAIR");
    scanf("%d", &valor);

    switch(valor) {

      case 0:
        contador++;
        printf("\nSAIU\n");
        break;
      case 1:
          printf("DIA É: DOMINGO\n");
        break;
      case 2:
          printf("DIA É: SEGUNDA\n");
        break;
      case 3:
          printf("DIA É: TERÇA\n");
        break;
      case 4:
          printf("DIA É: QUARTA\n");
        break;
      case 5:
          printf("DIA É: QUINTA\n");
        break;
      case 6:
          printf("DIA É: SEXTA\n");
        break;
      case 7:
          printf("DIA É: SÁBADO\n");
        break;
      default:
        contador++;
        printf("\nSAIU\n");
        break;
    }
  } while (contador== 0);

  return 0;
}