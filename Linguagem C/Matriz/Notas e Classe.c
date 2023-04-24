#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

     char aluno[3][30];
     float nota[3][4], media[3];
     float soma, classe, mediaclasse, x, y;
     int lin, col;

     for (lin = 0; lin <= 2; lin++)
     {
         printf ("\n");
         printf ("Digite o do %d° nome do aluno:", lin+1);
         fflush (stdin);
         gets (aluno[lin]);
     
        for (col = 0; col <= 3; col++)
        {
            printf ("Digite a %d° nota:", col+1);
            scanf ("%f", &nota[lin][col]);
            soma += nota[lin][col];
            y++;
        }
            media[lin] = soma / 4;
            soma = 0;
            classe += media[lin];
    }

    system ("cls");
    for (lin = 0; lin <= 2; lin++)
    {
        printf ("\n");
        printf ("Aluno - %s \n", aluno[lin]);

        for (col = 0; col <= 3; col++)
        {
            printf ("Nota da prova %d - %.2f \n", col+1, nota[lin][col]);
        }
            printf ("Média - %.2f \n", media[lin]);
    }

    mediaclasse = classe / 3;
    printf ("\n");
    printf ("MÉDIA DA CLASSE - %.2f \n", mediaclasse);

    for (lin = 0; lin <= 2; lin++)
    {
        for (col = 0; col <= 3; col++)
        {
            if (nota[lin][col] > mediaclasse) {
                soma ++;
            }
        }
    }

    x = (100 * soma) / y;
    printf ("Notas acima da média - %.f \n", soma);
    printf ("Porcentagem de notas acima da média - %.2f%% \n\n", x);
   
    system ("pause");

return 0;

}