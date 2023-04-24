#include <stdio.h>
#include <locale.h>
#include <math.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

     float a, b, b2, c, delta, raizdelta, r1, r2;

     printf ("Digite o valor de *a*:");
     scanf ("%f", &a);

     printf ("Digite o valor de *b*:");
     scanf ("%f", &b);

     printf ("Digite o valor de *c*:");
     scanf ("%f", &c);

     if (a == 0) {
         printf (" \n NÃO É POSSÍVEL CALCULAR.");
         printf (" \n Motivo - A = 0 \n");
     } else {
        b2 = pow (b,2);
        delta = b2 - 4*a*c;
        if (delta < 0) {
            printf (" \n NÃO EXISTEM RAÍZES.");
            printf (" \n Motivo - Delta menor que 0");
            printf ("\n %.f", delta);
        } 

        raizdelta = sqrt (delta);

         r1 = ((-b) + raizdelta) / 2*a;
         r2 = ((-b) - raizdelta) / 2*a;
         if (r1 == r2) {
            printf ("Apenas 1 raiz: %.2f", r1);
        }
         else  {
            printf (" \n Raiz 1: %.2f", r1);
            printf (" \n Raiz 2: %.2f", r2);
         }
     }

return (0);

 }
     

        
