/*Codificar um programa com a linguagem C, para
a leitura de dois valores num�ricos inteiros que
correspondem aos lados de um ret�ngulo.

O programa dever� exibir em tela o resultado do
per�metro do ret�ngulo.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double lado1, lado2, perimetro;
	
	printf("Digite a primeira medida do ret�ngulo: ");
	scanf("%lf", &lado1);
	
	printf("Digite a segunda medida do ret�ngulo: ");
	scanf("%lf", &lado2);
	
	perimetro = lado1*2+lado2*2;
	
	printf("Per�metro: %.2f\n\n", perimetro);
	
	return 0;
}
