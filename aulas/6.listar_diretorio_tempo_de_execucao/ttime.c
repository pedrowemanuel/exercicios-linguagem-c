#include <stdio.h>
#include <time.h>
#define TAM 100

int main() {

    long long contador;
    long long *p_contador = &contador;
    double tempoTotal = 0, time_spent;
    clock_t end, begin;

    for (int i = 0; i < TAM; i++)
    {
        contador = 999999999;
        
        begin = clock();

        while(contador) {
            *(p_contador) = *p_contador - 1;
        }

        end = clock();

        time_spent = (double) (end - begin) / CLOCKS_PER_SEC;

        tempoTotal += time_spent;
    }

    printf("%lf\n", tempoTotal / TAM);
    
    return 0;
}