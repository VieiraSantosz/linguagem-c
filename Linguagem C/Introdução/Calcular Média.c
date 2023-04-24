#include <stdio.h>
#include <locale.h>

 int main () { 
  setlocale(LC_ALL,"Portuguese");

    char nome[10];
    float x, y, media;

    printf ("P1 peso = 5.\n" "P2 peso = 3. \n");

    printf ("Digite o nome do aluno:");
    scanf ("%s", &nome);

    printf ("\n Digite a nota da P1:");
    scanf ("%f", &x);

    printf ("\n Digite a nota da P2:");
    scanf ("%f", &y);

    media = (x * 5 + y * 3) / (5 + 3);
    printf ("\n Média do aluno %s é %.2f.", nome, media); 
   
   return 0;
 }