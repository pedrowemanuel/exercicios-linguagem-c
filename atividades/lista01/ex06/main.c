#include <stdio.h>

int main() {
	float altura, pesoIdeal;
  char sexo;

	printf("SEU SEXO?\n");
  printf("h - HOMEM\nm - MULHER\n");
	scanf("%c", &sexo);

  printf("SUA ALTURA EM METROS?\n");
  scanf("%f", &altura);

  pesoIdeal = (sexo == 'h' ? 72.7 * altura - 58
    : 62.1 * altura - 44.7);

  printf("SEU PESO IDEAL É: %0.3f\n", pesoIdeal);


	return 0;
}