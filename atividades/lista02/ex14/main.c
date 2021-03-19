#include <stdio.h>
#include <math.h>

int main(){
    int a, b, resultado = 0, guardarValorA;
    float num;

    printf("DIGITE O VALOR DE A: \n");
    scanf("%d", &a);

    printf("DIGITE O VALOR DE B: \n");
    scanf("%d", &b);
    
    if (a > b) {
      guardarValorA = a;
      a = b; 
      b = guardarValorA;
    }

    for (int contador = a; contador <= b; contador++){ 
      num = contador;
      num /=  3;
      if (!(num - floor(num))) resultado++;
      
    }

    printf("QUANTIDADE DE DIVISÍVEIS POR 3: %d\n", resultado);
    
    return 0;
}