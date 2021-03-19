// 26. Escreva um programa que imprima uma tabela dos equivalentes bin ́ario, octal e hexadecimal dos numeros decimais no intervalo de 1 a 256.

#include <stdio.h>
#include <stdlib.h>

int main() {

  int resto, resultadoDeslocamento;

  for(int numero = 1;numero <= 10; numero++) {

    printf("DECIMAL: %d \n", numero);
    
    printf("BINÁRIO: ");

    for(int contador = 31; contador >= 0; contador--) {
      resultadoDeslocamento = numero >> contador;
          
      if(resultadoDeslocamento & 1) 
        printf("1");
      else 
        printf("0");
    }

    printf("\n");
  
    printf("OCTAL: %o \n", numero);
    printf("HEXADECIMAL: %x \n", numero);

    printf("--------------------------------------- \n");
  }
  return 0;
}


  