#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que receba dois números inteiros e informe qual deles é o menor.*/
	
	int num1, num2;
	
	printf("...::: INÍCIO DO PROGRAMA :::...\n\n");
	
	printf("Insira um número inteiro: ");
	scanf("%d", &num1);
	
	printf("\nInsira outro número inteiro: ");
	scanf("%d", &num2);
	
	if (num1<num2)
		printf("\n\n%d é menor que %d!\n", num1, num2);
	else if (num2<num1)
		printf("\n\n%d é menor que %d!\n", num2, num1);
	else
		printf("\n\nOs dois números possuem o mesmo valor!\n", num2, num1);
		
	return 0;
	
}
