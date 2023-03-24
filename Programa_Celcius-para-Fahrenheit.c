/* 
    Celcius para Fahrenheit
    Programa para connverter Celcius em Fahrenheit
    Feito por Luan Almeida
    21 / 03 / 2023
    V1
*/

#include <stdio.h>
#include <stdlib.h>

int main (void ) {

    float celcius, fahrenheit;

    printf ("\n*** PROGRAMA : Celcius para Fahrenheit ***\n");
    printf ("digite a temperatura em graus celcius : ");
    scanf  ("%f",&celcius);

    fahrenheit = celcius*1.8+32;

    printf ("%2.2f graus celcius equivale a %2.2f graus Fahremheit",celcius,fahrenheit);

    system ("pause > null");
    return 0;
}