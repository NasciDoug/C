/*Escrever um programa que efetua leitura de um
determinado valor num�rico decimal (double) na
entrada, armazene-o em alguma vari�vel e depois o
imprima na console.*/

#include<stdio.h>

int main(){
	double entrada;
	
	printf("Digite um valor decimal: ");
	scanf("%lf", &entrada);
	
	printf("O n�mero decimal digitado foi: %.2f\n\n", entrada);
	
	return 0;
}
