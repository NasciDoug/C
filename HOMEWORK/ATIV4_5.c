#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, j;
	double num[20];
	
	printf("...::: Início do Programa :::...\n");
	
	for(i=0;i<20;i++){
		printf("\nDigite um número qualquer: ");
		scanf("%lf", &num[i]);
	}
	
	printf("\nNúmeros que foram digitados mais de uma vez: ");
	
	for(i=0;i<20;i++){
		for(j = i+1; j<20;j++){
			if (num[i] == num[j])
				printf("\n       %.1f", num[i]);
		}
			
	}
	
	return 0;
}
