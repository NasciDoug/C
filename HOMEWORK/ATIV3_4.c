#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int num[10], i;
	
	printf("...::: Início do Programa :::...\n");
	
	for(i=0;i<10;i++){
		printf("\nDigite um número inteiro: ");
		scanf("%d", &num[i]);
	}
	
	printf("\n\n---Número digitados (Ordenados do último para o primeiro)---");
	
	for(i=9; i>=0;i--){
		printf("\n                          %d\n", num[i]);
	}
	
	return 0;
}
