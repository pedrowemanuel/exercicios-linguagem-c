/*
    Defina uma Estrutura para armazenar um par (x,y) de coordenadas. Organize um vetor com 10 ele-
    mentos dessas Estruturas. Imprima os pontos armazenados sem uso de ponteiros. Gere os valores x e y
    aleatoriamente. Utilize o typedef e #define.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 10

typedef struct Coordenadas
{
    int x;
    int y;
} coor;

int main() {

    coor coordenadas[TAM];
    int i;

    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        coordenadas[i].x = rand() % MAX;
        coordenadas[i].y = rand() % MAX;
    }

    for (i = 0; i < TAM; i++)
    {
        printf("x: %d, y: %d \n", coordenadas[i].x, coordenadas[i].y);
    }
    
    return 0;
}
