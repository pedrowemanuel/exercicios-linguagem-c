#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10
#define TAM 5

typedef struct Coordenadas {
    int x, y;
} coor;

int escreverArquivo(coor *c, size_t tamanho, char *nome);

int main() {

    coor vetorCoord[TAM];
    int i;
    char nome[30] = "arquivo_teste.txt";

    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        vetorCoord[i].x = rand() % MAX;
        vetorCoord[i].y = rand() % MAX;
    }

    if(!(escreverArquivo(vetorCoord, TAM, nome))) {
        printf("Erro ao escrever no arquivo! \n");
        exit(1);
    }

    printf("Sucesso ao escrever o arquivo! \n");

    return 0;
}

int escreverArquivo(coor *c,  size_t tamanho, char *nome) {

    FILE * fp = NULL;
    int i, erros = 0;

    if ((fp = fopen(nome, "wb")))
    {
        for (i = 0; i < tamanho; i++)
        {
            if(!(fwrite((c + i), sizeof(coor), 1, fp))) erros++;
        }

        rewind(fp);
        fclose(fp);
    } else {
        erros++;
    }

    return (!erros);
}
