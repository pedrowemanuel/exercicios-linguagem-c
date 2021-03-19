#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct campoBits {
  unsigned a : 4;
  unsigned b : 2;
};

int main() {

  struct campoBits cb;

  cb.a = 15; // 0 até 15
  cb.b = 3; // 0 até 4

  printf("A: %d,  B: %d\n", cb.a, cb.b);

  return 0;

}