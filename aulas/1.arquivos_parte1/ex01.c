#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[1]) {
    FILE * fp = NULL;
    char caractere;

    if (argc < 2)
    {
        printf("Nome do arquivo não encontrado! \n");
        exit(1);
    }
    

    if (!(fp = fopen(argv[1], "w"))) // abre um arquivo
    {
        printf("O arquivo não pode ser aberto \n");
        exit(1);
    }

    do
    {
        caractere = getchar(); // ler um caractere
        putc(caractere, fp); // escreve um caractere
    } while (caractere != '$');
    
    fclose(fp);
    
    return 0;
}