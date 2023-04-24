#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

      int ork, twi, face, out, total, resp;
      float por1, por2, por3, por4;

      do
      {
          printf ("\n Alunos que usam Orkut:");
          scanf ("%d", &ork);

          printf ("\n Alunos que usam Twitter:");
          scanf ("%d", &twi);

          printf ("\n Alunos que usam Facebook:");
          scanf ("%d", &face);

          printf ("\n Alunos que usam Outras:");
          scanf ("%d", &out);

          total = ork + twi + face + out;
          por1 = (100 * ork) / total;
          por2 = (100 * twi) / total;
          por3 = (100 * face) / total;
          por4 = (100 * out) / total;

          printf ("\n 1 - para continuar. 0 - para encerrar.");
          scanf ("%d", &resp);
          system ("cls");
      } while (resp != 0);

      printf ("Rede         N° de alunos           %% \n");
      printf ("------------------------------------------ \n");
      printf ("Orkut           %d                 %.f \n", ork, por1);
      printf ("Twitter         %d                 %.f \n", twi, por2);
      printf ("Facebook        %d                 %.f \n", face, por3);
      printf ("Outras          %d                 %.f \n", out, por4);
      printf ("------------------------------------------ \n");
      printf ("Total           %d                100%% \n", total);

return (0);

 }