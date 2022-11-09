#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que informe a idade de um jogador de futebol e exiba a sua categoria, 
	considerando as seguintes regras: infantil (até 13 anos), juvenil (até 17 anos) ou sênior (acima de 17 anos). 
	*/
	
	int age;
	
	printf("...::: INÍCIO DO PROGRAMA :::...\n\n");
	
	printf("Insira a idade do jogador: ");
	scanf("%d", &age);
	
	if (age<=13)
		printf("\nCategoria: INFANTIL\n\n");
	else if (age<=17)
		printf("\nCategoria: JUVENIL\n\n");
	else
		printf("\nCategoria: SÊNIOR\n\n");
	
	return 0;
}
