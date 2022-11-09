/*Escrever um programa que efetua leitura de um
determinado valor numérico decimal (float) na entrada,
armazene-o em alguma variável e depois o imprima na
console.*/

#include <stdio.h>

int main(){
	
	float entrada;
	
	printf("Digite um número decimal: ");
	scanf("%f", &entrada);
	
	printf("O número decimal digitado foi: %.3f", entrada);
	
	return 0;
}
