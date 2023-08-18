/*
    soma20 - Ingressar numeros até a soma dar 20 e peça para somar até dar 20.
    Escrito por Luan Almeida - NiceStudio
    25/03/2023 - V 1.0
*/

#include <stdlib.h.>
#include <stdio.h>

int main (){
    int a = 0, soma = 0;
    printf ("\n**** some numeros ate alcancar um resultado => 20 ****");
    printf ("\ndigite um numero para ser adicionado a somado : ");
    scanf ("%d",&a);
    soma += a;
    do
    {
        printf ("\ndigite um numero para ser somado : ");
        scanf ("%d",&a);
        soma += a;
    } while ( soma < 20);
    printf ("\n\nresultado da soma : %d",soma);
    return 0;

}