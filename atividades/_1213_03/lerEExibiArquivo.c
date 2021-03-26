#include <stdio.h>
#include <stdlib.h>

#define TAM 5

typedef struct Coordenadas {
    int x, y;
} coor;

int lerArquivo(coor *p, char *nome);
void exibirDados(coor *c, size_t tamanho);

int main() {

    coor resgataVetorCoord[TAM];
    int quantidadeElementosLidos;
    char nome[30] = "arquivo_teste.txt";

    quantidadeElementosLidos = lerArquivo(resgataVetorCoord, nome);

    printf("\nquantidadeElementosLidos: %d\n\n", quantidadeElementosLidos);

    printf("Dados lidos do arquivo: \n\n");
    if (quantidadeElementosLidos) exibirDados(resgataVetorCoord, TAM);

    return 0;
}

void exibirDados(coor *c, size_t tamanho) {
    size_t i;

    for (i = 0; i < tamanho; i++)
    {
        printf("Índice: %lu \n", i);
        printf("x: %d, y: %d \n\n", (c + i)->x, (c + i)->y);
    }   
}

int lerArquivo(coor *p, char *nome) {

    FILE * fp = NULL;
    int indice;
    coor c;

    if (!(fp = fopen(nome, "rb")))
    {
        printf("Erro ao ler o arquivo: %s\n", nome);
        exit(1);
    }

    for (indice = 0; fread(&c, sizeof(coor), 1, fp) >= 1; indice++)
        *(p + indice) = c;
    
    rewind(fp);
    fclose(fp);

    return indice;
}
