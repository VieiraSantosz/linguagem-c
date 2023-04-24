#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

 int main() {
     setlocale (LC_ALL, "Portuguese");
     system ("mode 115, 6");

     typedef struct
     {
         int dia;
         int mes;
         int ano;
     } data;

     data *d;
     int qtdmemoria;

     qtdmemoria = sizeof (d);
     d = (data *) malloc (qtdmemoria);

     d -> dia = 1;
     d -> mes = 8;
     d -> ano = 2022;

     printf ("& qtdmemoria\t\t& do ponteiro d\t\t& de d->dia\t\t& de d->mes\t\t& de d->ano \n");
     printf ("[%p]\t[%p]\t[%p]\t[%p]\t[%p] \n", &qtdmemoria, &d, &d->dia, &d->mes, &d->ano);
     printf ("qtdmemoria=%d\t\td = %p\tdia = %d\t\t\tmes = %d\t\t\tano = %d.", qtdmemoria, d, d->dia, d->mes, d->ano);

    getch();

    return 0;
 }