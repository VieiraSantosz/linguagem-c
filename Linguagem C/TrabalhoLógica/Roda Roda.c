#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAXCARC 17
#define MAXPAL 3


  typedef struct
 {
  char nome[MAXCARC];
  int valor;
  int jogada;
  int examinar;
 } jogador;

 typedef struct 
 {
  char dica[MAXCARC];
  int quant;
  char palavra [MAXPAL][MAXCARC];
 } dados;


FILE *arquivo;
jogador j[3];

float letraSorteada();

void palavraSorteada(char Pi[], char Pa[][MAXCARC], int *k);
void tela(char Pi[], int n, char Pa[][MAXCARC], int comp[][MAXCARC]);

int escolha(char L, char letras[30]);
int comparador(char Ori[][MAXCARC], char Dig[][MAXCARC], int n);


  int main()
{
  setlocale(LC_ALL, "Portuguese");

 float valor;
 
 char codigo, letra, letraVetor[30] = "";
 char dicas [MAXCARC], palavraRodadas [MAXPAL][MAXCARC], palavra[MAXPAL][MAXCARC];
 
 int i, k, quantRodadas, letrasFalta, cont, tentativas;
 int matrizComp [MAXPAL][MAXCARC];

  printf("Seja Bem Vindo ao jogo Roda Roda!\n");
  printf("\n");
  printf("Pressione J para jogar:");
  
  fflush(stdin); codigo = getchar();
  
  while (codigo != 'f')
  {
    switch (codigo)
    {
      case 'j' :
       memset(dicas, 0, MAXCARC);
       memset(letraVetor, 0, 30);
       quantRodadas = letrasFalta = tentativas = 0;
         for (i=0; i<MAXPAL; i++)
         {
          memset(palavraRodadas[i], 0, MAXCARC);
          memset(palavra[i], 0, MAXCARC);
         }
         for (i=0; i<MAXPAL; i++)
           for (k=0; k< MAXCARC; k++)
            matrizComp[i][k] = 0;
            printf("\n Insira os nomes dos jogadores.\n");	 
	         for (i=0; i<3; i++)
             {
              printf("\n Nome do jogador %d:", i+1);
              fflush(stdin); scanf("%s", &j[i].nome);
              j[i].valor = j[i].jogada = j[i]. examinar = 0;
             }
              palavraSorteada (dicas, palavraRodadas, &quantRodadas);

         for (i=0; i<quantRodadas; i++)
           for (k=0; k<strlen(palavraRodadas[i]); k++)
             if (palavraRodadas[i][k] != '\0')
             {
              matrizComp[i][k] = 1;
              letrasFalta ++;
             }
              j[0].jogada = 1;
         
		 while (letrasFalta > 0)
         {
          if (j[0].jogada==1 && j[0]. examinar==0)
          {
          tela (dicas, quantRodadas, palavraRodadas, matrizComp);
		    if (letrasFalta > 3)
            {
             printf("\n\n Roda a roda! %s\n", j[0].nome);
             valor = letraSorteada ();
              if(valor == 0)
              {
               printf("\n PASSA A VEZ!!!\n");
               printf("\n Vez passada para: %s\n", j[1].nome);
               j[0].jogada = 0;
               j[1].jogada = 1;
              }
         else
         {
           if(valor>0 && valor <0.05)
           {
            printf("\n PERDEU TUDO!!!\n");
            printf("\n Vez passada para: %s\n", j[1].nome);
            j[0].valor = j[0].jogada = 0;
            j[1].jogada = 1;
           }
           
         else
         {
           do
           {
            printf("\n Uma letra por R$ %.0f,00: ", valor);
            fflush(stdin); letra = getchar();
            letra = toupper(letra);
           }
                 
		 while (escolha (letra,letraVetor) != 0 );
          cont = 0;
           for (i=0; i<quantRodadas; i++)
             for (k=0; k<strlen(palavraRodadas[i]); k++)
             
		 if (palavraRodadas[i][k] == letra)
         {
          matrizComp[i][k] = 0;
          j[0].valor += valor;
          cont ++;
         }
         
         if(cont == 0)
         {
          printf("\n Não existe a letra %c.\n", letra);
          printf("\n Vez passada para: %s\n", j[1].nome);
          j[0].jogada = 0;
          j[1].jogada = 1;
         }
          letrasFalta -= cont;
               }
           }
         }
         
         else
         {
          sleep(1);
          valor = letraSorteada ();
          j[0]. examinar = 1;
           if (valor == 0)
           {
            tentativas++;
            printf("\n PASSA A VEZ!!!\n");
             if (tentativas < 3)
              printf("\n A vez será passada para %s\n", j[1].nome);
              j[0].jogada = 0;
              j[1].jogada = 1;
           }
           
         else
         {
           if (valor>0 && valor<0.05)
           {
            tentativas++;
            printf("\n PERDEU TUDO!!!\n");
             if (tentativas < 3)
              printf("\n Vez passada para: %s\n", j[1].nome);
              j[0].valor = j[0].jogada = 0;
              j[1].jogada = 1;
           }
                                      
		 else
         {
           if (tentativas < 3)
           {
            tentativas++;
            printf("\n%s: Faltam %d letras para completar a(s) palavra(s)\n", j[0].nome, letrasFalta);
            printf("\n Valendo R$ %.0f,00, a(s) palavra(s) é(são)", j[0].valor + valor);
             for (i=0; i<quantRodadas; i++)
           {
            printf("\n%d° palavra: ", i+1);
            fflush(stdin); scanf("%s", & palavra [i]);
           }
             
         if (comparador(palavraRodadas, palavra, quantRodadas) == 0)
         {
          j[0].valor += valor;
           for (i=0; i<quantRodadas; i++)
             for (k=0; k<strlen(palavraRodadas[i]); k++)
              matrizComp [i][k] = 0;
              tela (dicas, quantRodadas, palavraRodadas , matrizComp);
              printf("\n PARABÉNS %s você ganhou R$ %d,00 !\n\n", j[0].nome, j[0].valor);
              letrasFalta = j[0].jogada = j[1].jogada = j[2].jogada = 0;
         } 
         
		 else
         {
          printf("\n Que pena %s você errou\n", j[0].nome);
           if (tentativas < 3)
            printf("\n Vez passada para: %s\n", j[1].nome);
            j[0].jogada = 0;
            j[1].jogada = 1;
         }
           }
         }
         }
         }
         }
          
		 if (j[1].jogada==1 && j[1]. examinar==0)
         {
          tela (dicas, quantRodadas, palavraRodadas, matrizComp);
		   if(letrasFalta > 3)
           {
            printf("\n\n Roda a roda! %s\n", j[1].nome);
            valor = letraSorteada ();
		     if(valor == 0)
             {
              printf("\n PASSA A VEZ!!!\n");
              printf("\n Vez passada para: %s\n", j[2].nome);
              j[1].jogada = 0;
              j[2].jogada = 1;
             }
             
		 else
         {
           if(valor>0 && valor<0.05)
           {
            printf("\n PERDEU TUDO!!!\n");
            printf("\n Vez passada para: %s\n", j[2].nome);
            j[1].valor = j[1].jogada = 0;
            j[2].jogada = 1;
           }
            
		 else
         {
           do
           {
            printf("\n Uma letra por R$ %.0f,00: ", valor);
            fflush(stdin); letra = getchar();
            letra = toupper(letra);
           }
			
		 while (escolha (letra,letraVetor) != 0 );
          cont = 0;
           for (i=0; i<quantRodadas; i++)
             for (k=0; k<strlen(palavraRodadas[i]); k++)
               if (palavraRodadas[i][k] == letra)
               {
                matrizComp [i][k] = 0;
                j[1].valor += valor;
                cont ++;
               }
               
         if (cont == 0)
         {
          printf("\n Não existe a letra %c.\n", letra);
          printf("\n Vez passada para: %s\n", j[2].nome);
          j[1].jogada = 0;
          j[2].jogada = 1;
         }
          letrasFalta -= cont;
         }
         }
           }
           
         else
         {
          sleep(1);
          valor = letraSorteada ();
          j[1]. examinar = 1;                         
           if (valor == 0)
           {
            tentativas++;
            printf("\n PASSA A VEZ!!!\n");                         
             if (tentativas < 3)
              printf("\n Vez passada para: %s\n", j[2].nome);
              j[1].jogada = 0;
              j[2].jogada = 1;
           }
           
         else
         {
           if(valor>0 && valor<0.05)
           {
            tentativas++;
            printf("\n PERDEU TUDO!!!\n");                                     
             if (tentativas < 3)
              printf("\n Vez passada para: %s\n", j[2].nome);
              j[1].valor = j[1].jogada = 0;
              j[2].jogada = 1;
           }
           
         else
         {
           if (tentativas < 3)
           {
            tentativas++;
            printf("\n%s: Faltam %d letras para completar a(s) palavra(s)\n", j[1].nome, letrasFalta);
            printf("\nValendo R$ %.0f,00, a(s) palavra(s) é(são)", j[1].valor + valor);                            
		     for (i=0; i<quantRodadas; i++)
             {
              printf("\n%d° palavra: ", i+1);
              fflush(stdin); scanf("%s", & palavra [i]);
             }
              
		 if (comparador (palavraRodadas, palavra, quantRodadas) == 0)
         {
          j[1].valor += valor;
           for (i = 0; i < quantRodadas; i++)
             for (k = 0; k < strlen(palavraRodadas [i]); k++)
              matrizComp [i][k] = 0;
              tela (dicas, quantRodadas, palavraRodadas , matrizComp);
              printf("\n PARABÉNS %s você ganhou R$ %d,00 !\n\n", j[1].nome, j[1].valor);
              letrasFalta = j[0].jogada = j[1].jogada = j[2].jogada = 0;
         }
         
         else
         {
          printf("\nQue pena %s você errou\n", j[1].nome);                                         
           if (tentativas < 3)
            printf("\n Vez passada para: %s\n", j[2].nome);
            j[1].jogada = 0;
            j[2].jogada = 1;
         }
           }
         }
         }
         }
         }
                        
		 if (j[2].jogada == 1 && j[2]. examinar == 0)
         {
          tela (dicas, quantRodadas, palavraRodadas , matrizComp);        
		  if(letrasFalta > 3)
          {
           printf("\n\n Roda a roda! %s\n", j[2].nome);
           valor = letraSorteada ();
            if(valor == 0)
            {
             printf("\n PASSA A VEZ!!!\n");
             printf("\n Vez passada para: %s\n", j[0].nome);
             j[2].jogada = 0;
             j[0].jogada = 1;
            }
            
		 else
         {
           if (valor>0 && valor<0.05)
           {
            printf("\n PERDEU TUDO!!!\n");
            printf("\n Vez passada para: %s\n", j[0].nome);
            j[2].valor = j[2].jogada = 0;
            j[0].jogada = 1;
           }
                                        
		 else
         {
           do
           {
            printf("\n Uma letra por R$ %.0f,00: ", valor);
            fflush(stdin); letra = getchar();
            letra = toupper(letra);
           }
           
		 while (escolha (letra,letraVetor) != 0 );
          cont = 0;
           for (i=0; i<quantRodadas; i++)
             for (k=0; k<strlen(palavraRodadas[i]); k++)
               if (palavraRodadas [i][k] == letra)
               {
                matrizComp [i][k] = 0;
                j[2].valor += valor;
                cont ++;
               }
               
		 if(cont == 0)
         {
          printf("\n Não existe a letra %c.\n", letra);
          printf("\n Vez passada para: %s\n", j[0].nome);
          j[2].jogada = 0;
          j[0].jogada = 1;
         }
          letrasFalta -= cont;
         }
         }
          }
                                    
		 else
         {
          sleep(1);
          valor = letraSorteada ();
          j[2]. examinar = 1;
           if (valor == 0)
           {
            tentativas++;
            printf("\nPASSA A VEZ!!!\n");
             if (tentativas < 3)
              printf("\n Vez passada para: %s\n", j[0].nome);
              j[2].jogada = 0;
              j[0].jogada = 1;
           }
                        
		 else
         {
           if(valor>0 && valor<0.05)
           {
            tentativas++;
            printf("\n PERDEU TUDO!!!\n");
             if (tentativas < 3)
              printf("\n Vez passada para: %s\n", j[0].nome);
              j[2].valor = j[2].jogada = 0;
              j[0].jogada = 1;
           }
                         
		 else
         {
           if (tentativas < 3)
           {
            tentativas++;
            printf("\n%s: Faltam %d letras para completar a(s) palavra(s)\n", j[2].nome, letrasFalta);                                
            printf("\nValendo R$ %.0f,00, digite a(s) palavra(s):", j[2].valor + valor);
             for (i = 0; i < quantRodadas; i++)
             {
              printf("\n%d° palavra: ", i+1);
              fflush(stdin); scanf("%s", & palavra [i]);
             }
             
         if(comparador (palavraRodadas, palavra, quantRodadas) == 0)
         {
          j[2].valor += valor;
           for (i=0; i<quantRodadas; i++)
             for (k=0; k<strlen(palavraRodadas[i]); k++)
              matrizComp [i][k] = 0;
              tela (dicas, quantRodadas , palavraRodadas , matrizComp);
              printf("\n PARABÉNS %s você ganhou R$ %d,00 !\n\n", j[2].nome, j[2].valor);
              letrasFalta = j[0].jogada = j[1].jogada = j[2].jogada = 0;
         }
         
		 else
         {
          printf("\n Você errou!\n", j[2].nome);
           if (tentativas < 3)
            printf("\n Vez passada para: %s\n", j[0].nome);
            j[2].jogada = 0;
            j[0].jogada = 1;
         }
           }
         }
         }
         }
         }
                    
		 if (tentativas>2 && letrasFalta!=0)
         {
           for (i=0; i<quantRodadas; i++)
             for (k=0; k<strlen(palavraRodadas[i]); k++)
              matrizComp [i][k] = 0;
              tela (dicas, quantRodadas, palavraRodadas, matrizComp);
              printf("\n NÃO HOUVE NEHUM GANHANDOR.\n");
              letrasFalta = j[0].jogada = j[1].jogada = j[2].jogada = 0;
         }
         }
    }
  }
} 


  void tela (char Pi[], int n, char Pa[][MAXCARC], int comp[][MAXCARC])
{
 int i, k;
 
 printf("\n\t Palavra associada com: %s\n", Pi);
 for (i=0; i<n; i++)
 {
  printf("\n\t\t\t");
   for (k=0; k<strlen(Pa[i]); k++)
   {
     if (comp[i][k] == 0)
      printf(" %c", Pa[i][k]);
       if (comp[i][k] == 1)
        printf(" _");
   }
 }
  printf("\n\n\t%-20s%-20s%-20s\n", j[0].nome, j[1].nome, j[2].nome);
  printf("\t===========\t    ===========\t\t===========\n");
  printf("\tR$ %5d,00\t    R$ %5d,00\t\tR$ %5d,00\n", j[0].valor, j[1].valor, j[2].valor);
}


  int comparador (char Ori[][MAXCARC], char Dig[][MAXCARC], int n)
{
 int retorno, i, k;
 retorno = 0;
 
 for (i=0; i<n; i++)
   for (k=0; k<strlen(Dig[i]); k++)
    Dig[i][k] = toupper(Dig[i][k]);
     for (i=0; i<n ; i++)
       for (k=0; k<strlen(Ori[i]) ; k++)
         if (strlen(Ori[i]) != strlen(Dig[i]) || Ori[i][k]!= Dig[i][k])
          retorno ++;
           return retorno;
}


  int escolha (char L, char letras[30])
{
 int cont, i;
 cont = 0;
 
 for (i=0; i<strlen(letras); i++)
   if (letras[i] == L)
    cont++;
     if (cont == 0)
      letras[i] = L;
       else
        printf("\nLetra repitida, insira outra letra\n");
        return cont;
}


  void palavraSorteada (char Pi[], char Pa[][MAXCARC], int *k)
{
 int analise, n, i;
 char opcao;
 dados d;
 
 arquivo = fopen("palavras.dat", "rb");
 if (arquivo== NULL)
 {
  fflush(stdin); scanf("%c",& opcao);
 }
 
 else
 {
  fseek(arquivo, 0, SEEK_END);
  analise = ftell(arquivo)/sizeof(d);
  fseek(arquivo, 0, SEEK_SET);
  srand(time(NULL));
  fseek(arquivo, (rand() % analise)*sizeof(d) , SEEK_CUR);
  
   fread(&d, sizeof(d), 1,arquivo);
   strcpy(Pi, d. dica);
   *k = d.quant;
   for(i = 0; i < d.quant; i++)
    strcpy(Pa[i], d. palavra [i]);
 }
  fclose(arquivo);
}


  float letraSorteada ()
{
 float valor;
 int analise;

 arquivo= fopen("premios.dat", "rb");
 if (arquivo == NULL)
 {
  exit(EXIT_FAILURE);
 }
    
 else
 {
  fseek(arquivo, 0, SEEK_END);
  analise = ftell(arquivo)/sizeof(valor);
  fseek(arquivo, 0, SEEK_SET);

   srand(time(NULL));
   fseek(arquivo, (rand() % analise)*sizeof(valor) , SEEK_CUR);

    fread(&valor, sizeof(valor), 1, arquivo);
    fclose(arquivo);
 }
  return valor;
}
