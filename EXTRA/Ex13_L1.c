#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que receba um n�mero e diga se o n�mero entrado est� ou n�o no intervalo entre 100 e 200.*/
	
	double num;
	
	printf("...::: IN�CIO DO PROGRAMA :::...\n\n");
	
	printf("Insira um n�mero qualquer: ");
	scanf("%lf", &num);
	
	if(num>100)
		if(num<200)
			printf("\nO n�mero digitado est� entre 100 e 200!!\n\n");
		else 
			printf("\nO n�mero digitado est� fora do intervado (100<X<200)\n\n");
	else
		printf("\nO n�mero digitado est� fora do intervado (100<X<200)\n\n");
	
	return 0;	
}
