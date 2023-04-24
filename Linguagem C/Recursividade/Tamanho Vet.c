#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <malloc.h>

int maior (int *vetor, int tamanho_vet, int cont) 
{    
   int i;
   int res = vetor[0];

   printf("\n maior = %d \t tamanho_vet = %i", res, tamanho_vet);

   for (i = 0; i <= cont; i++)    
   {      
       if ( vetor[i] > res)
	   {
        res = vetor[i];    
       	printf("\n maior = %d \t tamanho_vet = %i", res, tamanho_vet);
	   }
   }    
   return res;
}

int main ()
{
	int vetor[10] = {};
	int i;
	int cont = 0;

	for (i = 0; i < 4; i++)
	{
		printf ("Digite seu %d numero: ", i+1);
		scanf ("%d", &vetor[i]);
		cont++;
	}

	maior (vetor, sizeof(vetor), cont);

 return 0;
}
