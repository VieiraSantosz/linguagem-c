#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void insertion_sort(int *vetor, int tamanho) 
{
    int escolhido;
    int anterior, i;
    
    for (i = 1; i < tamanho; i++) 
    {
	    escolhido = vetor[i];
	    anterior  = i - 1;
	
         while ( (anterior >= 0) && (vetor[anterior] > escolhido) ) 
	    {
	        vetor[anterior + 1] = vetor[anterior];
	        anterior--;
	    }
	vetor[anterior + 1] = escolhido;
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

    insertion_sort (notas, tam);

    printf ("\n APÓSS O INSERTION SORT! \n");

    for (i = 0; i < dig; i++)
    {
      printf ("\n");
      printf ("%i° nota - %i", i+1, notas[i]);
      printf ("\n");
    }

   return 0;
 }
