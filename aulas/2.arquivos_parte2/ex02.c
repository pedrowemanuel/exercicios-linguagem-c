#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    double x;
    int y;
} node;

int main() {
    FILE *fp = NULL;
    node n = {27.22, 2}, nodeR;
    double xr;
    int yr;

    if (!(fp = fopen("arquivo_teste.txt", "a+"))) {
        printf("Não foi possível abrir o arquivo!");
        exit(1);
    }

    fwrite(&n, sizeof(node), 1, fp);

    rewind(fp);

    fread(&nodeR, sizeof(node), 1, fp);

    printf("%lf, %d \n", nodeR.x, nodeR.y);

    fclose(fp);

    return 0;
}