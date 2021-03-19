#include <stdio.h>
#include <math.h>

int main(){
    int xPonto1,yPonto1,xPonto2,yPonto2;
    float distanciaPontos;

    printf("DIGITE O PRIMEIRO PONTO, (x e y): ");
    scanf("%i %i", &xPonto1, &yPonto1);
    
    printf("DIGITE O PRIMEIRO PONTO, (x e y): ");
    scanf("%i %i", &xPonto2, &yPonto2);


    distanciaPontos = sqrt( ( (xPonto2-xPonto1)*(xPonto2-xPonto1) ) + ( (yPonto2-yPonto1)*(yPonto2-yPonto1) ) );

    printf("DISTÂNCIA ENTRE OS PONTOS: %f", distanciaPontos);

    return 0;
}