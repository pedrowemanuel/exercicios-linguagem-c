#include <stdio.h>
#include <math.h>

int main(){
    int p1,p2,p3;
    float mediaAritmetica,mediaGeometrica;

    printf("DIGITE O PONTO 1:");
    scanf("%d",&p1);

    printf("DIGITE O PONTO 2:");
    scanf("%d",&p2);

    printf("DIGITE O PONTO 3:");
    scanf("%d",&p3);

    mediaAritmetica = (p1+p2+p3)/3;
    mediaGeometrica = pow((p1 + p2 + p3), (float) (1/3));

    printf("MÉDIA ARITMÉTICA = %0.2f \n",mediaAritmetica);
    printf("MÉDIA GEOMÉTRICA = %f \n",mediaGeometrica);

    return 0;
}