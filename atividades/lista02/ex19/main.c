#include <stdio.h>

int main(){

    int  inicio, fim;
    float soma = 0, numero = -1, media;

    printf("\nDIGITE O VALOR INICIAL: \n");
    scanf("%d", &inicio);
    printf("DIGITE O VALOR FINAL: \n");
    scanf("%d", &fim);

    for (int i = inicio; i < fim; i++) { 
      soma += i;
      numero++;
    }

    media = soma/numero;

    printf("\n MÉDIA ARITMÉTICA: %.2f \n", media);

    return 0;
}