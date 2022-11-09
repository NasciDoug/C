#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que receba um número e diga se o número entrado está ou não no intervalo entre 100 e 200.*/
	
	double num;
	
	printf("...::: INÍCIO DO PROGRAMA :::...\n\n");
	
	printf("Insira um número qualquer: ");
	scanf("%lf", &num);
	
	if(num>100)
		if(num<200)
			printf("\nO número digitado está entre 100 e 200!!\n\n");
		else 
			printf("\nO número digitado está fora do intervado (100<X<200)\n\n");
	else
		printf("\nO número digitado está fora do intervado (100<X<200)\n\n");
	
	return 0;	
}
