/*Codificar um programa com a linguagem C, para a leitura
de dois valores num�ricos inteiros.

Caso os dois valores entrados sejam menores ou iguais a
zero, o programa dever� enviar a mensagem �Valores
entrados Inv�lidos� e encerrar. Caso os valores entrados
sejam iguais, o programa dever� exibir em tela a
mensagem �Valores entrados s�o iguais�. Caso contr�rio, o
programa dever� exibir em tela o maior dos valores
entrados.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digite o valor do primeiro n�mero: ");
	scanf("%d", &num1);
	
	printf("Digite o valor do segundo n�mero: ");
	scanf("%d", &num2);
	
	if(num1<=0){
		if(num2<=0){
			printf("Valores inv�lidos!!\n\n");
			return 1;
		}		
	} 
	
	if(num1==num2){
		printf("Valores s�o iguais!!\n\n");
		return 2;
	} 
	else {
	
		if (num1>num2)
			printf("O maior valor �: %d\n\n", num1);
		else
			printf("O maior valor �: %d\n\n", num2);
	}
	return 0;
}
