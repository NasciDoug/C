#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int soma=0, n=0;
	
	printf("...:::Início do Programa:::...\n");
	
	while(1){
		printf("\nInforme um valor inteiro qualquer(ou 999 para encerrar o programa): ");
		scanf("%d", &n);
		
		if(n==999)
			break;
		else
			soma +=n;
	}
	
	printf("Soma = %d", soma);
	return 0;
}
