#include <stdio.h>
#include <math.h>

int main(){

    int a, b, contador, s = 0, guardarValorA;
    float numero;

    printf("DIGITE O VALOR DE A: \n");
    scanf("%d", &a);
    printf("DIGITE O VALOR DE B: \n");
    scanf("%d", &b);

    if (a > b) {
      guardarValorA = a;
      a = b; 
      b = guardarValorA;
    }

    for (contador = a; contador <= b; contador++) {
       
      numero = contador;
      numero /= 4;

      if (numero - floor(numero) == 0) {
        printf("%d AO QUADRADO É: %d\n", contador, (contador*contador));    
      }
    }
    return 0;
}
