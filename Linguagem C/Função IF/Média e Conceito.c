#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

         float p1, p2, p3, media;

          printf ("Digite a nota da P1:");
          scanf ("%f", &p1);

          printf ("Digite a nota da P2:");
          scanf ("%f", &p2);

          printf ("Digite a nota da P3:");
          scanf ("%f", &p3);

           media = (p1 + (p2 * 2) + (p3 * 2)) / 5;
           printf (" \n Sua média: %.2f", media);
           if (media >= 8) {
                printf ("\n Conceito A! \n");
           }
             else if (media >= 7 && media < 8) {
                printf ("\n Conceito B! \n");
            }
              else if (media >= 6 && media < 7) {
                printf ("\n Conceito C! \n");
              }
               else if (media >= 5 && media < 6) {
                 printf ("\n Conceito D! \n");
               }
                else {
                  printf ("\n Conceito E! \n");
                }

return (0);

}