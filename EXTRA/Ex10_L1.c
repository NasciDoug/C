#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que calcule a m�dia aritm�tica de tr�s n�meros entrados pelo usu�rio.*/
	
	double num1,num2,num3, average;
	
	printf("...::: IN�CIO DO PROGRAMA :::...\n\n");
	
	printf("Insira tr�s n�meros quaisquer para iniciar o programa!");
	printf("\nPrimeiro n�mero: ");
	scanf("%lf", &num1);
	
	printf("\nSgundo n�mero: ");
	scanf("%lf", &num2);
	
	printf("\nTerceiro n�mero: ");
	scanf("%lf", &num3);
	
	average = (num1+num2+num3)/3;
	
	printf("\n\nA m�dia dos n�meros digitados �: %.2f!\n\n", average);
	
	return 0;	
}
