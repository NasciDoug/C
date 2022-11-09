#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int soma=0, n=0, maior=0, somaPares=0;
	
	printf("...:::Início do Programa:::...\n");
	
	while(1){
		printf("\nInforme um valor inteiro qualquer(ou 999 para encerrar o programa): ");
		scanf("%d", &n);
		
		if(n>=maior)
			maior=n;
		
		if(n%2==0){
			somaPares+=n;
		}
		
		if(n==999){
			soma +=n;
			break;
		}
		else
			soma +=n;
		
	}
	
	printf("Soma = %d\n", soma);
	printf("Maior número: %d\n", maior);
	printf("Soma dos números pares: %d\n", somaPares);
	return 0;
}
