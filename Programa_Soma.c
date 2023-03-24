#include <stdio.h>
/* 
    Soma
    Calculadora basica para somar 2 numeros
    Feito por Luan Almeida
    21 / 03 / 2023
    V1
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