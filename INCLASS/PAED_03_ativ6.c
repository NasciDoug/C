/*Codificar um programa com a linguagem C, para a
leitura de dois valores numéricos inteiros que
correspondem aos lados de um retângulo.

Caso os dois valores entrados sejam ímpares, o
programa deverá enviar a mensagem “Valores entrados
Inválidos” e encerrar. Caso contrário, o programa deverá
exibir em tela o resultado do área do retângulo.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int lado1, lado2, area;
	
	printf("Digite a primeira medida do retângulo: ");
	scanf("%d", &lado1);
	
	printf("Digite a segunda medida do retângulo: ");
	scanf("%d", &lado2);
	
	if (lado1%2 == 1){
		if(lado2%2 == 1){
			printf("Valores entrados inválidos! (Valores entrados impares)\n\n");
		}
		else
			printf("Primeiro Valor inválido (valor impar)\n\n");
		return 1;
	}
	
	area = lado1*lado2;
	
	printf("Área: %d\n\n", area);
	
	return 0;
}
