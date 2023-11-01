#include <stdio.h>
#include <conio.h>
#include <string.h> 
//<string.h> permite o uso da funçãoo strupr() - converte string para caracteres maiúsculos
int main() {

 char NOMES [8][30]; //8 alunos com 30 caracteres
 float NOTAS[8][4], NT;
 int I, J;

 printf("\nLEITURA DAS NOTAS\n");
 /* Entrada das notas */
 for (I = 0; I <= 7; I++)
 { 
   printf("\nInforme o nome do %d%c aluno: ", I+1,167);
   fflush(stdin); //limpa o buffer (memória) do teclado
   gets(NOMES[I]); //LEITURA DE DADOS STRING
   for (J = 0; J <= 3; J++)
 	{
 		printf("Nota %d: ", J+1);
 		scanf("%f", &NT);//o valor de NT será 
 		NOTAS[I][J] = NT; //atribuído à matriz 
 	}
} 
/* Saida das notas */ 
 system("cls"); //limpa a tela (clear screen)
 
 printf("\nAPRESENTACAO DAS NOTAS\n");
 for (I = 0; I <= 7; I++)
 {  //strupr - string to upper (transforma em maiusculo)
 	printf("\nAs notas do aluno %s sao : \n\n", strupr(NOMES[I])); 
    for (J = 0; J <= 3; J++)
      printf("Nota %d: %5.1f\n", J+1, NOTAS[I][J]); 
 }
 getch(); // ou use system("PAUSE");
}
