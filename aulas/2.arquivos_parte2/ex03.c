#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10
#define TAM 5

typedef struct Coordenadas {
    int x, y;
} coor;

int escreverArquivo(coor *c, size_t tamanho, char *nome);
int lerArquivo(coor *p, char *nome);
void exibirDados(coor *c, size_t tamanho);

int main() {

    coor vetorCoord[TAM], resgataVetorCoord[TAM];
    int i, quantidadeElementosLidos;
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

    quantidadeElementosLidos = lerArquivo(resgataVetorCoord, nome);

    printf("Vetor gerado:\n\n");
    exibirDados(vetorCoord, TAM);

    printf("\nquantidadeElementosLidos: %d\n\n", quantidadeElementosLidos);

    printf("Dados lidos do arquivo: \n\n");
    if (quantidadeElementosLidos) exibirDados(resgataVetorCoord, TAM);

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
        printf("Erro ao ler o arquivo: %s", nome);
        exit(1);
    }

    for (indice = 0; fread(&c, sizeof(coor), 1, fp) >= 1; indice++)
    {
        *(p + indice) = c;
    }
    
    rewind(fp);
    fclose(fp);

    return indice;
}
