#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

     int A[5], B[5], i;

     for (i = 0; i <= 4; i++)
     {
         printf ("%d - Digite os valores:", i+1);
         scanf ("%d", &A[i]);
     }

     for (i = 0; i <= 4; i++)
     {
         B[i] = pow (A[i], 2);
         printf ("\n %d ao quadrado = %d \n",A[i], B[i]);
     }

return 0;

 }