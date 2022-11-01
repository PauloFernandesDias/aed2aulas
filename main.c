/*
	Nome: Paulo Henrique Fernandes Dias
	Data: 08/08/22 21:19
	Atividade: Atividade 1 / aed2
	Descrição: fazer um programa para calcular o salario mensal de um funcionario horista
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portugues");
	
	float SalarioMensal=0, ValorHora=0, HoraTrabalho=0;
	
	printf("Quanto recebe por hora?\n");
		scanf("%f", &ValorHora);
	printf("Qauntas horas trabalhadas este mes?\n");
		scanf("%f", &HoraTrabalho);
	
	SalarioMensal=ValorHora*HoraTrabalho;
	
	printf("O salario mensal foi de %.2f", SalarioMensal);
	
	return 0; 
}
