#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C  que efetue a leitura de uma temperatura medida em graus Fahrenheit e a apresente convertida em graus Celsius. 
	A f�rmula para a conversa�o � C = ((F - 32) * 5)/9, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/
	
	float celsius, fahrenheit;
	
	printf("...::: IN�CIO DO PROGRAMA :::...\n\n");
	
	printf("Insira uma temperatura (F): ");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit-32)*5/9;
	
	printf("\nEsta temmperatura equivale �: %.1f�C\n\n", celsius);
	
	return 0;	
}
