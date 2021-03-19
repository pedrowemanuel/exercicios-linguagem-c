#include <stdio.h>

int main() {

    // exercicio 1

    int a = sizeof(char);

    int b = sizeof(int);

    int c =  sizeof(float);
    
    int d = sizeof(double);

    int e = sizeof(long int);

    int f = sizeof(short int);

    printf("a: %d, b: %d, c: %d, d: %d, e: %d, f: %d", a,b,c,d,e,f);

    // exercicio 2

    int x = 1;
    int y = 2;

    int valorDeX = x;

    x = y;
    y = valorDeX;

    printf("\nValor de x: %d \nValor de y: %d \n", x,y);

    // exercicio 2

    // int i = 5528944600;
    int i = 552894464;

    printf("%d", i);

    /////////// AULA ///////////////

    const int fixo = 1;

    // fixo = 2; Nao pode

    return 0;
}

