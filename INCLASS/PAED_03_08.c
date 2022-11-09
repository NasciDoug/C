/*Escrever um programa que efetua leitura de um
determinado caractere na entrada, armazene-o em
alguma variável e depois o imprima na console.*/

#include <stdio.h>

int main(){
	char entrada;
	
	printf("Digite um caractere: ");
	scanf ("%c", &entrada);
	
	printf("O caractere digitado foi: %c\n\n", entrada);
	
	return 0;	
}
