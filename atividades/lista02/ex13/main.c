#include <stdio.h>

int main(){
    int a, b, contador, soma = 0, guardarValorA;

    printf("DIGITE O VALOR DE A: \n");
    scanf("%d", &a);

    printf("DIGITE O VALOR DE B: \n");
    scanf("%d", &b);
    
    if (a > b) {
      guardarValorA = a;
      a = b; 
      b = guardarValorA;
    }

    for (contador = a; contador <= b; contador++) 
      if ( !(contador % 2) )  soma += contador;
    
    printf("RESULTADO DO SOMATÓRIO: %d\n", soma);

    return 0;
}