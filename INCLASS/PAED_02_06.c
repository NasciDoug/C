/*Criar um programa que calcula e imprima na tela a área de um ciruculo.
Considere que o raio é 10,0. PI deve ser um valor constante*/

#include <stdio.h>
#define PI 3.141519


int main(){
	double R = 10.0;
	double A;
	
	A = PI*(R*R);
	
	printf("Área do circulo = %f\n", A);
	
	return 0;
}
