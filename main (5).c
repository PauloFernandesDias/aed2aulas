/******************************************************************************
ex 8 lista 4
*******************************************************************************/
#include <stdio.h>
#include <string.h>

typedef struct ponto{
    int x, y;
} Ponto;

#define QUANTIDADE_DE_PONTOS 3
int main()
{
    Ponto pontos[QUANTIDADE_DE_PONTOS];
    pontos[0].x=-4;pontos[0].y=7;
    pontos[1].x=2;pontos[1].y=-9;
    pontos[2].x=5;pontos[2].y=3;
   
   for (int i=0; i<QUANTIDADE_DE_PONTOS; i++){
       if(pontos[i].y>0)    printf("(X=%d Y=%d) Ponto acima da reta \n", pontos[i].x, pontos[i].y);
   }

}

