#include <stdio.h>

int main(){
    
    int contador = 0, alturaJose = 150, alturaPedro = 110;

    while(alturaJose > alturaPedro) {
        alturaPedro += 3;
        alturaJose += 2;
        contador++;
    }

    printf("\n PEDRO SERÁ MAIOR QUE JOSÉ EM %d ANOS\n\n", contador);
    
    return 0;
}