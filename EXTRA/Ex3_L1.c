#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que leia o nome de um vendedor, 
	o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s (em dinheiro). 
	Sabendo que esse vendedor ganha 20% de comiss�o sobre suas vendas efetuadas, 
	o programa dever� informar o nome do vendedor, o sal�rio fixo e sal�rio no final do m�s.
	*/
	
	char nome [35];
	double salario, salarioFinal, vendas;
	
	printf("...::: IN�CIO DO PROGRAMA :::...\n\n");
	
	printf("Nome do funcion�rio: ");
	scanf("%s", &nome);

	printf("\nSal�rio fixo: ");
	scanf("%lf", &salario);
	
	printf("\nQuantidade de vendas efetuadas: ");
	scanf("%lf", &vendas);
	
	salarioFinal = salario*(vendas*0.20);
	
	printf("\n\nFuncion�rio: %s", nome);
	printf("\nSal�rio: %.2f", salario);
	printf("\nSal�rio Final: %.2f", salarioFinal);
	
	return 0;
	
}
