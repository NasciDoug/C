#include <stdio.h>
#include <locale.h>

/* Escrever um programa fonte na Linguagem C que exiba o valor da área de um triângulo, 
a partir do valor da base e altura fornecidos pelo usuário.
*/

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	double base, altura, area;
	
	printf("Digite o valor da base (m): \n");
	
	scanf("%lf", &base);
	
	printf("Digite o valor da altura (m): \n");
	
	scanf("%lf", &altura);
	
	area = (base*altura)/2;
	
	printf("A área do triângulo é %.2f m²\n\n", area);
	
	return 0;
	
}


