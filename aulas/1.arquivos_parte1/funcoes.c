#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerEImprimeUmCaractere();
void imprimeUmCaractere(int c);
void imprimeUmaString(char *str);

int main() {
    FILE *fp = NULL;
    char str[50] = "String", caractere;

    lerEImprimeUmCaractere();
    imprimeUmCaractere('t');

    printf("\n");

    imprimeUmaString(str);

    printf("\n");

    return 0;
}

void lerEImprimeUmCaractere() {
    getchar();
}

void imprimeUmCaractere(int c) {
    putchar(c);
}

void imprimeUmaString(char *str) {
    puts(str);
}

