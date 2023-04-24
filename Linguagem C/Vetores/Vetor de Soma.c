//criar 3 vetores X, Y e Z, com 3 elementos para X e Y. O Z receber a soma
//dos elmentos de X e Y
// X [ ] = 3, 4, 5
// Y [ ] = 6, 7, 8
// Z [ ] = 9, 11, 13

#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{ 
setlocale(LC_ALL,"Portuguese");
int X[3],Y[3],Z[3], I;
for (I=1;I<=3;I++)
{
  printf("%d� valor de X: ",I);
  scanf("%d",&X[I]);
  printf("%d� valor de Y: ",I);
  scanf("%d",&Y[I]);
  Z[I] = X[I] + Y[I];
}

//EXIBIÇAÕO DOS VALORES
for (I=1;I<=3;I++)
{
  printf("X[%d] = %d\n",I,X[I]);
  printf("Y[%d] = %d\n",I,Y[I]);
  printf("Z[%d] = %d\n",I,Z[I]);
}
}
