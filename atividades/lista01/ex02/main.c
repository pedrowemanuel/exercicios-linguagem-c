#include <stdio.h>

int main() {
	int numero;

	printf("DIGITE UM NÚMERO POR FAVOR: ");	
	scanf("%d", &numero);

  printf("\n===========\n");

	printf("\nNÚMERO EM HEXADECIMAL: %x\n", numero);
	printf("NÚMERO EM OCTAL: %o\n", numero);

	return 0;
}