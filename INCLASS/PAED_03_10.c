/*Escrever um programa que efetua leitura de um
determinado valor num�rico decimal (float) na entrada,
armazene-o em alguma vari�vel e depois o imprima na
console.*/

#include <stdio.h>

int main(){
	
	float entrada;
	
	printf("Digite um n�mero decimal: ");
	scanf("%f", &entrada);
	
	printf("O n�mero decimal digitado foi: %.3f", entrada);
	
	return 0;
}
