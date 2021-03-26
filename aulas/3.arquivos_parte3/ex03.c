#include <stdio.h>
#include <stdlib.h>

#define MAX_CONTAS 10

typedef struct Conta {
    int numConta;
    char nomeCliente[30];
    float saldo;
} conta;

int main() {

    conta contas[MAX_CONTAS];
    size_t i;

    for (i = 0; i < MAX_CONTAS; i++)
        contas[i].numConta = 0;
    
    return 0;
}