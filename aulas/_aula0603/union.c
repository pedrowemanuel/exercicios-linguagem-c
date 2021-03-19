#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// As uniões(Union) são estruturas de dados que são capazes de armazenar mais de um tipo de dado no mesmo local na memória. Com as unions, o mesmo local de memória pode ser usado para diferentes propósitos.

union numero {
  int a;
  float b;
};

int main() {

  union numero n;

  n.a = 256; 
  n.b = 2.4;

  printf("%d, %f \n", n.a, n.b);

  return 0;

}