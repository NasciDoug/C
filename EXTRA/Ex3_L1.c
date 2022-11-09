#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que leia o nome de um vendedor, 
	o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). 
	Sabendo que esse vendedor ganha 20% de comissão sobre suas vendas efetuadas, 
	o programa deverá informar o nome do vendedor, o salário fixo e salário no final do mês.
	*/
	
	char nome [35];
	double salario, salarioFinal, vendas;
	
	printf("...::: INÍCIO DO PROGRAMA :::...\n\n");
	
	printf("Nome do funcionário: ");
	scanf("%s", &nome);

	printf("\nSalário fixo: ");
	scanf("%lf", &salario);
	
	printf("\nQuantidade de vendas efetuadas: ");
	scanf("%lf", &vendas);
	
	salarioFinal = salario*(vendas*0.20);
	
	printf("\n\nFuncionário: %s", nome);
	printf("\nSalário: %.2f", salario);
	printf("\nSalário Final: %.2f", salarioFinal);
	
	return 0;
	
}
