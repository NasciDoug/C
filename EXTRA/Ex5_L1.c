#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que leia dois valores inteiros e informe se eles s�o iguais. 
	Caso sejam diferentes, o programa dever� informar o maior dos valores entrados.
	*/
	
	setlocale (LC_ALL, "Portuguese");
	
	int num1, num2, igual;
	
	printf("...::: IN�CIO DO PROGRAMA :::..\n\n");
	
	printf("Digite o valor do primeiro n�mero: ");
	scanf("%d", &num1);
	
	printf("\nDigite o valor do segundo n�mero: ");
	scanf("%d", &num2);
		
	if(num1==num2)
		printf("\n\nOs n�meros digitados s�o iguais!!");
	else
	{
		if(num1>num2)
			printf("\n\n%d � maior que %d", num1, num2);
		else if (num1<num2)
			printf("\n\n%d � maior que %d", num2, num1);
	}
	
	return 0;
	
}
