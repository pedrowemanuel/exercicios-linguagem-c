#include <stdio.h>

#define T 75

int main() {
    
    #ifdef T
        printf("O T está definido \n");
    #else 
        printf("O T não está definido \n");
    #endif

    #undef T // remover a constante

    #ifndef T
        printf("O T não está definido \n");
    #else 
        printf("O T está definido \n");
    #endif

    return 0;
}

