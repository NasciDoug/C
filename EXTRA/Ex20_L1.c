#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C  que exiba ao usuários os números de 100 a 1, usando os comando while ou for de repetição.*/
	
	int i=100;
	
	printf("...::: INÍCIO DO PROGRAMA :::...\n\n");
	
	while(i>0){
		printf("%d\n", i);
		i--;
	}
	
	return 0;
}
