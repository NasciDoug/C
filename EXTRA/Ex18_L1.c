#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C  que efetue a leitura de dois valores num�ricos inteiros e apresente o resultado da diferen�a do maior valor pelo menor.*/
	
	int num1, num2, subtraction;
	
	printf("...::: IN�CIO DO PROGRAMA :::...\n\n");
	
	printf("Insira o valor de um n�mero inteiro qualquer: ");
	scanf("%d", &num1);
	
	printf("\nInsira o valor de outro n�mero inteiro qualquer: ");
	scanf("%d", &num2);
	
	if(num1>num2){
		subtraction = num1-num2;
		printf("\n\nA diferen�a entre %d e %d � %d\n\n", num1, num2, subtraction);
	}else{
		subtraction = num2-num1;
		printf("\n\nA diferen�a entre %d e %d � %d\n\n", num2, num1, subtraction);
	}
	
	return 0;
}
