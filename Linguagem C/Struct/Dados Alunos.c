#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

     struct dados
     {
         char resultado;
         char nome[30];
         float notas[3];
         float media[4];
     };

     struct dados aluno[3];
     int i, k, soma = 0;


        for (i = 0; i <= 2; i++)
        {
            printf ("\n Nome do %d° aluno:", i+1);
            fflush (stdin);
            gets (aluno[i].nome);

            for (k = 0; k <= 2; k++)
            {
                printf ("Digite a %d° nota:", k+1);
                scanf ("%f", &aluno[i].notas[k]);
                soma += aluno[i].notas[k];
            }
                aluno[i].media[i] = soma / 3;
                soma = 0;
        }

        system ("cls");
        for (i = 0; i <= 2; i++)
        {
            printf ("\n");
            printf ("Aluno - %s \n", aluno[i].nome);

            for (k = 0; k <= 2; k++)
            {
                printf ("Nota na Prova %d: %.2f \n", k+1, aluno[i].notas[k]);
            }
                printf ("Sua Média: %.2f \n", aluno[i].media[i]);

                if (aluno[i].media[i] > 6) {
                    printf ("APROVADO \n");
                } else {
                    printf ("REPROVADO \n");
                }
        }
      







 }