/*Codificar um programa com a linguagem C, para
a leitura de um valor numérico inteiro que
corresponde ao lado de um quadrado.

O programa deverá exibir em tela o resultado do
perímetro do quadrado.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double lado, perimetro;
	
	printf("Digite a medida do lado do quadrado: ");
	scanf("%lf", &lado);
	
	perimetro = 4*lado;
	
	printf("Perimetro: %.2f\n\n", perimetro);
	
	return 0;
	
}
