#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float randNumeroFloat(float max, float min) {
    float numero = 0.0;

    if (max >= min)
    {
        numero = ((float) rand()) / (float) RAND_MAX;
        numero *= (max - min);
        return numero + min;
    } else if(max == min) 
    {
        return max;
    }
    
    return numero;
}

int main() {
    int i;

    srand(time(NULL));

    for (i = 0; i < 30; i++)
        printf ("valor[%d] = %f \n", i, randNumeroFloat(1, 0));
    
    return 0;
}
