#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	 /*Escrever um programa fonte na Linguagem C que receba um n�mero inteiro do usu�rio e diga se ele � par ou impar. 
	 (Dica: Um n�mero � par se o resto da divis�o dele por 2 for zero � A fun��o m�dulo % retorna o resto da divis�o.)
	 */
	 
	 int num;
	 
	 printf("...::: IN�CIO DO PROGRAMA :::...\n\n");
	 
	 printf("Insira um n�mero inteiro: ");
	 scanf("%d", &num);
	 
	 if (num%2 == 0)
	 	printf("\nO n�mero digitado � par!!\n\n");
	else
		printf("\nO n�mero digitado � impar!!\n\n");
		
	return 0;	 
}
