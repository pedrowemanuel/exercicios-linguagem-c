#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE * fp = NULL;
    char str[80];

    if (!(fp = fopen("arquivo_teste.txt", "ab+"))) // abre um arquivo em binario
    {
        printf("O arquivo não pode ser aberto! \n");
        exit(1);
    }

    do
    {
        printf("Digite um texto: ");
        fgets(str, 79, stdin); // ler da entrada padrão e joga na str

        strcat(str, "\n"); // 
        fputs(str, fp);

    } while (*str != '\n');

    rewind(fp);

    while (!feof(fp)) {
        fgets(str, 79, fp);

        printf("%s", str);
    }
    
    fclose(fp);
    
    return 0;
}