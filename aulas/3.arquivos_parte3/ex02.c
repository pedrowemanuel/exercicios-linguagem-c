// feof: fim do arquivo
// FOF: fim do arquivo

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fp = NULL;
    long tamanho;

    if (!(fp = fopen("dados.dat", "rb")))
    {
        perror("Erro ao abrir o arquivo! "); // variavel global, que armazena erros
        exit(1);
    }

    // clearerr(fp); // limpa os erros

    // pula até o fim do arquivo
    fseek(fp, 0, SEEK_END); 

    // ler o indicador de posição em bytes (Nesse caso irá retornar o tamanho do arquivo)
    tamanho = ftell(fp); 
    fclose(fp);

    printf("Tamanho do arquivo dados.dat: %ld bytes\n ", tamanho);
    return 0;
}