#include <stdio.h>
#include <locale.h>
#include <string.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

     char resp[1];
     float ano, preco, novopreco;
     int velho, novo, total;

     do {
         printf ("Ano do carro:");
         scanf ("%f", &ano);
         printf ("Valor do carro:");
         scanf ("%f", &preco);

         if (ano <= 2000) {
             novopreco = preco * 0.88;
             ++velho;
             ++total;
             printf ("Ano do carro %.f, novo valor - %.2f \n", ano, novopreco);
         } else {
             novopreco = preco * 0.93;
             ++novo;
             ++total;
             printf ("Ano do carro %.f, novo valor - %.2f \n", ano, novopreco);
            }

            printf ("Deseja continuar? \n");
            printf ("(S) Sim, continua calculando o desconto - (N) Não, sai do sistema.");
            scanf ("%s", &resp);
            
     } while (strcmp (resp, "N" || "n") != 0);

     printf ("\n");
     printf ("Total de carros até 2000 - %d \n", velho);
     printf ("Total de carros depois 2000 - %d \n", novo);
     printf ("Total de carros no geral - %d \n", total);

return (0);

 }