#include <stdio.h>
#include <locale.h>

 int main () { 
  setlocale(LC_ALL,"Portuguese");

   float dep, taxa, mes, rend, total;

   printf ("\n Digite o valor do Depósito:");
   scanf ("%f", &dep);

   printf ("\n Digite quanto tempo de juros (mês):");
   scanf ("%f", &mes);

   printf ("\n Digite a taxa de juros ao mês:");
   scanf ("%f", &taxa);

   rend = (dep * taxa/100) * mes;
   total = dep + rend;

   printf ("\n Rendimento nesses %.f mes(es): %.2f", mes, rend);
   printf ("\n Valor total (dep + rend): %.2f", total);

return (0);

 }
