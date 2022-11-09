/*Codificar um programa com a linguagem C, para
a leitura de dois valores numéricos inteiros que
correspondem aos lados de um retângulo.

O programa deverá exibir em tela o resultado do
perímetro do retângulo.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double lado1, lado2, perimetro;
	
	printf("Digite a primeira medida do retângulo: ");
	scanf("%lf", &lado1);
	
	printf("Digite a segunda medida do retângulo: ");
	scanf("%lf", &lado2);
	
	perimetro = lado1*2+lado2*2;
	
	printf("Perímetro: %.2f\n\n", perimetro);
	
	return 0;
}
