#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num[10], i, cont=0, soma=0, media;
	
	printf("...::: Inicío do Programa :::...\n");
	
	for(i=0;i<10;i++){
		printf("\nDigite um número inteiro: ");
		scanf("%d", &num[i]);
		
		if (num[i]%2 != 0){
			soma=soma+num[i];
			cont++;
		}
	}
	
	media = soma/cont;
	
	printf("\n\nMédia dos números impares digitados: %d", media);
	
	return 0;
}
