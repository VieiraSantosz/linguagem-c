#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main() {
    setlocale (LC_ALL, "");
    system ("mode 80");

     FILE * Arq;

     Arq = fopen ("TestePonteiro.txt", "r");
     
     if (Arq == NULL) {
         printf ("Erro ao abrir TestePonteiro.txt! \n");
         printf ("Endereco de Arq: [%p] \n", &Arq);
         printf ("Conteudo de Arq: [%p] \n", Arq);
         printf ("                   \\ \n");
         printf ("                    \\_______ NULL \n");
         getch();
         exit(0);
     }

 return 0;

 }