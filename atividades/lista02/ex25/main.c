#include <stdio.h>

int main(){
  /*  25. Calcule o valor de π a partir da s ́erie infinita
  Imprima uma tabela que mostre o valor de π aproximado por um termo dessa s ́erie, e depois por dois
  termos, trˆes termos, e assim por diante. */

  int i = 0;

  double pi = 0, denominador = 1;

  for(int i=1;i<=100;i++){
    if (i%2 == 1) {
      pi = pi + (4 / denominador);
      denominador = denominador + 2;
    } else {
      pi = pi - (4 / denominador);
      denominador = denominador + 2;
    }
    
    printf("LINHA %d - %0.16f - 4 / %0.0f \n",i,pi,denominador);
  }

  printf("%0.16f \n",pi);

  return 0;
}