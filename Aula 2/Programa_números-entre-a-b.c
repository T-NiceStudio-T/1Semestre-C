/*
    números entre a-b - Ingressar 2 números (a e b) do tipo inteiro e fazer a impressão dos números entre a-b.
    Escrito por Luan Almeida - NiceStudio
    25/03/2023 - V 1.0
*/

int main ()
{

  int a, b, i;

  printf ("insira o valor de A : ");
  scanf  ("%d",&a);
  printf ("insira o valor de B : ");
  scanf  ("%d",&b);         

  if (a > b) 
  {
    i = a;
    a = b;
    b = i;
  }
  printf ("os numeros entre %d e %d sao : \n",a, b);
  for ( ; a < b ; ++a )
    {   
        if (a == (b-1) ) printf ("%d. ",a);
        else printf ("%d, ",a);
    }
    
system ("pause > null");
return 0;

}