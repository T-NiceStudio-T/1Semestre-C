/*
    area_perimetro - calcular e escrever a área e o perímetro de um retângulo usando funções.
    Escrito por Luan Almeida - NiceStudio
    25/03/2023 - V 1.0
*/

#include <stdlib.h>
#include <stdio.h>

int c_area (int x, int y){
    return x*y;
}

int main () {
    int a = 0, b = 0, area, peri;
    printf ("insira a altura e a base do retangulo (cm) : \n");
    scanf ("%d%d",&a, &b);
    area = c_area (a,b);
    peri = 2*(a+b);
    printf ("\narea : %d cm quadrado \nperimetro : %d cm", area, peri);
    return 0;
}