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

    return 0;
}