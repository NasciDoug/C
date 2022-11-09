#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,soma = 0, num[10];
	
	printf("...::: Início do Programa :::...\n");
	
	for (i=0; i<10;i++ ){
		printf("\nDigite um número inteiro: ");
		scanf("%d", &num[i]);
		
		if(num[i]%2==0)
			soma+=num[i];
	}
	
	printf("\n\nSoma dos números pares digitados: %d", soma);
	
	return 0;
}
