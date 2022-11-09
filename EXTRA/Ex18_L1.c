#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C  que efetue a leitura de dois valores numéricos inteiros e apresente o resultado da diferença do maior valor pelo menor.*/
	
	int num1, num2, subtraction;
	
	printf("...::: INÍCIO DO PROGRAMA :::...\n\n");
	
	printf("Insira o valor de um número inteiro qualquer: ");
	scanf("%d", &num1);
	
	printf("\nInsira o valor de outro número inteiro qualquer: ");
	scanf("%d", &num2);
	
	if(num1>num2){
		subtraction = num1-num2;
		printf("\n\nA diferença entre %d e %d é %d\n\n", num1, num2, subtraction);
	}else{
		subtraction = num2-num1;
		printf("\n\nA diferença entre %d e %d é %d\n\n", num2, num1, subtraction);
	}
	
	return 0;
}
