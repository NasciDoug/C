#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int num[10], i;
	
	printf("...::: In�cio do Programa :::...\n");
	
	for(i=0;i<10;i++){
		printf("\nDigite um n�mero inteiro: ");
		scanf("%d", &num[i]);
	}
	
	printf("\n\n---N�mero digitados (Ordenados do �ltimo para o primeiro)---");
	
	for(i=9; i>=0;i--){
		printf("\n                          %d\n", num[i]);
	}
	
	return 0;
}
