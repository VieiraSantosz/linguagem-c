#include <stdio.h>
#include <locale.h>

 int main() {
     setlocale (LC_ALL, "Portuguese");

     int numero[5];
     int div2[5] = {}, div3[5] = {};
     float soma, maior, menor;


    printf ("Digites os 5 n�meros! \n\n");
     
     for (int i = 0; i <= 4; i++)
     {
         printf ("%d� n�mero: ", i+1);
         scanf ("%d", &numero[i]);
         soma += numero[i];
        
         if (numero[i] % 2 == 0) {
             div2[i] = numero[i];
         } 
            if (numero[i] % 3 == 0) {
                div3[i] = numero[i];
            }
     }

        printf ("\n N�meros divisiveis por 2: \n");
        for (int i = 0; i <= 4; i++)
        {
            if (div2[i] == 0) {
                    continue;
             }
            printf ("%d \n", div2[i]);
        }

        printf ("\n N�meros divisiveis por 3: \n");
        for (int i = 0; i <= 4; i++)
        {
            if (div3[i] == 0) {
                    continue;
             }
            printf ("%d \n", div3[i]);
        }

        maior = numero[0]; 
        menor = numero[0];
        for (int i = 0; i <= 4; i++) 
        {
            if (numero[i] > maior) 
                maior = numero[i];
            if (numero[i] < menor) 
                menor = numero[i];
        }

        printf ("\n");
        printf ("Maior valor: %.f \n", maior);
        printf ("Menor valor: %.f \n", menor);

        printf ("\n M�dia dos valores: %.1f", soma/5);

return 0;

 }