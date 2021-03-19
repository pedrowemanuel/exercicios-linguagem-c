#include <stdio.h>

struct coor {
  long int x;
  long int y;
  long int z;
};

int main() {
  struct coor c = {9892223, 32332323};

  printf("x: %li, y: %li, z: %li", c.x, c.y, c.z); // z: 0

  return 0;
}