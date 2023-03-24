/* 
    Comparacao
    Programa serve para comparar quem e mais velho
    Feito por Luan Almeida
    21 / 03 / 2023
    V1
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int idade_maria, idade_joao;

    printf ("\n*** PROGRAMA : COMPARACAO ***");
    printf ("\ndigite a idade de Maria : ");
    scanf  ("%d",&idade_maria);
    printf ("digite a idade de Joao : ");
    scanf  ("%d",&idade_joao);

    if (idade_joao > idade_maria) 
            printf ("\nJoao e mais velho que Maria");
    else if (idade_joao == idade_maria)
            printf ("\nJoao e Maria possuem a mesma idade");
    else
            printf ("\nMaria e mais velha que Joao");

    system ("pause > null");
    return 0;

} 