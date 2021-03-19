#include <stdio.h>

int valor_1;
int valor_2;

void imprime_soma(void); 

int main() {

    // exibir valor de varialvel de outro arquivo

    printf ("Digite os valores: ");
    scanf ("%d %d", &valor_1, &valor_2);
    imprime_soma();

    return 0;
}
