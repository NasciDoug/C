#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que receba um número 
	e informe se o número entrado está ou não no intervalo entre 200 e 300.
	*/
	
	double num;
	
	printf("...::: INÍCIO DO PROGRMA :::...\n\n");
	
	printf("Digite um número qualquer: \n");
	scanf("%lf", &num);
	
	if (num>200)
		if (num<300)
			printf("\nO número digitado está entre 200 e 300! \n\n");
		else 
			printf("\nO número está fora do intervalo! \n\n");
	else 
		printf("\nO número está fora do intervalo! \n\n");
		
	return 0;
	
}
