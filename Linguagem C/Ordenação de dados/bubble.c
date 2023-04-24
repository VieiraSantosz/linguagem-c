#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void bubble_sort (int *vetor, int tamanho) 
{
  int i, j; 
  int aux;

  for (j = 0; j < tamanho; j++) 
  {
    for (i = 0; i < tamanho - 1; i++) 
    {
      printf ("\n Comparando %i [atual] com %i [vizinho]", vetor[i], vetor[i+1]);
   
      if (vetor[i] > vetor[i+1]) {
         printf ("->empurra %i para o fundo", vetor[i] );
         printf ("-> troca com %i", vetor[i+1]);
        
         aux = vetor[i];
	      vetor[i] = vetor[i+1];
	      vetor[i+1] = aux;
      }
    }
      for (i = 0; i < tamanho; i++)
      {
         printf ("\n");
         printf (" Valor %i - %i", i+1, vetor[i]);
      }
      printf ("\n");
   } 
}

 int main() {
     setlocale (LC_ALL, "Portuguese");

    int notas[25] = {};
    int i, t;
    int dig;
    int tam = 0;

    printf ("Quantas notas serão digitadas? \n\n");
    printf ("Digite aqui: ");
    scanf ("%i", &dig);

    for (i = 0; i < dig; i++)
    {
      printf ("%i° nota - ", i+1);
      scanf ("%i", &notas[i]);
      fflush (stdin);
      printf ("\n");

      tam++;
    }

   bubble_sort (notas, tam);

   printf ("\n APÓS O BUBBLE SORT! \n");

   for (i = 0; i < dig; i++)
    {
      printf ("\n");
      printf ("%i° nota - %i", i+1, notas[i]);
      printf ("\n");
    }

   return 0;
 }