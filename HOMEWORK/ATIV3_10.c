#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, num[10];
	
	printf ("...::: Início de Programa :::...\n");
	
	for(i=0;i<10;i++){
		printf("\nDigite um número inteiro: ");
		scanf("%d", &num[i]);
		
		if(num[i]<0){
			num[i]=99;
		}else if(num[i]%2==0){
			num[i]=33;
		}
	}
	
	printf("\n______________________________\n");
	
	for(i=0;i<10;i++){
		printf("\n%d", num[i]);
	}
	
	return 0;
	
}
