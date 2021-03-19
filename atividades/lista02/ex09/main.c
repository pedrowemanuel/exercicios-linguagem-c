#include <stdio.h>

int main(){
    int termo, primeiroTermo = 1, segundoTermo = 0, contador;


    for (contador = 0; contador < 55; contador++) { 

        termo = primeiroTermo + segundoTermo;
        
        if (contador > 0) {
          segundoTermo =  primeiroTermo;
        } else {
          segundoTermo = 0;
        }

        primeiroTermo = termo;

        printf("TERMO: %d \n", termo);
      
    }

    return 0;
}