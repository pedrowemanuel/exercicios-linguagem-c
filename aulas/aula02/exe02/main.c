#include <stdio.h>

int valor_1;
int valor_2;

void imprime_soma(void); 

int series() {
    static int series_num = 100;
    series_num = series_num + 23;

    return series_num;
}

int main() {
    int b;

    b = series();
    printf("b: %d\n", b);

    b = series();
    printf("b: %d\n", b);

    b = series();
    printf("b: %d\n", b);

    //////////////////////
}
