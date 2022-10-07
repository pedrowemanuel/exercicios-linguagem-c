#include <dirent.h>
#include <time.h>
#include <string.h>
#include "imagenspgm.h"

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

        while ((dir = readdir(diretorio)) != NULL) {
            begin = clock();

            for (int i = 0; i < 100; i++) {
                if (contador != 0 && contador != 1) {

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

                strcpy(pastaImagensComFiltro, "./imagens_com_filtros/");
            }

            contador++;

            end = clock();
            time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
            time_spent /= (double) 100;

            tempoTotal += time_spent;
        }
         
        closedir(diretorio);

        tempoTotal /= (double) 5;

        printf("Tempo total: %f", tempoTotal);
    } else {
        perror("");
        exit(1);
    }

    return(0);
}
