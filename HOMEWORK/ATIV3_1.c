#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double num[10],n,media, soma=0;
	int i, j=0;
	
	printf("...:::Início do Programa:::...\n");

		
	for(i=0;i<10;i++){	
		printf("\nDigite um número qualquer: ");
		scanf("%lf", &n);
		
		num[i] = n;
		
	}
	
		
	printf("\nValores negativos digitados: \n");
	
	for(i=0;i<10;i++){
		if (num[i]<0){
			printf("             %.2f\n",num[i]);
			j++;
			
			soma = soma + num[i];
			media = soma/j;	
		}
	}
	printf("Média dos valores negativos: %.2f", media);
	return 0;
}
