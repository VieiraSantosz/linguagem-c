#include <stdio.h>
#include <locale.h>
#include <string.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

     char nome[2][30];
     float nota[3][1], media, soma = 0;
     int lin, col;

     for (lin = 0; lin <= 2; lin++)
     {
         printf ("Nome do %d° aluno:", lin+1);
         fflush (stdin);
         gets (nome[lin]);
         
         for (col = 0; col <= 0; col++)
         {
             printf ("Nota desse aluno:");
             scanf ("%f", &nota[lin][col]);
             printf ("\n");
             soma += nota[lin][col];
         }
     }

     for (lin = 0; lin <= 2; lin++)
     {
         puts (nome[lin]);
         
         for (col = 0; col <= 0; col++)
         {
             printf ("Nota - %.2f \n", nota[lin][col]);
             printf ("\n");
         }
     }

        media = soma / 3;
        printf ("Média da classe - %.2f \n", media);


return 0;

}