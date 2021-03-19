#include <stdio.h>
#include <stdlib.h>

typedef void (*Funcao) (float*);

void sacar(float*);
void exibirSaldo(float*);
void depositar(float*);

int main() {

  int operacao_escolhida, sair = 0;
  float saldo = 0.0;
  float *ponteiroSaldo = NULL;
  void (*operacao) (float*);
  Funcao v[3] = {depositar, sacar, exibirSaldo};

  ponteiroSaldo = &saldo;

  do {
      printf("\n----- Banco ------ \n\n");
      printf("2 -> Saldo;\n");
      printf("1 -> Sacar;\n");
      printf("0 -> Depositar;\n");
      printf("Outro valor -> Encerrar a Sessão;\n\n");
      printf("Informe o valor de uma das opções: ");
      scanf("%d", &operacao_escolhida); 

      if (operacao_escolhida < 0 || operacao_escolhida > 2) {
        sair = 1;
      } else {
        operacao = v[operacao_escolhida];
        (*operacao) (ponteiroSaldo);
      }

  } while (!sair);

  return 0;
}

void sacar(float *saldo) {
  float saque = 0.0;

  printf("Informe valor do saque R$: ");
  scanf("%f", &saque); 

  *saldo -= (*saldo >= saque) ? saque : 0;

}
void exibirSaldo(float *saldo) {
  printf("Saldo: %f", *saldo);
}
void depositar(float *saldo) {
  float deposito = 0.0;

  printf("Informe o valor do deposito R$: ");
  scanf("%f", &deposito); 

  *saldo += deposito;
}
