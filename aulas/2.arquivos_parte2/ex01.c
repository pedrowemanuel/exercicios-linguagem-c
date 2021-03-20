#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp = NULL;
    double d = 12.3, dr;
    int i = 7, ir;

    if (!(fp = fopen("arquivo_teste.txt", "a+"))) {
        printf("Não foi possível abrir o arquivo!");
        exit(1);
    }

    fwrite(&d, sizeof(double), 1, fp);
    fwrite(&i, sizeof(int), 1, fp);

    rewind(fp);

    fread(&dr, sizeof(double), 1, fp);
    fread(&ir, sizeof(int), 1, fp);

    printf("%lf, %d \n", dr, ir);

    fclose(fp);

    return 0;
}