#include <stdio.h>
#include <locale.h>
#include <string.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

      char n1[20], n2[20], n3[20], n4[20], n5[20];
      char resp[5];

      do
      {
          printf ("\n Digite o 1° nome:");
          scanf ("%s", &n1);

          printf ("\n Digite o 2° nome:");
          scanf ("%s", &n2);

          printf ("\n Digite o 3° nome:");
          scanf ("%s", &n3);

          printf ("\n Digite o 4° nome:");
          scanf ("%s", &n4);

          printf ("\n Digite o 5° nome:");
          scanf ("%s", &n5);

           printf ("Olá %s, seja Bem-Vindo! \n", n1);
           printf ("Olá %s, seja Bem-Vindo! \n", n2);
           printf ("Olá %s, seja Bem-Vindo! \n", n3);
           printf ("Olá %s, seja Bem-Vindo! \n", n4);
           printf ("Olá %s, seja Bem-Vindo! \n", n5);

            printf ("\n Deseja continar? \n inicio - continuar e fim - terminar!");
            printf ("\n Digite sua resposta:");
            scanf ("%s", &resp);
      } while (strcmp (resp, "fim") != 0);

return (0);

 }