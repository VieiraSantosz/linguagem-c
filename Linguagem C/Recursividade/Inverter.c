#include <stdio.h>
#include <string.h>

/* int inverter (char palavra[], char invertida[])
{
    if (palavra[0] == NULL)
        return 0;
    else
        return 
} */

 int main() {
    char palavra[50]; 
    char invertida[50];
    
    int i, j = 0;

    printf ("Digite uma palavra:");
    gets (palavra);

    for(i = (strlen(palavra) - 1); i >= 0; i--) 
    {
        invertida[j] = palavra[i];
        j++;
    }

    printf ("Palavra invertida: %s\n", invertida);

 return 0;
}