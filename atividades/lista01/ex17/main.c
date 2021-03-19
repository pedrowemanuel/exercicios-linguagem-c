#include <stdio.h> 
#include <stdlib.h> 

int main(){

    int numero, absoluto;
    
    printf("DIGITE UM NÚMERO INTEIRO: ");
    scanf("%d",&numero);

    absoluto = abs(numero);
    
    printf("NÚMERO ABSOLUTO: %d \n", absoluto);

    return 0;
}