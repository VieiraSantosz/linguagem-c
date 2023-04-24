#include <conio.h>
#include <stdio.h>
#include <string.h>

  int main()
 {
  
 struct CAD_ALUNO
 { 
 char NOME[10],RESULTADO[10]; int PRONTUARIO;
 float NOTA[4], MEDIA;
 };
  
 struct CAD_ALUNO ALUNO[3]; 
 int i, x;
 
 for (x=0; x<=2; x++)
 {
  ALUNO[x].MEDIA = 0; 
  printf("\n%d%c aluno: ",x+1,167);
  fflush(stdin); 
  fgets(ALUNO[x].NOME,30,stdin);
  printf("Prontuario (SP): "); scanf("%d", &ALUNO[x].PRONTUARIO);

   for (i = 0; i<=3; i++)
   {
    printf("%d%c nota: ",i+1,166); 
    scanf("%f", &ALUNO[x].NOTA[i]); 
    ALUNO[x].MEDIA = ALUNO[x].MEDIA + ALUNO[x].NOTA[i];
   }
   
    ALUNO[x].MEDIA = ALUNO[x].MEDIA/4;
      if (ALUNO[x].MEDIA >= 6)
       strcpy(ALUNO[x].RESULTADO, "Aprovado");
      else
        if (ALUNO[x].MEDIA >= 4)
         strcpy(ALUNO[x].RESULTADO, "IFA");
        else
         strcpy(ALUNO[x].RESULTADO, "Reprovado");
}

  for (x=0; x<=2; x++)
  {
   printf("\nNome: "); puts(ALUNO[x].NOME);
   printf("Prontuario (SP): %4.d\n", ALUNO[x].PRONTUARIO);

  for (i=0; i<=3; i++)
   printf("%d%c nota....: %4.1f\n",i+1,166,ALUNO[x].NOTA[i]);
   printf("Media......: %4.1f\n", ALUNO[x].MEDIA);
   printf("Resultado..: %s\n", ALUNO[x].RESULTADO);
  }
getch();
}

