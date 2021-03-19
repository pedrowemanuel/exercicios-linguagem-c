/* As estruturas de dados do tipo Union permite armazenar diferentes tipos de dados no mesmo local de memória.
A grande vantagem dessa estrutura esta na organização da memória, e no seu reaproveitamento, isto é, as unions fornecem uma maneira eficiente de usar o mesmo local de memória para vários propósitos. */

#include <stdio.h>
#include <string.h>
int main( ) { 
  union {
   int i;
   float f;
   char str[20];
  } dado;
 
  dado.i = 10; /* union sera do tipo inteiro */
  printf( "Sou inteiro : %d\n", dado.i);
  dado.f = 34.5; /* union sera do tipo float */
  printf( "Sou real : %f\n", dado.f);
  strcpy(dado.str,"Sou String"); /* union sera do tipo String */
  printf( "Sou string : %s\n", dado.str);

   return 0;
}
