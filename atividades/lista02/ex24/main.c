#include <stdio.h>
#include <math.h>

int hipotenusa(void) {
	float cateto1, cateto2;
	
	printf("CATETO 1: ");
	scanf("%f", &cateto1);
	
	printf("CATETO 2: ");
	scanf("%f", &cateto2);
	
	if(cateto1 <= 500 || cateto2 <= 500)
		return (sqrt((cateto1*cateto1) + (cateto2*cateto2)));

  printf("DIGITE VALORES ABAIXO DE 500 \n");
  return 0;
	
}

int cateto(void) {
	float cateto, hipotenusa;
	
	printf("Hipotenusa: ");
	scanf("%f", &hipotenusa);
	
	printf("Cateto: ");
	scanf("%f", &cateto);
	
	if(hipotenusa <= 500 || cateto <= 500){
		return(sqrt((hipotenusa*hipotenusa) - (cateto*cateto)));
	}else{
		printf("Digite valores abaixo de 500\n");
		return 0;
	}
}

int main(void) {
	float resultado;
	int escolha;
	
	printf("1- HIPOTENUSA\n2- CATETO\n");
	printf("O que quer descobrir? ");
	scanf("%i", &escolha);
	
	switch(escolha) {
		case 1:
			resultado = hipotenusa();
			break;
		case 2:
			resultado = cateto();
			break;
	}

  if(resultado > 0){
	  printf("RESULTADO: %.2f cm\n", resultado);
	  return 0;
  }
  
  return 0;

}