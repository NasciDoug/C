/*Codificar um programa com a linguagem C, para
a leitura de um valor numérico inteiro que
corresponde ao lado de um quadrado.

O programa deverá exibir em tela o resultado do
área do quadrado.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double lado, area;
	
	printf("Digite a medida do lado do quadrado: ");
	scanf("%lf", &lado);
	
	area = lado*lado;
	
	printf("Área: %.2f\n\n", area);
	
	return 0;	
}
