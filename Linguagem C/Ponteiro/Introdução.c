#include <stdio.h>
#include <conio.h>

 int main () {

     int valor = 77;

     //declaração da variável
     int *ptr;

     //endereço da variável *valor* ao ponteiro
     ptr = &valor;

     printf ("Conteudo da variavel *valor*: %d \n", valor);
     printf ("Endereco da variavel *valor*: %x \n", &valor);
     printf ("Conteudo da variavel ponteiro ptr: %x \n", ptr);

     getch();
 
 return 0;
 }