#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

     int A[4] = {};
     int B[4] = {};
     int C[4] = {};
     int i;

     for (i = 0; i <= 3; i++)
     {
        printf ("Digite os valores para A:");
        scanf ("%d", &A[i]);

        if (A[i] % 3 == 0 || A[i] % 7 == 0) {
            B[i] = A[i];
        } else {
            continue;
        }
          if (B[i] % 5 == 0) {
              continue;
          }
    }

    for (i = 0; i <= 3; i++) 
    {
        C[i*2] = A[i];
        C[i*2+1] = B[i];
        printf ("Valor de Vetor de A: %d \n", C[i*2]);
        printf ("Valor de Vetor de B: %d \n", C[i*2+1]);
    }

 }