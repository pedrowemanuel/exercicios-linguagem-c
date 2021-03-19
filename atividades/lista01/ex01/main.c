#include <stdio.h>

int main() {

  printf("ORDEM DE PRECEDÊNCIA\n");
  printf("1°: ()\n2°: */ %% \n3°: +-\n\n");

  printf("===========\n");
  
	printf("x = 7 + 3 * 6 / 2 - 1 = %d\n", (7+3*6/2-1));

	printf("x = 2 %% 2 + 2 * 2 - 2 / 2 = %d\n", (2%2+2*2-2/2));

	printf("x = (3 * 9 * (3 + (9 * 3 / (3)))) = %d\n", ((3*9*(3+(9*3/(3))))));
	return 0;
}