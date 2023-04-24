/*
Cálculo de Salário Líquido
Horas trabalhadas.......................:
Valor da hora trabalhada............:
Valor do desconto INSS (8%)......:
Salário líquido............................:
Procedimentos para resolver o problema (CICLO DE PROCESSAMENTO):
Entrada: ler horas trabalhadas e valor hora
Processamento: calcular o salário bruto, calcular o desconto
Saída: mostrar o salário líquido
*/
#include <stdio.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"Portuguese");
float ht, vht,sbruto, desc, sliq;
printf("C�lculo de Sal�rio L�quido\n\n");
printf("Horas trabalhadas................: "); scanf("%f",&ht);
printf("Valor da hora trabalhada.........: "); scanf("%f",&vht);
sbruto = ht * vht;
desc = sbruto * 8/100; //ou desc = sbruto * 0.08 
sliq = sbruto - desc;//ou  sliq = sbruto * 0.92
system("CLS"); //limpa a tela
printf("C�lculo de Sal�rio L�quido\n\n");
printf("Horas trabalhadas................: %7.2f\n", ht);
printf("Valor da hora trabalhada.........: %7.2f\n", vht);
printf("Valor do desconto INSS (8%%)......: %7.2f\n", desc);
printf("Sal�rio l�quido..................: %7.2f\n", sliq); 
}
