#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum diasSemana {
  DOM=0, SEG, TER
};

int main() {

  enum diasSemana ds;
  char *nomeDias[] = {"domingo", "segunda", "terca"};

  for(ds = DOM; ds <= TER; ds++) {
    printf("%s \n", nomeDias[ds]);
  }

  return 0;

}