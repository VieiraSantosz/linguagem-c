#include <stdio.h>
#include <math.h>
#include <locale.h>

 int main () { 
  setlocale(LC_ALL,"Portuguese");

  float num, raiz, pot;

  printf ("Digite um número inteiro:");
  scanf ("%f", &num);

 raiz = sqrt (num);
 printf("\n A raiz quadrada de %.f é: %.2f.", num, raiz);

pot = pow (num,2); //elevando o valor de um n° ao quadrado
printf("\n Valor de %.f ao quadrado: %.f \n", num, pot);

return (0);

 }
