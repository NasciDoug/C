#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
		
	int i;
	double a[15], b[15];
	
	printf("...::: In�cio do Programa :::...\n");
	
	for(i=0;i<15;i++){
		printf("\nDigite um n�mero: ");
		scanf("%lf", &a[i]);
		
		b[i] = pow(a[i],3);
	}
	
	printf("\n\n------- Resolu��o -------\n");
	printf("      N      |      N�      ");
	
	for(i=0;i<15;i++){
		printf("\n      %.2f       %.2f", a[i], b[i]);
	}
	
	return 0;
}
