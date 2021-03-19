#include <stdio.h>
 
int main() {
	int hor, min, seg, totalSegundos;

	printf("INFORME O TOTAL DE HORAS: ");
	scanf("%d", &hor);

	printf("INFORME O TOTAL DE MINUTOS: ");
	scanf("%d", &min);

	printf("INFORME O TOTAL DE SEGUNDOS: ");
	scanf("%d", &seg);

	totalSegundos = (hor * 3600) + (min * 60) + seg;

	printf("TOTAL DE SEGUNDOS: %d\n", totalSegundos); 
   
	return 0;
}