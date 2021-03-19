#include <stdio.h>
#include <math.h>

int main(){
    int numero = 0;

    for (; numero < 8; numero++) 
      printf("3 ELEVADO A %d: %.2f\n", numero, pow(3, numero));

    return 0;
}