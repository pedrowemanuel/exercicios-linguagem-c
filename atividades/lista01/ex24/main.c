#include <stdio.h>
 
int main(){
	int numero, expoente, resultado, valorElevado;

	printf("DIGITE UM NÚMERO: ");
	scanf("%d", &numero);

	printf("DIGITE O VALOR DO EXPOENTE: ");
	scanf("%d", &expoente);

  valorElevado = 2 << (expoente-1);

	resultado = numero * valorElevado;

	printf("%d x 2 elevado a %d = %d\n", numero, expoente, resultado);
	return 0;
}