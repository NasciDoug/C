#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que exiba 
	a soma, 
	a subtra��o, 
	a multiplica��o e 
	a divis�o 
	de dois n�meros inteiros fornecidos pelo usu�rio.*/
	
	double num1, num2, soma, subtracao, multiplicacao, divisao;
	
	
	printf("...::: In�cio do Programa :::...\n\n");
	printf("Digite o valor do primeiro n�mero: \n");
	scanf("%lf", &num1);
	
	printf("Digite o valor do segundo n�mero: \n");
	scanf("%lf", &num2);
	
	soma = num1 + num2;
	subtracao = num1-num2;
	multiplicacao = num1*num2;
	divisao = num1/num2;
	
	printf("\n\nSoma de %.2f e %.2f � igual � %.2f \n", num1, num2, soma);
	printf("Subtra��o de %.2f e %.2f � igual � %.2f \n", num1, num2, subtracao);
	printf("Multiplica��o de %.2f e %.2f � igual � %.2f \n", num1, num2, multiplicacao);
	printf("Divis�o de %.2f e %.2f � igual � %.2f \n", num1, num2, divisao);
	
	return 0;
}
