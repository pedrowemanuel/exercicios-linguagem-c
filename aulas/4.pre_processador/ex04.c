#include <stdio.h>

#line 100
int main() {
    printf("%d\n", __LINE__); // Linha 101

    // outras macros

    printf("%s\n", __FILE__);
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
    return 0;
}