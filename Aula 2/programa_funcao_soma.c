/*
    funcao soma - Inserir 2 numeros, somar eles através de uma função e mostrar o resultado.
    Escrito por Luan Almeida - NiceStudio
    25/03/2023 - V 1.0
*/

#include <stdlib.h>
#include <stdio.h>

int soma(int x, int y){
    return x+y;
}
int main (void){ 
    int a = 0, b = 0, resultado;
    printf ("digite dois numeros : ");
    scanf ("%d%d", &a, &b);
    resultado = soma (a,b);
    printf ("\nresultado da soma : %d",resultado);
    return 0;
}