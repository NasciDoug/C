/*Codificar um programa com a linguagem C, para a
leitura de um valor numérico inteiro.

Caso o número entrado seja menor ou igual a zero, o
programa deverá enviar a mensagem “Valor entrado
Inválido” e encerrar. Caso contrário, o programa deverá
exibir em tela o resultado do dobro do número entrado.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	
	if (num<= 0){
		printf("Valor inválido!! (valor menor ou igual a zero)\n\n");
	}
	else 
		printf("Dobro do número digitado é: %d\n\n",  num*2);
	
	
	return 0;
}
