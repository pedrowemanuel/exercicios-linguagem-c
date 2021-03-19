#include <stdio.h>

int main(){

    char vencedor;

    float votosNulo, votosPaulo, votosRenata, votosBranco;

    int voto, confirmarVoto, paulo = 0, renata = 0, branco = 0, nulo = 0;

    for(int votos = 0; votos >= 0; votos++) {
        printf("EM QUEM DESEJA VOTAR: \n");
        printf("5- PAULO\n");
        printf("7- RENATA.\n");
        printf("0- BRANCO\n");
        scanf("%d", &voto);

        printf("CONFIRME O SEU VOTO: \n");
        scanf("%d", &confirmarVoto);
        printf("\n");
        
        if(voto != confirmarVoto) {
            printf("OS VOTOS ESTÃO DIFERENTES\n");
        } else {
            if(voto < 0 && votos > 0) {

                printf("VOTOS NO TOTAL: %d\n", votos);

                printf("PORCENTAGEM DE VOTOS: \n");

                printf("PAULO: %0.2f%% \n", votosPaulo = 100*paulo / votos);

                printf("RENATA: %0.2f%% \n", votosRenata = 100*renata / votos);

                printf("NULOS: %0.2f%% \n", votosNulo = 100*nulo / votos);

                printf("VOTOS EM BRANCO: %0.2f%% \n", votosBranco = 100*branco / votos);

                if(renata > paulo){
                  printf("VENCEDOR: %s\n", "RENATA");
                }else if(paulo > renata){
                  printf("VENCEDOR: %s\n", "PAULO");
                }else if(renata == paulo){
                  printf("VENCEDOR: %s\n", "EMPATE");
                }

                votos = -2;
            
            }else {
              
                switch(voto) {
                  case 0:
                    branco++;
                    break;
                  case 5:
                    paulo++;
                    break;
                  case 7:
                    renata++;
                    break;
                  default:
                    nulo++;
                    break;
                }
            }
        }
    }

    return 0;
}