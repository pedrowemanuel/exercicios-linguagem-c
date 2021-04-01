#include <stdio.h>
#include <stdlib.h>

typedef struct Imagem {
    int tipo;
    unsigned numColunas;
    unsigned numLinhas;
    int numeroNiveisCinza;
    unsigned char *pixels;
} image;

long int lerImagemPGM(image *, char[]);
void exibirImagemPGM(image *);
void escreverImagemPGM(image *, char[]);
void adicionarBordasPretas(image *);