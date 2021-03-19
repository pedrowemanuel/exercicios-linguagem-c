#include <stdio.h>

int main() {
	int numero;

	printf("INFORME UM NÚMERO INTEIRO: ");
	scanf("%d", &numero);

	printf("ANTECESSOR: %d\n", (numero-1));
	printf("SUCESSOR: %d\n", (numero+1));

	return 0;
}