#include <stdio.h>
#include <stdlib.h>

int ocorrencias(char palavra[], char letra) 
{
    if (palavra[0] == NULL) 
        return 0;
    else
        return (letra == palavra[0]) + ocorrencias(&(palavra[1]), letra);
}

 int main() {
    char palavra[50];
    char letra;

    printf ("Digite uma palavra:");
    gets (palavra);

    printf ("Digite a letra:");
    scanf ("%c", &letra);

    int ocorre = ocorrencias(palavra, letra);
    printf("Quantidade de letras - %d", ocorre);

 return 0;
}
