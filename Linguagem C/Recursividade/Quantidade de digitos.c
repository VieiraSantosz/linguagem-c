#include <stdio.h>
#include <locale.h>

 int  digitos (int n) 
 {   
    int cont = 1;

    if (n >= 10) {
        n = n / 10;
        cont = cont + digitos(n);
    } else {
        return 1;
      }

    return cont;
 }

int main() {
    setlocale (LC_ALL, "Portuguese");

    int n;

    printf ("Digite um número:");
    scanf ("%d", &n);

    digitos(n);
    printf ("Quantidade de digitos: %d", digitos(n));

 return 0;
}