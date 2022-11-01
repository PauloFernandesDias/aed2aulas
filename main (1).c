/******************************************************************************
    Nome: Paulo Henrique Fernandes Dias
	Atividade: exercicio 6 lista 4


    Faça uma função que retorne o resultado do somatório abaixo, sendo n o parâmetro de entrada da função.

        ∑(5 ∗ i^2 +2 ∗ i + 8)

*******************************************************************************/
#include <stdio.h>

int soma(int n){
    int i, g, r=0;
    
    for(i=1;i<=n;i++){
        g=5 * (i * i) +2 * i + 8;
        r=r+g;
    }
    
    return r;
}

int main()
{
    int n;
    
    printf("insira um numero: ");
        scanf("%d", &n);
        
    soma(n);
    printf("resultado final: %d", soma(n));
    
    
}

