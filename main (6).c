/******************************************************************************

Nome: Paulo Henrique Fernandes Dias
atividade: banda
*******************************************************************************/
#include <stdio.h>
#define TAMANHO 3
typedef struct Banda{
    char nome[50];
    char estilo[25];
    int tamanho;
    int rank;
} BANDA;

void lebanda (BANDA *v){
    for(int i=0;i<TAMANHO;i++){
        printf("\nNome da banda: "); scanf("%s", v[i].nome);
        printf("Estilo musical: "); scanf("%s", v[i].estilo);
        printf("Numero de integrantes: "); scanf("%d", &v[i].tamanho);
        printf("Posicao no ranking: "); scanf("%d", &v[i].rank);
    }
}

void exibebanda (BANDA *exib){
    for(int i=0;i<TAMANHO;i++){
        printf("\nNome da banda: %s ", exib[i].nome);
        printf("Estilo musical: %s ", exib[i].estilo);
        printf("Numero de integrantes: %d ", exib[i].tamanho);
        printf("Posicao no ranking: %d \n", exib[i].rank);
    }
}

void procurabanda (BANDA *proc){
    char aux[50];
    int achou=0;
    printf("Qual estilo musical? ");
    scanf("%s", aux);
    
    for(int i=0;i<TAMANHO;i++) {
        if(strcmp(proc[i].estilo,aux)==0){
            achou=1;
            printf("\nBanda: %s", proc[i].nome);
        }
    }
    if(achou) printf("\nBanda Encontrada !");
    else      printf("\nBanda Ausente !");
}
int main()
{
    BANDA v[TAMANHO];
    lebanda (v);
    procurabanda (v);
    printf("\n\nLISTAGEM DE TODAS AS BANDAS");
    exibebanda (v);
    
}

