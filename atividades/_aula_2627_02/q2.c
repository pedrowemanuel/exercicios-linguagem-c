#include <stdio.h>
struct Estoque {
  unsigned numeroPedido;
  unsigned numeroPeca;
  char nomePeca[30];
  float precoPeca;
};
int main() {
  struct Estoque e1;

  printf("Digite o número do pedido: ");
  scanf("%u", &(e1.numeroPedido));
  
  printf("Digite o nome da peça: ");
  scanf("%s", (e1.nomePeca));

  printf("Digite o preço da peça: ");
  scanf("%f", &(e1.precoPeca));

  printf("Digite o número da peça: ");
  scanf("%u", &(e1.numeroPeca));

  // exibir os dados
  printf("Pedido: %u\nPeça: %u - %s: R$ %.2f\n", e1.numeroPedido, e1.numeroPeca, e1.nomePeca, e1.precoPeca);

  return 0;
}