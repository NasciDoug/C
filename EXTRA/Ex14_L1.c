#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C  que efetue a leitura de uma temperatura medida em graus Celsius e fa�a a convers�o em graus Fahrenheit. 
	A f�rmula para a convers�o das temperaturas � F = (9 * C + 160)/5, sendo F a temperatura em Fahrenheit e C em Celsius.*/
	 
	float celsius, fahrenheit;
	
	printf("...::: IN�CIO DO PROGRAMA :::...\n\n");
	
	printf("Insira uma temperatura (�C): ");
	scanf("%f", &celsius);
	
	fahrenheit = (9*celsius+160)/5;
	
	printf("\nEsta temmperatura equivale �: %.1f F\n\n", fahrenheit);
	
	return 0;	 
}
