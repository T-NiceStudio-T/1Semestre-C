/*
    impressão descendente - impressão descendente dos números do 20-0
    Escrito por Luan Almeida - NiceStudio
    25/03/2023 - V 1.0
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) 
{

    int i = 20;

    for ( i>20 ;i >= 0; --i)
    {
        if ( i <= 0 ) printf ("%d.",i);
        else printf ("%d, ", i );
    }

    system ("pause > null");
    return 0;

}