#include <stdio.h>

int main(){

    float pi = 3.14159,raio,circuferencia,area,diametro;
    
    printf("DIGITE O VALOR DO RAIO: \n");
    scanf("%f",&raio);

    diametro = 2 * raio;
    area = (raio * raio) * pi;
    circuferencia = 2 * pi * raio;
    
    printf("CIRCUFERÊNCIA: %.2f \n", circuferencia);
    printf("DIÂMETRO: %.2f \n", diametro);
    printf("ÁREA: %.2f \n", area);

    return 0;
}