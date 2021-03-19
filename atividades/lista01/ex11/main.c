#include <stdio.h>

int main() {
	float reais, cotacaoDolar;

	printf("INFORME A COTAÇÃO DO DÓLAR: ");
	scanf("%f", &cotacaoDolar);

	printf("INFORME O VALOR EM REAIS A SER CONVERTIDO: ");
	scanf("%f", &reais);

	printf("R$ %0.3f CONVERTIDO EM DÓLARES: $%0.3f\n", reais, (reais / cotacaoDolar));
	return 0;
}