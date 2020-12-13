#include <stdio.h>

int main() {

    // exercicio 1

    int a = sizeof(char);

    int b = sizeof(int);

    int c =  sizeof(float);
    
    int d = sizeof(double);

    int e = sizeof(void);

    printf("char: %d, int: %d, float: %d, double: %d, void: %d \n", a,b,c,d,e);

    return 0;
}