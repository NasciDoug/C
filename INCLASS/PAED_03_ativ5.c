/*Codificar um programa com a linguagem C, para a
leitura de um valor num�rico inteiro que corresponde ao
lado de um quadrado.

Caso o n�mero seja �mpar, o algoritmo dever� enviar a
mensagem �Valor Inv�lido� e encerrar. Caso contr�rio, o
programa dever� exibir em tela o resultado do �rea do
quadrado.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int lado, area;
	
	printf("Digite a medida do lado do quadrado: ");
	scanf("%d", &lado);
	
	if(lado % 2 == 1){
		printf("Valor inv�lido! (n�mero �mpar)");
		return 1;
	}
	
	area = lado*lado;
	
	printf("�rea: %.d\n\n", area);
	
	return 0; 
}
