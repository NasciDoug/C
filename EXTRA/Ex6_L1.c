#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que receba um n�mero 
	e informe se o n�mero entrado est� ou n�o no intervalo entre 200 e 300.
	*/
	
	double num;
	
	printf("...::: IN�CIO DO PROGRMA :::...\n\n");
	
	printf("Digite um n�mero qualquer: \n");
	scanf("%lf", &num);
	
	if (num>200)
		if (num<300)
			printf("\nO n�mero digitado est� entre 200 e 300! \n\n");
		else 
			printf("\nO n�mero est� fora do intervalo! \n\n");
	else 
		printf("\nO n�mero est� fora do intervalo! \n\n");
		
	return 0;
	
}
