#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
		
	int i;
	double a[15], b[15];
	
	printf("...::: Início do Programa :::...\n");
	
	for(i=0;i<15;i++){
		printf("\nDigite um número: ");
		scanf("%lf", &a[i]);
		
		b[i] = pow(a[i],3);
	}
	
	printf("\n\n------- Resolução -------\n");
	printf("      N      |      N³      ");
	
	for(i=0;i<15;i++){
		printf("\n      %.2f       %.2f", a[i], b[i]);
	}
	
	return 0;
}
