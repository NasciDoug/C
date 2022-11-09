#include<stdio.h>
#include<locale.h>

int media(double num[20]);

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int i;
	double num[20], soma=0, media;
	
	printf("...::: Início do Programa :::...\n");
	
	for (i=0;i<20;i++){
		printf("\nDigite um número: ");
		scanf("%lf", &num[i]);
		
		if (i==0){
			soma = soma + num[i];
		} else if (i==19){
			soma = soma + num[i];
		}
	}
	
	media = soma/2;
	
	printf("\n\nMédia do primeiro e último valor digitado: %.2f", media);
	
	return 0;
}

