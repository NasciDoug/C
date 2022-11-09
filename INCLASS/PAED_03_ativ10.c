/*Codificar um programa com a linguagem C, para a leitura
de dois valores numéricos inteiros.

Caso os dois valores entrados sejam menores ou iguais a
zero, o programa deverá enviar a mensagem “Valores
entrados Inválidos” e encerrar. Caso os valores entrados
sejam iguais, o programa deverá exibir em tela a
mensagem “Valores entrados são iguais”. Caso contrário, o
programa deverá exibir em tela o maior dos valores
entrados.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digite o valor do primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o valor do segundo número: ");
	scanf("%d", &num2);
	
	if(num1<=0){
		if(num2<=0){
			printf("Valores inválidos!!\n\n");
			return 1;
		}		
	} 
	
	if(num1==num2){
		printf("Valores são iguais!!\n\n");
		return 2;
	} 
	else {
	
		if (num1>num2)
			printf("O maior valor é: %d\n\n", num1);
		else
			printf("O maior valor é: %d\n\n", num2);
	}
	return 0;
}
