//inserir e exibir 10 valores inteiros
#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{ 
 setlocale(LC_ALL,"Portuguese");
 int A[4],B[4], I;
for (I=1;I<=4;I++)
{
  printf("%dprimeiro valor: ",I);
  scanf("%d",&A[I]);
  B[I] = A[I] * A[I];
}

//EXIBIÇÃOO DOS VALORES
for (I=1;I<=4;I++)
{
  printf("A[%d] = %d\n",I,A[I]);
 
}
printf("\n\n") ;
for (I=1;I<=4;I++)
{
  printf("B[%d] = %d\n",I,B[I]);
  
}
}

