#include <stdio.h>
#include <math.h>

int main(){
    
    float numero;
    int divisiveisPor3 = 0, divisiveisPor5 = 0;

    for (int i = 101; i <= 200; i++) { 

      numero = i;
      numero = (i <= 100) ? numero / 3 : numero / 5;

      if (numero - floor(numero) == 0) 
        if (i <= 100) divisiveisPor3 += numero;
        if (i > 100) divisiveisPor5 += numero;
    }

    printf("SOMA DOS NÚMEROS DIVISÍVEIS POR 3: %d\n", divisiveisPor3);
    printf("SOMA DOS NÚMEROS DIVISÍVEIS POR 5: %d\n", divisiveisPor5);

    return 0;
}