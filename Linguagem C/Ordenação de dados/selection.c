#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void selection_sort (int *vetor, int tamanho) 
{
    int pos_min, i, j;
    int aux;

    for (i = 0; i < tamanho - 1; i++) 
    {
      pos_min = i;
        for (j = i + 1; j < tamanho; j++) 
        {
          if (vetor[j] < vetor[pos_min]) {
            pos_min = j; 
          }        
        }
          if (pos_min != i) {
            aux = vetor[i];
            vetor[i] = vetor[pos_min];
            vetor[pos_min] = aux;
        }
    }
}

int main() {
  setlocale (LC_ALL, "Portuguese");

    int notas[25] = {};
    int i;
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

    selection_sort (notas, tam);

    printf ("\n APÓS O SELECTION SORT! \n");

    for (i = 0; i < dig; i++)
    {
      printf ("\n");
      printf ("%i° nota - %i", i+1, notas[i]);
      printf ("\n");
    }

   return 0;
 }