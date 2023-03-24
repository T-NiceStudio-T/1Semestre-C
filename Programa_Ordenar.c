/* 
    Ordenar
    Programa serve para organizar numeros em orgem crescente
    Feito por Luan Almeida
    21 / 03 / 2023
    V1
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

    float num1, num2, num3, temp;


    printf ("\n *** PROGRAMA : Ordenar ***\n");

    printf ("digite o primeiro numero : ");
    scanf  ("%f",&num1);
    printf ("digite o segundo numero : ");
    scanf  ("%f",&num2);
    printf ("digite o terceiro numero : ");
    scanf  ("%f",&num3);

    if (num1 > num2)
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
    if (num1 > num3)
        {
            temp = num1;
            num1 = num3;
            num3 = temp;
        }
    if (num2 > num3)
        {
            temp = num2;
            num2 = num3;
            num3 = temp;
        }


    printf ("\n%f , %f , %f",num1,num2,num3);

    system ("pause > null");
    return 0;

}