#include <stdio.h>  
#define alturaMaxima 2.25
#include <conio.h>
#include <locale.h>

 int main() {
   
   typedef struct
   {
      float peso;   /* peso em quilogramas    */
      float altura; /* altura em metros       */ 
   } PesoAltura;

    setlocale (LC_ALL, "");
    system ("mode 80, 6"); /* define tela com 80 colunas e 6 linhas */
  
    /* Variáveis locais ao main */	
    int x;
    PesoAltura pessoa1;
  
    /* Define os valores do peso e da altura da pessoa1 */
    pessoa1.peso = 80;
    pessoa1.altura = 1.85;

    /* Monta o cabeçalho do que será exibido em tela */
    printf("& x\t\t\t& do peso da pessoa1\t\t& da altura da pessoa1\n");

    /* Exibe os endereços de memória de: x, pessoa1 e da altura da pessoa1*/
    printf("[%p]\t[%p]\t\t[%p]\n", &x, &(pessoa1.peso), &(pessoa1.altura));

    /* Exibe os conteúdos das variáveis: peso de pessoa1 e altura de pessoa1 */ 
    printf("x: %d\t\t\tPeso: %.2f\t\t\tAltura %.2f. ", x, pessoa1.peso, pessoa1.altura);
  
    /* Se a altura da pessoa1 for maior que a altura máxima pré-definida...*/
    if (pessoa1.altura>alturaMaxima) 
      /* ... informa que a altura da pessoa1 está acima da máxima.*/
      printf("\n\t\t\t\t\t\t\tAltura acima da máxima.\n"); 
    else 
      /* ... se não... informa que a altura da pessoa1 está abaixo da máxima.*/
      printf("\n\t\t\t\t\t\t\tAltura abaixo da máxima.\n"); 

  getch();
 
  return 0;
  
}
