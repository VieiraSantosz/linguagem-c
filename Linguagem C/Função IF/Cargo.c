#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguse");

      int codigo;

       printf ("Escolha uma opçao. \n");
       printf ("\n");

       printf ("1 - Escriturario \n");
       printf ("2 - Secretaria \n");
       printf ("3 - Caixa \n");
       printf ("4 - Gerente \n");
       printf ("5 - Diretor \n");

       printf ("\n");
       printf ("Digite sua opcao:");
       scanf ("%d", &codigo);

       if (codigo == 1) 
         printf ("\n Cargo - Escriturario \n Percentual de aumento - 50%%. \n");
        else if (codigo == 2)
          printf ("\n Cargo - Secretaria \n Percentual de aumento - 35%%. \n");
         else if (codigo == 3)
           printf ("\n Cargo - Caixa \n Percentual de aumento - 20%%. \n");
          else if (codigo == 4)
            printf ("\n Cargo - Gerente \n Percentual de aumento - 10%%. \n");
           else 
            printf ("\n Cargo - Diretor \n Percentual de aumento - 5%%. \n");

return (0);

 }
