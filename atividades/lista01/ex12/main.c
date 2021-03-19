#include <stdio.h>

int main() {
	float numero1, numero2, soma, produto, diferenca, quociente;

  int resto;

	printf("DIGITE UM NÚMERO: ");
	scanf("%f", &numero1);

	printf("DIGITE OUTRO NÚMERO: ");
	scanf("%f", &numero2);

  printf("===========\n");

  soma = numero1+numero2;
  produto = numero1*numero2;
  diferenca = numero1 - numero2;
  diferenca = (diferenca >= 0) ? diferenca : diferenca * -1;
  quociente = numero1/numero2;
  resto = (int) (numero1/numero2);

  printf("SOMA: %.2f \nPRODUTO: %.2f \nDIFERENÇA: %.2f \nQUOCIENTE: %.2f \n RESTO: %d \n",soma,produto,diferenca,quociente,resto);

  return 0;
}