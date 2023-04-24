#include<stdio.h>
 #include<string.h>
 // definição da constante para o tamanho do vetor
 #define N 3
 //Definiçãoo de novos tipos
 typedef int inteiro;
 typedef float real;
 typedef char caracter;
 
 //Declaraçãoo das estruturas
 typedef struct data{
 inteiro dia, mes, ano;
 }Data;
 
 typedef struct aluno
 {
 caracter nome[50];
 real mediaFinal;
 Data nascimento;
 }Aluno;
 
 //inteiro i; 
 //Funçãoo principal
 int main(){
 inteiro i;
 real media=0.0;
 Aluno a[N];
 // captura os dados dos alunos
 for(i=0; i<N; i++){
 system("cls");
 printf("\n%do aluno...",i+1);
 printf("\n\nEntre com o nome-->");
 fflush(stdin);
 gets(a[i].nome);
 fflush(stdin);
 printf("\n\nEntre com a Media do aluno-->");
 scanf("%f", &a[i].mediaFinal);
 media+=a[i].mediaFinal;
 puts("\n\nData de nascimento:\n");
 printf("Dia-->");
 scanf("%d", &a[i].nascimento.dia);
 printf("Mes-->");
 scanf("%d", &a[i].nascimento.mes);
 printf("Ano-->");
 scanf("%d", &a[i].nascimento.ano );
 }
 media=media/N;
 
 system("cls");
 
 puts("\n\tALUNOS:\n");
 for(i=0; i<N; i++){
 puts(a[i].nome);
 printf("\tMedia final:%.2f", a[i].mediaFinal);
 printf("\n\tData de nascimento: %d/%d/%d\n\n",
 a[i].nascimento.dia, a[i].nascimento.mes, a[i].nascimento.ano );
 }
 printf("\n\n\tMedia geral dos alunos: %.1f\n\n", media);
 system("pause");
 //return 0;
 }

