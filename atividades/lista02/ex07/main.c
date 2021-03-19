#include <stdio.h>

int main(){

    float numero, outroNumero, contador = 0;

    printf("\n DIGITE UM NÚMERO: ");
    scanf("%f", &numero);

    while(contador == 0) { 

      printf("\n DIGITE OUTRO NÚMERO: ");
      scanf("%f", &outroNumero);
    
      if (outroNumero != 0) {
        printf("\nDIVISÃO: %0.2f: \n", numero / outroNumero);
        contador++;      
      }
    }
    
    return 0;
}