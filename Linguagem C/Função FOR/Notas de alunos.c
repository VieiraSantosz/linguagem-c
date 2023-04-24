#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

     int nota[100] = {}, soma = 0;
     int aluno, prog;
     float media;

      printf ("Digite a quant de alunos:");
      scanf ("%d", &aluno);

      for (prog = 1; prog <= aluno; prog++)
      {
          printf ("Digite as notas dos alunos %d:", prog);
          scanf ("%d", &nota[prog]);
      }

      for (prog = 1; prog <= aluno; prog++)
      {
          soma = soma + nota[prog];
      }

      media = soma / aluno;
      printf ("\n Média da sala = %.1f", media);

return 0;

 }