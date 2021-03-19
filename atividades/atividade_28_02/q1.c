#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int *x, *y, n, quantidade_elementos, i;

    printf("O intervalo é igual a (-N até N). \n Digite o valor de N: ");
    scanf("%d", &n);

    printf("\nDigite a quantidade de elementos: ");
    scanf("%d", &quantidade_elementos);

    x = malloc(quantidade_elementos * sizeof(int));
    y = malloc(quantidade_elementos * sizeof(int));

    if (!x || !y)
    {
        printf("Sem memória disponível para a execução do programa");
        exit(1);
    }
    
    for (i = 0; i < quantidade_elementos; i++)
        *(x + i) = (rand() % ((2 * n) + 1)) - n;

    for (i = 0; i < quantidade_elementos; i++)
        *(y + i) = (i % 2 == 0) ? (*(x + i)) / 2 : (*(x + i)) * 3;

    for (i = 0; i < quantidade_elementos; i++)
        printf ("X[%d] = %d \nY[%d] = %d \n", i, *(x + i), i, *(y + i));

    free(x);
    free(y);
    
    return 0;
}
