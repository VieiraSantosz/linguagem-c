#include <stdio.h>
#include <locale.h>
#include <string.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

     struct dados
     {
         char nome[30];
         int idade;
         char sexo[1];
         float salario;
         int filho;
     } habi[3], aux;

        for (int i = 0; i <= 2; i++)
        {
            printf ("Digite seu nome: ");
            fflush (stdin);
            gets (habi[i].nome);

            printf ("Sua idade: ");
            scanf ("%d", &habi[i].idade);

            printf ("Seu sexo. M - Masculino ou F - Feminino: ");
            fflush (stdin);
            gets (habi[i].sexo);

            printf ("Sua salário: ");
            scanf ("%f", &habi[i].salario);

            printf ("Quantidade de filho(s): ");
            scanf ("%d", &habi[i].filho);
            printf ("\n\n");
        }

        //Ordenação dos nomes
        for (int i = 0; i <= 1; i++)
        {
            for (int k = i + 1; k <= 2; k++)
            {
            if (strcmp (habi[i].nome, habi[k].nome) > 0) { 
                aux = habi[i];
                habi[i] = habi[k];
                habi[k] = aux;
            }
            }
        }

        system ("cls");
        for (int i = 0; i <= 2; i++)
        {
            printf ("Nome: %s \n", habi[i].nome);

            printf ("Idade: %d \n", habi[i].idade);

            strupr (habi[i].sexo);
            if (strcmp (habi[i].sexo, "M") == 0) {
                printf ("Sexo: Masculino \n");
            } else {
                printf ("Sexo: Feminino \n");
            }

            printf ("Salário: %.2f \n", habi[i].salario);

            printf ("Quantidade de filho(s): %d \n\n", habi[i].filho);
        }


return 0;

 }