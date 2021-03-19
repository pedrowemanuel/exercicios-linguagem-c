#include <stdio.h>

int main(){

    int a, b, valorDeA;

    printf("DIGITE O VALOR DE A: ");
    scanf("%d",&a);
    printf("DIGITE O VALOR DE B: ");
    scanf("%d",&b);

    printf("\n");

    valorDeA = a;
    a = b;
    b = valorDeA;
    
    printf("A: %d \n",a);
    printf("B: %d \n",b);

    return 0;
}