#include <stdio.h>
#include <stdlib.h>
// int myfunc(int); // protótipo

typedef void (*Func) ();

void multiplicar(int, int, int *);
void adicionar(int, int, int *);
void subtrair(int, int, int *);
void dividir(int, int, int *);

int main(int argc, char *argv[]) {
  // int (*pf) (int), r;

  // pf = myfunc; 

  // r = pf(10);

  // r = (*pf) (10); // melhor forma

  int retorno, x, y;
  void (*operacao) (int, int, int*);
  Func v[4] = {multiplicar, adicionar, subtrair, dividir};

  if (argc < 4) {
    printf("Formato: \n");
    printf("\t\t %s <valor> <valor2> <valor2> \n", argv[0]);
    exit(1);
  }

  x = atoi(argv[1]); // primeiro valor fornecido
  y = atoi(argv[2]); // segundo valor fornecido
  
  operacao = v[atoi(argv[3])];

  (*operacao) (x, y, &retorno);

  printf("Resultado: %d \n", retorno);

  return 0;
}

void multiplicar(int a, int b, int *pRetorno) {
  *pRetorno = a * b;
}
void adicionar(int a, int b, int *pRetorno) {
  *pRetorno = a + b;
}
void subtrair(int a, int b, int *pRetorno) {
  *pRetorno = a - b;
}
void dividir(int a, int b, int *pRetorno) {
  *pRetorno = (b) ? a / b : 0;
}
