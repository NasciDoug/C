/*Escrever um programa que efetua leitura de um
determinado valor numérico decimal (double) na
entrada, armazene-o em alguma variável e depois o
imprima na console.*/

#include<stdio.h>

int main(){
	double entrada;
	
	printf("Digite um valor decimal: ");
	scanf("%lf", &entrada);
	
	printf("O número decimal digitado foi: %.2f\n\n", entrada);
	
	return 0;
}
