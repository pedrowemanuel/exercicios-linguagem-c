/* 
    Crie uma fun ̧c ̃ao que receba um vetor de Estruturas com dois campos inteiros (x e y) e retorne o
    endere ̧co da Estrutura com maior distˆancia entre seus pr ́oprios elementos x e y. Para c ́alculo
    da distˆancia, considere:
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Pontos {
    int x, y;
} px;

px* calcularMaiorDistancia(px p[], int);

int main() {

    px p[3] = {{3,1}, {5,1}, {5,5}};
    px *pPX;

    pPX = calcularMaiorDistancia(p, 3);

    printf("maior: (%d, %d)", pPX->x, pPX->y);
    
    return 0;
}

px* calcularMaiorDistancia(px vetor[], int tamanhoDoVetor) {
    px *ponteiroMaiorDistancia;
    int i, distancia, maiorDistancia;

    if (tamanhoDoVetor)
    {
        for (i = 0; i < tamanhoDoVetor; i++)
        {
            distancia = (((vetor[i].x) - (vetor[i].y)) < 0) ? (-1 * (vetor[i].x) - (vetor[i].y)) : (vetor[i].x) - (vetor[i].y);
            
            if (i == 0)
            {
                maiorDistancia = distancia;
                ponteiroMaiorDistancia = &vetor[i];
            } else {

                if(distancia > maiorDistancia) {
                    maiorDistancia = distancia;
                    
                    ponteiroMaiorDistancia = &vetor[i];

                }
            }
            
        }

        return ponteiroMaiorDistancia;
    }

    return NULL;        
}