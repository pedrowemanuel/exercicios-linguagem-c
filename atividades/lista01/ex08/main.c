#include <stdio.h>

int main() {
	int numero;

	printf("DIGITE UM NÚMERO INTEIRO: ");
	scanf("%d", &numero);

	printf("%d AO QUADRADO: %d\n", numero, (numero*numero));
	return 0;
}