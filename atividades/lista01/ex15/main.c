#include <stdio.h>

int main(){
    float salario;
    int valorPorDia;
    
    printf("QUANTOS DIAS O VENDEDOR TRABALHOU: ");
    scanf("%d",&valorPorDia);
    
    salario = valorPorDia * 50.25;

    if(valorPorDia <= 20  && valorPorDia > 10) {
        salario *= 1.2;
    } else if(valorPorDia > 20){
        salario *= 1.3;
    }
    
    salario *= 0.9;
    
    printf("O VALOR DO SALÁRIO LÍQUIDO É: %.2f \n", salario);
    return 0;
}