/*Codificar um programa com a linguagem C, para a
leitura de um valor num�rico inteiro.

Caso o n�mero entrado seja menor ou igual a zero, o
programa dever� enviar a mensagem �Valor entrado
Inv�lido� e encerrar. Caso contr�rio, o programa dever�
exibir em tela o resultado do dobro do n�mero entrado.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num);
	
	if (num<= 0){
		printf("Valor inv�lido!! (valor menor ou igual a zero)\n\n");
	}
	else 
		printf("Dobro do n�mero digitado �: %d\n\n",  num*2);
	
	
	return 0;
}
