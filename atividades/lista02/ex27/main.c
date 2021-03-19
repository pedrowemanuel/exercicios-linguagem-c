#include <stdio.h>

int main(){

    int i = 1,valor,menorValor = 1,maiorValor = 0;
        
        for (; i > 0;)
        {
            printf("DIGITE NÚMEROS INTEIROS: \n");
            scanf("%d",&valor);
            
            if (menorValor > valor)
            {
                menorValor = valor;
            }
            if (maiorValor < valor)
            {
                maiorValor = valor;
            }
        
            printf("PRODUTO: %d \n", maiorValor*menorValor);

            if (valor%2 == 0 && valor < 0)
            {
                printf("O VALOR É NEGATIVO E PAR: \n");
                i = 0;
                break;
            }
            
        }
    
    return 0;
}