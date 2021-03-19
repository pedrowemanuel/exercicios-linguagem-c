#include <stdio.h>

int main(){

    float celsius, fahrenheit;

    for (int contador = 10; contador <= 100; contador += 10) { 
        celsius = contador;
        fahrenheit = 32 + (celsius * 9 / 5);

        printf("%.2f °C => %.2f °F \n", celsius, fahrenheit); 
    
    }

    return 0;
}