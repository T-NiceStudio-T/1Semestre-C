#include <stdio.h>
/* 
    Soma -  Calcular soma de 2 numeros
    Escrito por Luan Almeida - NiceStudio
    21/03/2023 - V 1.0
*/

#include <stdlib.h>

int main (void) {

    float num1, num2, resultado;

    printf ("\n *** PROGRAMA : SOMA ***");
    printf ("\n digite o primeiro numero : ");
    scanf  ("%f",&num1);
    printf ("\n digite o segundo numero : ");
    scanf  ("%f",&num2);

    resultado = num1 + num2;

    printf ("\n Resultado da soma : %f",resultado);

    system ("pause > null");
    return 0;

}