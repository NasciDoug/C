/*Codificar um programa com a linguagem C, para a
leitura de dois valores num�ricos inteiros.

Caso os dois valores entrados sejam menores ou iguais
a zero, o programa dever� enviar a mensagem �Valores
entrados Inv�lidos� e encerrar. Caso contr�rio, o
programa dever� exibir em tela o resultado da soma dos
dois valores entrados.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1,num2, soma;
	
	printf("Digite o valor do primeiro n�mero: ");
	scanf("%d", &num1);
	
	printf("Digite o valor do segundo n�mero: ");
	scanf("%d", &num2);
	
		soma = num1+num2;
		
	if (num1<=0){
		if(num2<=0)
			printf("Valores inv�lidos!!(valores menores ou iguais a zero)\n\n");
		else
			printf("Soma dos valores digitados: %d\n\n", soma);
		
	}
	
	return 0;

}
