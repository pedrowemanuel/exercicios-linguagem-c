// stdin: entrada padrão
// stdout:saída padrão

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fp = NULL;
    char str[80];
    int numero;

    if (!(fp = fopen("dados.dat", "w")))
    {
        fprintf(stderr, "Erro ao abrir o arquivo! \n"); // joga na saída de erro
        exit(1);
    }

    printf("Digite uma string e um número: ");
    fscanf(stdin, "%s%d", str, &numero);
    fprintf(fp, "%s %d \n", str, numero);

    // capturar se houve erro na operacao anterior
    if (ferror(fp)) 
    {
        fprintf(stderr, "Erro ao escrever o arquivo! \n");
        exit(1);
    }
    fclose(fp);

    if (!(fp = fopen("dados.dat", "r")))
    {
        printf("Erro ao abrir o arquivo! \n");
        exit(1);
    }

    fscanf(fp, "%s%d", str, &numero);
    fprintf(stdout, "%s %d \n", str, numero);
    fclose(fp);
    return 0;
}