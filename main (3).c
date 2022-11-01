/******************************************************************************

    Nome: Paulo Henrique Fernandes Dias
	Atividade: desenhar um quadrado 6x6 com *

*******************************************************************************/
#include <stdio.h>

void asterisco (char a, int x){
  int i , j;
  for(i=0;i<x;i++){
      for(j=0;j<x;j++){
          printf("%c", a);
      }
      printf("\n");
  }
}
int main()
{
    asterisco();
    return 0;
}

