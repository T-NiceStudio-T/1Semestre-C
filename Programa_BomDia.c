/* 
    Bom Dia
    Programa para exibir seu nome e Ra
    Feito por Luan Almeida
    21 / 03 / 2023
    V1
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char nome[55], ra[12];

    printf ("\n *** PROGRAMA : BOM DIA ***\n");

    printf (" digite seu nome : ");
    scanf  ("%s",&nome);
    printf (" digite seu RA : ");
    scanf  ("%s",&ra);

    printf ("\n Bom dia %s",nome);
    printf ("\n Seu RA : %s",ra);

    system ("pause > null");
    return 0;

}