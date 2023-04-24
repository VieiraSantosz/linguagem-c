#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

    int l1, l2, l3;

     printf ("Digite o lado 1:");
     scanf ("%d", &l1);
     
     printf ("Digite o lado 2:");
     scanf ("%d", &l2);

     printf ("Digite o lado 3:");
     scanf ("%d", &l3);

     if (l1 + l2 > l3 && l1 + l3 > l2 && l3 + l2 > l1) {
         printf (" \n É UM TRIÂNGULO!");

         if (l1 != l2 && l1 != l3 && l2 != l3) {
            printf (" \n Trinângulo ESCALENO \n");
         }

           else if (l1 == l2 && l1 == l3 && l2 == l3) {
            printf (" \n Trinângulo EQUILATERO");
         }  

                else {
                    printf (" \n Trinângulo ISÓSCELES");
                }

     } else {
         printf (" \n NÃO FORMA UM TRINÂNGULO. \n");
     }

return (0);

 }