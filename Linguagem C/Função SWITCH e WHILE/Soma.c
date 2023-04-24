#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

      int A, B, C;
      
      do
      {
          printf ("Digite o primeiro número:");
          scanf ("%d", &A);

          printf ("Digite o segundo número:");
          scanf ("%d", &B);

          C = A + B;
          printf ("\n Soma dos dois números = %d \n", C);

          //system ("pause");
          //printf ("Pressione qualquer para continuar a operação... \n");
          //getch();
          //system ("cls");
      } while (A != 0 && B != 0);
    
return (0);

 }