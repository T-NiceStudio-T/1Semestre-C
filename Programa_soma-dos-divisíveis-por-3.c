/*
    Soma dos divisiveis por 3 - imprimir todos os numeros divisiveis por 3 entra 1-30 e no final somar ele e expor o resultado
    Escrito por Luan Almeida - NiceStudio
    25/03/2023 - V 1.0
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
 {

    int div, som;
    div = 0;
    som = 0;

    for ( ; div <= 30; div++)
    {
        if ((div%3) == 0)
        {
            printf ("%d  ",div);
            som = som + div;
        }
    }

    printf ("\nsoma de todos os numero divisiveis por 3 entre 1-30 e : %d",som);

    system ("pause > null");
    return 0;

 }