/******************************************************************************

ex 08 lista 04

Paulo Henrique Fernandes Dias

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define QUANTIDADE_DE_PONTOS 3

float calculaDistancia(int x1, int y1, int x2, int y2){
    return sqrt( (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1) );
}

typedef struct{
    int x;
    int y;
}Ponto;

int main()
{
    Ponto pontos[QUANTIDADE_DE_PONTOS];
    
    pontos[0].x = -4 ; pontos[0].y = 7;
    pontos[1].x = 2 ; pontos[1].y = -9;
    pontos[2].x = 5 ; pontos[2].y = 3;
    
    for (int i = 0; i<QUANTIDADE_DE_PONTOS; i++){
        if(pontos[i].y > 0){
            printf("cordenadas x:%d e y:%d\n", pontos[i].x, pontos[i].y);
        }
    }
    int Xa, Ya, Xb, Yb;
    printf("insira o valor para 2 pontos distintos:");
    printf("\nponto A: (x,y)");
        scanf("%d %d", &Xa, &Ya);
    printf("\nponto B: (x,y)");
        scanf("%d %d", &Xb, &Yb);
        
    printf("\n\n a distancia entre os pontos é: %f", calculaDistancia(Xa, Ya, Xb, Yb));

    return 0;
}

