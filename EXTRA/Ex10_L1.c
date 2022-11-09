#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que calcule a média aritmética de três números entrados pelo usuário.*/
	
	double num1,num2,num3, average;
	
	printf("...::: INÍCIO DO PROGRAMA :::...\n\n");
	
	printf("Insira três números quaisquer para iniciar o programa!");
	printf("\nPrimeiro número: ");
	scanf("%lf", &num1);
	
	printf("\nSgundo número: ");
	scanf("%lf", &num2);
	
	printf("\nTerceiro número: ");
	scanf("%lf", &num3);
	
	average = (num1+num2+num3)/3;
	
	printf("\n\nA média dos números digitados é: %.2f!\n\n", average);
	
	return 0;	
}
