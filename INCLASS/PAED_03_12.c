/*Escrever um programa que efetua leitura do
primeiro nome de uma pessoa, armazene-o em
alguma variável e depois o imprima na console.*/

#include<stdio.h>

int main(){
	char nome[40];
	
	printf("Digite um nome: ");
	scanf("%s", &nome);
	
	printf("O nome digitado foi: %s\n\n", nome);
	
	return 0;
	
	
}
