#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que leia dois valores inteiros e informe se eles são iguais. 
	Caso sejam diferentes, o programa deverá informar o maior dos valores entrados.
	*/
	
	setlocale (LC_ALL, "Portuguese");
	
	int num1, num2, igual;
	
	printf("...::: INÍCIO DO PROGRAMA :::..\n\n");
	
	printf("Digite o valor do primeiro número: ");
	scanf("%d", &num1);
	
	printf("\nDigite o valor do segundo número: ");
	scanf("%d", &num2);
		
	if(num1==num2)
		printf("\n\nOs números digitados são iguais!!");
	else
	{
		if(num1>num2)
			printf("\n\n%d é maior que %d", num1, num2);
		else if (num1<num2)
			printf("\n\n%d é maior que %d", num2, num1);
	}
	
	return 0;
	
}
