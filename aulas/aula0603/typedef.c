#include <stdio.h>
#include <stdlib.h>

typedef float real;

typedef struct Ponto {
  int x;
  int y;
  float m;
} px;

void media(px *);

int main() {

  real x = 10.2;

  px p;

  p.x = 6;
  p.y = 5;

  media(&p);

  printf("%d \n", p.x);
  printf("%d \n", p.y);
  printf("%.2f \n", p.m);

  return 0;

}

void media(px *q) {
  q->m = ((q->x + q->y) / 2.0);
}