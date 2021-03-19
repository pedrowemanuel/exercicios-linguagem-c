#include <stdio.h>

// variavel global (devem ser evitadas)

int global = 0;

int soma(int a, int b) {

    // variaveis locais

    return a + b;
}

void addGlobal() {
    global = global + 1;
}


int main() {

    int a, z;
    int b = 32767;

    printf("%d \n", b);

    //////////////////

    char c = 128;
    char d = 127;

    printf("%d %d \n", c, d);

    ////////////////////

    unsigned char e = 255;

    printf("%d \n", e);

    ////////////////////

    long int f = 2147483647;

    printf("%ld \n", f);

    /////////////////////////

    int valor1 = 4;
    int valor2 = 3;

    int resultadoSoma = soma(valor1, valor2);

    printf("Resultado Soma: %d \n", resultadoSoma);

    addGlobal();
    addGlobal();
    addGlobal();

    printf("%d \n", global);

    //////////////////////

    int g = 1;

    {
        int g = 2;
    }

    printf("%d \n", g);

    return 0;
}

