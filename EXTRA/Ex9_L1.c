#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que receba dois n�meros inteiros e informe qual deles � o menor.*/
	
	int num1, num2;
	
	printf("...::: IN�CIO DO PROGRAMA :::...\n\n");
	
	printf("Insira um n�mero inteiro: ");
	scanf("%d", &num1);
	
	printf("\nInsira outro n�mero inteiro: ");
	scanf("%d", &num2);
	
	if (num1<num2)
		printf("\n\n%d � menor que %d!\n", num1, num2);
	else if (num2<num1)
		printf("\n\n%d � menor que %d!\n", num2, num1);
	else
		printf("\n\nOs dois n�meros possuem o mesmo valor!\n", num2, num1);
		
	return 0;
	
}
