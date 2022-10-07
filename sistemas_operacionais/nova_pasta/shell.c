#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
	char texto_digitado[200];
	int sair = 0;
	int status;
	char *comando;
	char *parametros[10];
	int contador;
	char *parametro;
	pid_t pid;

	printf("\n Bem vindo ao Shell! \n\n");
	printf("\n Para sair, digite: $exit \n\n");

	do {
		printf("\n> ");
		scanf("%[^\n]%*c", texto_digitado);
		contador = 0;

		if (strcmp(texto_digitado, "$exit") == 0) {
			sair = 1;
		} else {
			// Cria processo filho
			pid = fork();

			if (pid != 0) {
				// Código do processo pai
				waitpid(pid, &status, 0);
			} else {
				// Código procesos filo
				// vamos obter o primeiro pedaço da string
				comando = (char *)strtok(texto_digitado, " ");
				parametros[0] = comando;

				// adicionar no array parametros
				do {
					parametro = strtok(NULL, " ");
					parametros[++contador] = parametro;
				} while (parametro != NULL);

				parametros[++contador] = NULL;

				// executa o comando digitado
				execvp(comando, parametros);
				sair = 1;
			}
		}
	} while (!sair);

	return 0;
}
