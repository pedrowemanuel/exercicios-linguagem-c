#include <stdio.h>

int main() {
	float comprimento, largura, altura, volumeCaixa;

	printf("INFORME AS DIMENÇÕES DA CAIXA \n\n");
  
	printf("COMPRIMENTO: ");
	scanf("%f", &comprimento);

	printf("LARGURA: ");
	scanf("%f", &largura);

	printf("ALTURA: ");
	scanf("%f", &altura);

	volumeCaixa = comprimento * largura * altura;

	printf("VOLUME DA CAIXA: %f\n", volumeCaixa);
	return 0;
}