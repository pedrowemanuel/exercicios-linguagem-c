#include <stdio.h>

#define PREPARAR_STRING(str) # str

#define CONCAT(a, b) a ## b

int main() {
    printf("%s\n", PREPARAR_STRING(diretivas pre processador)); 

    int xy = 100;

    printf("%d\n", CONCAT(x,y)); // 100

    return 0;
}