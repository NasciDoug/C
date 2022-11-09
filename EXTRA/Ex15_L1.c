#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C  que efetue a leitura de uma temperatura medida em graus Fahrenheit e a apresente convertida em graus Celsius. 
	A fórmula para a conversaão é C = ((F - 32) * 5)/9, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/
	
	float celsius, fahrenheit;
	
	printf("...::: INÍCIO DO PROGRAMA :::...\n\n");
	
	printf("Insira uma temperatura (F): ");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit-32)*5/9;
	
	printf("\nEsta temmperatura equivale à: %.1fºC\n\n", celsius);
	
	return 0;	
}
