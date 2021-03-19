#include <stdio.h>

int main(){

    int segundos, qtdHoras, qtdMinutos, qtdSegundos;

    printf("DIGITE O TEMPO EM SEGUNDOS: ");
    scanf("%d",&segundos);

    qtdSegundos = segundos % 60;
    qtdMinutos = (segundos / 60) % 60;
    qtdHoras = (segundos / 60) / 60;

    
    printf("\nQUANTIDADE DE HORAS: %d \n",qtdHoras);
    printf("QUANTIDADE DE MINUTOS: %d \n",qtdMinutos);
    printf("QUANTIDADE DE  SEGUNDOS: %d \n",qtdSegundos);

    return 0;
}