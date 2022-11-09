#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que exiba 
	a soma, 
	a subtração, 
	a multiplicação e 
	a divisão 
	de dois números inteiros fornecidos pelo usuário.*/
	
	double num1, num2, soma, subtracao, multiplicacao, divisao;
	
	
	printf("...::: Início do Programa :::...\n\n");
	printf("Digite o valor do primeiro número: \n");
	scanf("%lf", &num1);
	
	printf("Digite o valor do segundo número: \n");
	scanf("%lf", &num2);
	
	soma = num1 + num2;
	subtracao = num1-num2;
	multiplicacao = num1*num2;
	divisao = num1/num2;
	
	printf("\n\nSoma de %.2f e %.2f é igual à %.2f \n", num1, num2, soma);
	printf("Subtração de %.2f e %.2f é igual à %.2f \n", num1, num2, subtracao);
	printf("Multiplicação de %.2f e %.2f é igual à %.2f \n", num1, num2, multiplicacao);
	printf("Divisão de %.2f e %.2f é igual à %.2f \n", num1, num2, divisao);
	
	return 0;
}
