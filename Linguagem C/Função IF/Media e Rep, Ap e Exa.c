#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

      float p1, p2, media;

       printf ("Digite a nota da P1:");
       scanf ("%f", &p1);

       printf ("Digite a nota da P2:");
       scanf ("%f", &p2);

       media = (p1 + p2) / 2;
       printf (" \n Sua média: %.2f", media);

       if (media < 4) {
           printf ("\n REPROVADO! \n");
       }
        else if (media >= 7) {
            printf ("\n APROVADO! \n");
        }
         else {
             printf ("\n EXAME! \n");
         }

return (0);

 }