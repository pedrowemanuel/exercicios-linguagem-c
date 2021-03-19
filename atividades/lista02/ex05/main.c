#include <stdio.h>

int main(){
    int numero, condicao, contador = 0, maior, menor;

    printf("\n DIGITE 0 PARA SAIR \n");
    
    while (condicao != 0) {
        contador++;

        printf("DIGITE UM NÚMERO: \n");
        scanf("%d", &numero);

        if (numero == 0) {
            condicao = numero;
        } else {

            if(contador == 1) {
                maior = numero;
                menor = numero;

            } else {
                maior = (numero > maior) ? numero : maior;
                menor = (numero < menor) ? numero : menor;
          }
          
          printf("MAIOR: %d \n MENOR: %d\n", maior, menor);
        }
    }
    
    return 0;
}