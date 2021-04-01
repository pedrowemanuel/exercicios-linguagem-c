#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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

int main(void) {
    DIR *diretorio;
    struct dirent *dir;
    char pastaImagensSemFiltro[50] = {"./imagens_sem_filtros/"};
    char pastaImagensComFiltro[50] = {"./imagens_com_filtros/"};
    diretorio = opendir(pastaImagensSemFiltro);
    unsigned contador = 0;
    unsigned char valoresVizinhos[9], valor;
    image img;
    double tempoTotal = 0, time_spent;
    clock_t end, begin;

    if (diretorio) {

        for (int i = 0; i < 100; i++)
        {
            while ((dir = readdir(diretorio)) != NULL) {
                begin = clock();

                if (contador != 3 && contador != 5) {

                    strcat(pastaImagensSemFiltro, dir->d_name);
                    lerImagemPGM(&img, pastaImagensSemFiltro);

                    adicionarBordasPretas(&img);

                    for (int linha = 0; linha < img.numLinhas; linha++) {
                        for (int coluna = 0; coluna < img.numColunas; coluna++)
                        {
                            if (!(linha == 0 || coluna == 0 || linha == img.numLinhas - 1 || coluna == img.numColunas - 1)) {
                                valoresVizinhos[0] = *(img.pixels + (linha - 1) * img.numColunas + (coluna - 1));
                                valoresVizinhos[1] = *(img.pixels + (linha - 1) * img.numColunas + (coluna));
                                valoresVizinhos[2] = *(img.pixels + (linha - 1) * img.numColunas + (coluna + 1));
                                valoresVizinhos[3] = *(img.pixels + (linha) * img.numColunas + (coluna - 1));
                                valoresVizinhos[4] = *(img.pixels + (linha) * img.numColunas + (coluna));
                                valoresVizinhos[5] = *(img.pixels + (linha) * img.numColunas + (coluna + 1));
                                valoresVizinhos[6] = *(img.pixels + (linha + 1) * img.numColunas + (coluna - 1));
                                valoresVizinhos[7] = *(img.pixels + (linha + 1) * img.numColunas + (coluna));
                                valoresVizinhos[8] = *(img.pixels + (linha + 1) * img.numColunas + (coluna + 1));

                                for (int i = 0; i < 9; ++i) {
                                    for (int j = i + 1; j < 9; ++j) {
                                        if (valoresVizinhos[i] > valoresVizinhos[j]) {
                                            valor =  valoresVizinhos[i];
                                            valoresVizinhos[i] = valoresVizinhos[j];
                                            valoresVizinhos[j] = valor;
                                        }
                                    }
                                }

                                // adicionando mediana no valor central
                                *(img.pixels + linha * img.numColunas + coluna) = valoresVizinhos[4];
                                
                            }
                        }
                        
                    }
                    
                    strcpy(pastaImagensSemFiltro, "./imagens_sem_filtros/");
                    strcpy(pastaImagensComFiltro, "./imagens_com_filtros/");
                    strcat(pastaImagensComFiltro, dir->d_name);

                    escreverImagemPGM(&img, pastaImagensComFiltro);
                }

                strcpy(pastaImagensSemFiltro, "./imagens_sem_filtros/");
                strcpy(pastaImagensComFiltro, "./imagens_com_filtros/");

                contador++;
                end = clock();
                time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
                tempoTotal += time_spent;
            }
            
        }
        
        closedir(diretorio);

        tempoTotal /= (double) 100;

        printf("Tempo total: %f", tempoTotal);
    } else {
        perror("");
        exit(1);
    }

    return(0);
}

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
            printf("Lendo PGM(Dados em texto)\n");

            for (i = 0; i < (pImg->numColunas * pImg->numLinhas); i++) 
                fscanf(fp, "%hhu", (pImg->pixels+i));
        break;
        case 5:
            printf("Lendo PGM(Dados em binário)\n");
            
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