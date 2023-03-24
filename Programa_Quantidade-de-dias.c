/* 
    Quantidade de dias
    Programa que nos diz quantos dias tem um mes de determinado ano
    Feito por Luan Almeida
    21 / 03 / 2023
    V1
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int dias, mes, ano, anobis;

    printf ("\n*** PROGRAMA : QUANTIDADE DE DIAS ***\n");
    printf ("digite o ano : ");
    scanf  ("%d",&ano);
    printf ("digite o numero do mes : ");
    scanf  ("%d",&mes);

    anobis = ano % 4;
    if (anobis == 0 && mes == 3) dias = 29;
    else if (mes == 3 ) dias = 28;
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) dias = 30;
    else dias = 31;

    printf ("\nesse mes possui %d",dias);

    system ("pause > null");
    return 0;

    }