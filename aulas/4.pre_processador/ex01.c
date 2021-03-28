#include <stdio.h>
#define STRING_LONGA "sssss sssss \
aaaaaaaaaaa"

#define AREA_RETANGULO(x, y) ((x) * (y))
#define UM 1
#define DOIS UM + UM

int main() {
    int a = 10, b = 5;
    printf("%d + %d = %d\n", a, b, AREA_RETANGULO(a,b));
    printf("%d\n", DOIS);

    return 0;
}

