#include <stdio.h>

int main() {

    // operadores bit a bit

    // & | ^ >> <<

    // AND

    char ch = 10;

    unsigned char mask = 253;

    unsigned char res1 = ch & mask; // resulatado é sem a paridade ligada

    printf("RESULTADO: %d \n", res1); // %c é caractere
    
    // OUR 

    unsigned char res2 = ch | mask; 

    printf("RESULTADO: %d \n", res2); 

    // XOR 

    unsigned char res3 = 10 ^ 5; 

    printf("RESULTADO: %d \n", res3); 

    // ex

    unsigned char x = 10, y = 7;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("x: %u \n", x); 
    printf("y: %u \n", y); 

    // deslocamento

    char valor1 = 7;

    valor1 = valor1 << 1;
    valor1 = valor1 << 3;

    printf("valor: %u \n", valor1); 

    // complemento de um (NOT)

    char valor2 = 10;
    char valor3;

    valor3 = ~valor2 + 1;

    printf("valor: %d \n", valor3); 

    // operador ternario

    int valor4 = 10;
    int parOuImpar = (valor4 % 2) ? 1 : 0;

    printf("É PAR?: %d \n", parOuImpar);

    ///////////

    int valor5 = 7;
    int valor6 = 2;
    double resultadoDaDivisao;

    resultadoDaDivisao = ((double) valor5 / valor6);

    printf("RESULTADO DA DIVISÃO: %f \n", resultadoDaDivisao);

    return 0;
}