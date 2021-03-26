/*
    Implemente um código em C que gere uma matriz com valores
    aleatórios no intervalo de [0, 255] e dimensões M x N. Crie uma função para salvar
    a matriz gerada em um arquivo (texto) no padrão de formato PGM.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 255

typedef struct Imagem {
    int tipo;
    unsigned numColunas;
    unsigned numLinhas;
    int numNiveisCinza;
    unsigned char *pixels;
} image;

long int escreverMatriz(image *, char[]);

int main() {
    char nomeArquivo[10] = {"matriz.pgm"};
    unsigned char *pMatriz = NULL;
    int i;
    long int arquivoCriado;
    image imagemMatriz;

    imagemMatriz.tipo = 2;
    imagemMatriz.numNiveisCinza = MAX;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &imagemMatriz.numLinhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &imagemMatriz.numColunas);

    pMatriz = malloc(imagemMatriz.numLinhas * imagemMatriz.numColunas * sizeof(unsigned int));

    if (!pMatriz)
    {
        printf("Não existe memória o suficiente!\n");
        exit(1);
    }

    srand(time(NULL));

    for (i = 0; i < (imagemMatriz.numLinhas * imagemMatriz.numColunas); i++)
        *(pMatriz + i) = rand() % MAX;
    
    imagemMatriz.pixels = pMatriz;

    arquivoCriado = escreverMatriz(&imagemMatriz, nomeArquivo);

    printf("Tamanho do arquivo gerado: %ld bytes\n ", arquivoCriado);
    
    return 0;
}

long int escreverMatriz(image *img, char nomeArquivo[]) {
    int i;
    long int tamanhoArquivo = 0;
    FILE *fp = NULL;

    if (!(fp = fopen(nomeArquivo, "w")))
    {
        perror("Erro ao abrir o arquivo! "); 
        exit(1);
    }

    // escrever cabeçalho
    fprintf(fp, "%s%d\n", "P", img->tipo);
    fprintf(fp, "%d %d\n", img->numColunas, img->numLinhas);
    fprintf(fp, "%d", img->numNiveisCinza);

    if(img->tipo == 2) {
        for (i = 0; i < (img->numLinhas * img->numColunas); i++) {
            if(!(i % img->numColunas)) fprintf(fp, "\n");
            fprintf(fp, "%4u", *(img->pixels + i));
        }
    } else {
        printf("O formato deve ser do tipo texto\n");
        exit(2);    
    }

    tamanhoArquivo = ftell(fp); 
    fclose(fp);   

    return tamanhoArquivo;
}
