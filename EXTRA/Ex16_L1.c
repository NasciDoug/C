#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C  que efetue a leitura de tr�s valores num�ricos inteiros 
	(vari�veis A, B e C) e apresente os valores entrados em ordem crescente.*/
	
	int a, b, c;
	
	printf("...::: IN�CIO DO PROGRAMA :::...\n\n");
	
	printf("Insira o valor de tr�s n�meros inteiros:\n");
	printf("Primeiro n�mero: ");
	scanf("%d", &a);
	
	printf("\nSegundo n�mero: ");
	scanf("%d", &b);
	
	printf("\nTerceiro n�mero: ");
	scanf("%d", &c);
	
		printf("\n\nN�meros digitados em ordem crescente:");
	
	if(a<b){
		/*se a for menor que b*/
		if (a<c){
			printf("\n%d",a);
			/*se a for menor que b, e b menor que c*/
			if(b<c){
				printf("\n%d",b);
				printf("\n%d\n",c);	
			}
			/*se a for menor que b, e c menor que b*/
			else{
				printf("\n%d",c);
				printf("\n%d\n",b);	
			}		
		}else{
		/*se a for menor que b, e c menor que a*/	
			printf("\n%d",c);
			printf("\n%d",a);
			printf("\n%d\n",b);	
			}			
	}else if (a<c){
		/*se a for maior que b, mas menor que c*/
		if (b<c){
			printf("\n%d",b);
			printf("\n%d",a);
			printf("\n%d\n",c);
		}
	}else{
		
		if(b<c){
			/*se for maior que b e maior que c*/
			printf("\n%d",b);
			printf("\n%d",c);
			printf("\n%d\n",a);
		}else{
			printf("\n%d",c);
			printf("\n%d",b);
			printf("\n%d\n",a);
		}
	}
	
	return 0;
}
