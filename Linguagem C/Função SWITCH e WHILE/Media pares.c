#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

     int media, resp;
     float P1, P2;

     do
     {
         printf ("Digite a nota da P1:");
         scanf ("%f", &P1);

         printf ("Digite a nota da P2:");
         scanf ("%f", &P2);

        media = (P1 + P2) / 2;
         if (media % 2 == 0 ) {
          printf ("Média dos pares = %d \n", media);
         }
         else {
          printf ("A média não é um n° par! \n");
         }

         printf ("\n Deseja continuar? \n 1 - continuar e 0 - finalizar. \n");
         printf ("Sua resposta:");
         scanf ("%d", &resp);
     } while (resp != 0);
 }