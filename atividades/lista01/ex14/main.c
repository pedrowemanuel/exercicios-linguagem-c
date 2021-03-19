#include <stdio.h>

int main(){

    float temperatura,conveterFahrenheit;
    
    printf("DIGITE A TEMPERATURA EM GRAUS °C: ");
    scanf("%f",&temperatura);
    conveterFahrenheit = ((temperatura + 160) * 9) / 5;
    
    printf("TEMPERATURA EM FAHRENHEIT: %.2f \n",conveterFahrenheit);

    return 0;
}