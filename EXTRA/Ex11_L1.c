#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	 /*Escrever um programa fonte na Linguagem C que receba um número inteiro do usuário e diga se ele é par ou impar. 
	 (Dica: Um número é par se o resto da divisão dele por 2 for zero – A função módulo % retorna o resto da divisão.)
	 */
	 
	 int num;
	 
	 printf("...::: INÍCIO DO PROGRAMA :::...\n\n");
	 
	 printf("Insira um número inteiro: ");
	 scanf("%d", &num);
	 
	 if (num%2 == 0)
	 	printf("\nO número digitado é par!!\n\n");
	else
		printf("\nO número digitado é impar!!\n\n");
		
	return 0;	 
}
