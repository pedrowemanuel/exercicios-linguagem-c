#include <stdio.h>

// função para incrementar e exibir a variavel
void mostrarVariavel(void) {
  // declarando a variavel com o static
  static int i = 0;

  // incrementando e exibindo
  printf("Variável com static = %i\n", ++i);
}
 
int main() {
  /* laço para mostrar que a variavel
     vai guardar o seu valor a cada repetição
  */
  for(int x = 0;x <= 3; x++)
    mostrarVariavel();

  return 0;
}