/*Codificar um programa com a linguagem C, para a
leitura de dois valores num�ricos inteiros que
correspondem aos lados de um ret�ngulo.

O programa dever� exibir em tela o resultado do �rea do
ret�ngulo.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double lado1, lado2, area;
	
	printf("Digite a primeira medida do ret�ngulo: ");
	scanf("%lf", &lado1);
	
	printf("Digite a segunda medida do ret�ngulo: ");
	scanf("%lf", &lado2);
	
	area = lado1*lado2;
	
	printf("area: %.2f\n\n", area);
	
	return 0;
}
