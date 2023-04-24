#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

     struct dados 
     {
         char titulo[30];
         int ano;
         float preco;
         float pagina;
     } livro[2];


         for (int i = 0; i <= 1; i++)
         {
             printf ("\n Título do livro - ");
             fflush (stdin);
             gets (livro[i].titulo);

             printf ("Ano do livro - ");
             scanf ("%d", &livro[i].ano);

             printf ("Preço do livro - ");
             scanf ("%f", &livro[i].preco);

             printf ("Total de páginas - ");
             scanf ("%f", &livro[i].pagina);
         }

        system ("cls");
         for (int i = 0; i <= 1; i++)
         {
             printf ("Nome do %d° livro. - %s \n", i+1, livro[i].titulo);
             printf ("Ano de lançamento - %d \n", livro[i].ano);
             printf ("Preço............ - R$%.2f \n", livro[i].preco);
             printf ("Total de páginas. - %.f \n", livro[i].pagina);
             printf ("\n");
         }

return 0;

 }