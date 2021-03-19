#include <stdio.h>
#include <math.h>

int main(){

    float preco, valorDecimal, valorInteiro, valorParcela;

    int contador = 0;

    printf("\n DIGITE O PREÇO DA MERCADORIA: ");
    scanf("%f", &preco);

    valorDecimal = preco - valorInteiro;
    valorInteiro = floor(preco);
  
    while(contador < valorInteiro) {

      valorParcela = (valorInteiro - contador) / 3;

      if ( valorParcela - floor(valorParcela) == 0 ) {
        valorDecimal += contador;
        break;
      }
    }

    printf("\nVALOR DA ENTRADA: R$ %.2f \n", valorParcela+valorDecimal);
    
    printf("VALOR DAS PRESTAÇÕES: R$ %.2f\n\n", valorParcela);

    return 0;
}