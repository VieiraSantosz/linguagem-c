#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");
    
     float sa, nsa;

      printf ("Reajuste de salário. \n");
      printf ("\n Digite seu salário:");
      scanf ("%f", &sa);

      if (sa < 500) {
          nsa = sa * 1.15;
          printf ("Reajuste do seu salário (menor que 500): %.2f \n", nsa);
      }
       else if (sa > 1000) {
          nsa = sa * 1.05;
          printf ("Reajuste do seu salário (maior que 1000): %.2f \n", nsa);
       }
        else {
            nsa = sa * 1.10;
          printf ("Reajuste do seu salário (entre 500 e 1000): %.2f \n", nsa);
        }

return (0);
 
 }