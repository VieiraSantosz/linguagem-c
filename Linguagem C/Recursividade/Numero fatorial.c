#include <stdio.h>
#include <locale.h>

int  fatorial_recursivo (int n) 
{   
  if (n == 0 || n == 1) 
     /* CASO BASE */
     return 1; 
  else
     /* CASO RECURSIVO */
     return ( n * fatorial_recursivo (n-1) ); 
}

int main() {
    setlocale (LC_ALL, "Portuguese");

    int a;

    printf ("Digite um número:");
    scanf ("%d", &a);

    fatorial_recursivo(a);

    printf ("%d", fatorial_recursivo(a));

 return 0;
}