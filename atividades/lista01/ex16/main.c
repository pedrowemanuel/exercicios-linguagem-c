#include <stdio.h>

int main(){

    float horaAula,inss,salarioBruto,salarioLiquido;
    int horasTrabalhadas;

    printf("DIGITE O INSS: ");
    scanf("%f",&inss);
    
    printf("DIGITE O VALOR DA HORA AULA: ");
    scanf("%f",&horaAula);
    
    printf("DIGITE QUANTAS HORAS FORAM TRABALHADAS: ");
    scanf("%d",&horasTrabalhadas);
  

    salarioBruto = horaAula*horasTrabalhadas;
    salarioLiquido = salarioBruto * (( 100 - inss ) / 100);

    printf("VALOR DO SALÁRIO BRUTO: R$ %.2f \n", salarioBruto);
    printf("VALOR DO SALÁRIO LÍQUIDO: R$ %.2f \n", salarioLiquido);
    
    return 0;
}