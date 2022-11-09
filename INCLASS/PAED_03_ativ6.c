/*Codificar um programa com a linguagem C, para a
leitura de dois valores num�ricos inteiros que
correspondem aos lados de um ret�ngulo.

Caso os dois valores entrados sejam �mpares, o
programa dever� enviar a mensagem �Valores entrados
Inv�lidos� e encerrar. Caso contr�rio, o programa dever�
exibir em tela o resultado do �rea do ret�ngulo.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int lado1, lado2, area;
	
	printf("Digite a primeira medida do ret�ngulo: ");
	scanf("%d", &lado1);
	
	printf("Digite a segunda medida do ret�ngulo: ");
	scanf("%d", &lado2);
	
	if (lado1%2 == 1){
		if(lado2%2 == 1){
			printf("Valores entrados inv�lidos! (Valores entrados impares)\n\n");
		}
		else
			printf("Primeiro Valor inv�lido (valor impar)\n\n");
		return 1;
	}
	
	area = lado1*lado2;
	
	printf("�rea: %d\n\n", area);
	
	return 0;
}
