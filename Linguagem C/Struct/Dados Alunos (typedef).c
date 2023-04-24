#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

     typedef struct
     {
         char resultado;
         char nome[3][30];
         float notas[3][2];
         float media[4];
     }dados;

     dados aluno;
     int lin, col, soma = 0;


        for (lin = 0; lin <= 2; lin++)
        {
            printf ("\n Nome do %d° aluno:", lin+1);
            fflush (stdin);
            gets (aluno.nome[lin]);

            for (col = 0; col <= 1; col++)
            {
                printf ("Digite a %d° nota:", col+1);
                scanf ("%f", &aluno.notas[lin][col]);
                soma += aluno.notas[lin][col];
            }
                aluno.media[lin] = soma / 2;
                soma = 0;
        }

        for (lin = 0; lin <= 2; lin++)
        {
            printf ("\n");
            printf ("Aluno - %s \n", aluno.nome[lin]);

            for (col = 0; col <= 1; col++)
            {
                printf ("Nota na Prova %d: %.2f \n", col+1, aluno.notas[lin][col]);
            }
                printf ("Sua Média: %.2f \n", aluno.media[lin]);

                if (aluno.media[lin] > 6) {
                    printf ("APROVADO \n");
                } else {
                    printf ("REPROVADO \n");
                }
        }


 }