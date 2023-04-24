#include <stdio.h>

int main()
{
 float cons, valor;
 int tipo;
 char nome;
  
  printf ("Nome do cliente:");
  scanf ("%s", &nome);
  
  printf ("Consumo de agua(m3):");
  scanf ("%f", &cons);
  
  printf ("Tipo de consumidor:\n");
  printf ("Insira 1 para residencial:\n");
  printf ("Insira 2 para comercial:\n");
  printf ("Insira 3 para indusrial:\n");
  scanf ("%d", &tipo);
  
  switch (tipo) {
   case 1:
    valor = 5 + (0.05 * cons);
    printf ("Conta de agua (residencial): %2.f\n", valor);
	
    break;
    
   case 2:
    if (cons <= 80){
     valor = 500;
	 printf ("Conta de agua (comercial): %2.f\n", valor);}
    else if (cons > 80){
     valor = 500 + (0.25 * cons);
     printf ("Conta de agua (comercial): %2.f\n", valor);}
     
	 break;
    
    case 3:
	 if (cons <= 100){
     valor = 800;
	 printf ("Conta de agua (industrial): %2.f\n", valor);}
    else if (cons > 100){
     valor = 800 + (0.04 * cons);
     printf ("Conta de agua (industrial): %2.f\n", valor);}
     
    break;
    }
}
