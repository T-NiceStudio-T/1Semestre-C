/*
    numeros_30a5 - imprime todos os números entre 30 e 5 (nesta ordem) divisíveis por 3, e no final imprime sua soma.
    Escrito por Luan Almeida - NiceStudio
    27/06/2023 - V 1.0
*/

#include <stdlib.h>
#include <stdio.h>

int main (){
    int soma = 0, resto = 0, i = 30;
    for (i = 30; i > 5; --i)
    {
        resto = i % 3;
        if ( resto == 0 ){
            printf ("%d ,",i);
            soma += i; 
        }
    }
    printf ("/nA soma de todos esse numeros é : %d", soma);
    return 0;
} 