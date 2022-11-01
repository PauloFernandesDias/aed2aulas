/******************************************************************************
    Nome: Paulo Henrique Fernandes Dias
	Atividade: exercicio 5 lista 5
	
	 Crie uma função que determine se dado caracter está entre ‘a’ e ‘z’. Dica: Use a tabela ASCII.


*******************************************************************************/
#include <stdio.h>

int verificar(char n){
    return (n>='a'&&n<='z');
}

int main()
{
    char n;
    
    printf("insira um caracter: ");
    scanf("%c", &n);
    
    if(verificar(n))
        printf("o caracter esta entre a e z");
    else
        printf("o caracter nao esta entre a e z");
}

