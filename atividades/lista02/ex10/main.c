#include <stdio.h>

int main(){

    int numero;

    for (numero = 15; numero <= 90; numero += 4) 
      printf("QUADRADO DE %d É: %d \n",numero, (numero * numero));

    return 0;
}