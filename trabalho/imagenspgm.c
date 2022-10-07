#include "imagenspgm.h"

long int lerImagemPGM(image *pImg, char nomeImagem[]) {
    FILE * fp = NULL;
    long int tamanho;
    char ch;
    int i;

    if (!(fp = fopen(nomeImagem, "r")))
    {
        perror("Erro ao abrir o arquivo! "); 
        exit(1);
    }

    // leitura do cabeçalho
    if ((ch = getc(fp)) != 'P')
    {
        fprintf(stderr, "Erro: a imagem não é uma PGM\n");
        exit(2);
    }

    pImg->tipo = getc(fp) - 48;

    fseek(fp, 1, SEEK_CUR);

    // tratando os comentarios
    while ((ch = getc(fp)) == '#')
        while ((ch = getc(fp)) != '\n');
    
    fseek(fp, -1, SEEK_CUR);
    
    fscanf(fp, "%u%u", &pImg->numColunas, &pImg->numLinhas);

    fscanf(fp, "%d", &pImg->numeroNiveisCinza);

    fseek(fp, 1, SEEK_CUR);

    pImg->pixels = (unsigned char *) malloc(pImg->numColunas * pImg->numLinhas * sizeof(unsigned char));

    switch (pImg->tipo) {
        case 2:
            //printf("Lendo PGM(Dados em texto)\n");

            for (i = 0; i < (pImg->numColunas * pImg->numLinhas); i++) 
                fscanf(fp, "%hhu", (pImg->pixels+i));
        break;
        case 5:
            //printf("Lendo PGM(Dados em binário)\n");
            
            fread(pImg->pixels, sizeof(unsigned char), pImg->numColunas * pImg->numLinhas, fp);
        break;
        default:
            printf("Formato inválido \n");
    }

    fseek(fp, 0, SEEK_END);
    rewind(fp);
    fclose(fp);

    return ftell(fp);
}

void exibirImagemPGM(image *pImg) {

    int i;

    printf("Tipo: %d\n", pImg->tipo);
    printf("N° de colunas: %d\nN° de linhas: %d\n", pImg->numColunas, pImg->numLinhas);
    printf("Máximo de níveis de cinza: %d\n", pImg->numeroNiveisCinza);

    printf("Pixels:\n");

    for (i = 0; i < (pImg->numColunas * pImg->numLinhas); i++) {
        if(!(i % pImg->numColunas)) printf("\n");
        fprintf(stdout, "%4hhu", *(pImg->pixels+i));
    }

    printf("\n");
}

void escreverImagemPGM(image * pImg, char nomeImagem[]) {
    FILE *fp = NULL;
    char ch;

    if (!(fp = fopen(nomeImagem, "wb")))
    {
        perror("Erro ao abrir o arquivo! "); 
        exit(1);
    }
    
    // escrever cabeçalho
    fprintf(fp, "%s\n", "P5");
    fprintf(fp, "%d %d\n", pImg->numColunas, pImg->numLinhas);
    fprintf(fp, "%d\n", pImg->numeroNiveisCinza);
    
    fwrite(pImg->pixels, sizeof(unsigned char), pImg->numColunas*pImg->numLinhas, fp);

    fclose(fp);
}

void adicionarBordasPretas(image * pImg) {
    for (int i = 0; i < (pImg->numColunas * pImg->numLinhas); i++) {
        if (i < pImg->numColunas) *(pImg->pixels + i) = 0;
        if (i >= ((pImg->numColunas * pImg->numLinhas) - pImg->numColunas)) *(pImg->pixels + i) = 0;
        if (i % pImg->numColunas == 0) {
            *((pImg->pixels + i)) = 0;
            *((pImg->pixels + i - 1)) = 0;
        }
    }
}
