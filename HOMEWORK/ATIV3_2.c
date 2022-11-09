#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double num[10],quadrado[10],n;
	int i;
	
	printf("...:::Início do Programa:::...\n");

		
	for(i=0;i<10;i++){	
		printf("\nDigite um número qualquer: ");
		scanf("%lf", &n);
		num[i] = n;
		quadrado[i]=n*n;
		
	}
	
	printf("\nNº Digitado            (Nº)²");
	
	for(i=0;i<10;i++){	
		printf("\n    %.2f               %.2f",num[i],quadrado[i]);
	}
		
	return 0;
}
