/*Escrever um programa que efetua leitura de
um determinado valor num�rico inteiro na
entrada, armazene-o em alguma vari�vel e
depois o imprima na console.*/

#include<stdio.h>

int main(){
	int entrada;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &entrada);
	
	printf("O n�mero digitado foi: %d\n\n", entrada);
	
	return 0;
}
