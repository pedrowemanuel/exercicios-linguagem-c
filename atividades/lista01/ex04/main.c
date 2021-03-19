#include <stdio.h>

int main() {
	int numero;

	printf("DIGITE UM NÚMERO POR FAVOR: ");	
	scanf("%d", &numero);

	printf("TRIPLO: %d\nQUADRADO: %d\nMEIO: %d\n", (numero*3), (numero*numero), (numero*1/2));
	return 0;
}