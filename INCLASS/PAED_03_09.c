/*Escrever um programa que efetua leitura de
um determinado valor numérico inteiro na
entrada, armazene-o em alguma variável e
depois o imprima na console.*/

#include<stdio.h>

int main(){
	int entrada;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &entrada);
	
	printf("O número digitado foi: %d\n\n", entrada);
	
	return 0;
}
