/*
    impressão ascendente - impressão ascendente dos números do 1-10
    Escrito por Luan Almeida - NiceStudio
    25/03/2023 - V 1.0
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) 
{

    int i = 1;

    for ( i<10 ;i <= 10;++i)
    {
        if ( i >= 10 ) printf ("%d.",i);
        else printf ("%d, ", i );
    }

    system ("pause > null");
    return 0;

}