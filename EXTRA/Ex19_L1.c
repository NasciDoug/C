#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C  que exiba ao usu�rio os n�meros de 1 a 10, usando os comando while ou for de repeti��o.*/
	
	int i=1;
	
	printf("...::: IN�CIO DO PROGRAMA :::...\n\n");
	
	for(i;i<=10;i++){
		printf("              %d\n", i);
	}
	
	return 0;
}
