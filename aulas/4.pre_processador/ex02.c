// rodar: gcc -E ex02
#include <stdio.h>

#define T 10

int main() {
    
    #if T < 20
        printf("Instrução 1 compilada \n");
    #elif T <50
        printf("Instrução 2 compilada \n");
    #else 
        printf("Instrução 3 compilada \n");
    #endif

    return 0;
}

