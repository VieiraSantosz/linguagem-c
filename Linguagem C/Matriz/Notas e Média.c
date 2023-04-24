#include <stdio.h>
#include <conio.h>
#include <locale.h>

 int main (){
     setlocale (LC_ALL, "Portuguese");

     float notas[3][3];
     float media[3], soma;
     int lin, col;

     for (lin = 0; lin < 3; lin++)
     {
         printf ("\n");
         printf ("%d° ALUNO \n", lin+1);

        for (col = 0; col < 3; col++)
        {
            printf ("%d° notas:", col+1);
            scanf ("%f", &notas[lin][col]);
            soma = soma + notas[lin][col];
        }
            media[lin] = soma / 3;
            soma = 0;
     }
        
     system ("cls");
     for (lin = 0; lin < 3; lin++)
     {
         printf ("\n");
         printf ("%d° ALUNO \n", lin+1);

        for (col = 0; col < 3; col++)
        {
            printf ("%d° notas: %.f \n", col+1, notas[lin][col]);
        }
            printf ("Média: %.2f", media[lin]);
            printf ("\n");
     }

return 0;
 
}