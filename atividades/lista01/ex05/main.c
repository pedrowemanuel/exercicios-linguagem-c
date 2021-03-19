#include <stdio.h>

int main() {
	float precoConta;

	printf("INFORME O VALOR DA CONTA: R$ ");
	scanf("%f", &precoConta);

	printf("TOTAL DA CONTA: R$ %0.2f\n", (precoConta * 1.1));
	return 0;
}