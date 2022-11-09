#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C  que exiba ao usuário os números de 1 a 10, usando os comando while ou for de repetição.*/
	
	int i=1;
	
	printf("...::: INÍCIO DO PROGRAMA :::...\n\n");
	
	for(i;i<=10;i++){
		printf("              %d\n", i);
	}
	
	return 0;
}
