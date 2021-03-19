#include <stdio.h>

int main() {
	double numeroReal;

	printf("DIGITE UM NÚMERO POR FAVOR: ");	
	scanf("%lf", &numeroReal);

	printf("VALOR: %0.1lf\n", numeroReal);

	return 0;
}