#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, num[9];
		
	printf("...::: In�cio do Programa :::...\n");
	
	for(i=0; i<9;i++){
		printf("\nDigite um n�mero inteiro: ");
		scanf("%d", &num[i]);
	}
	
	printf("\n\n------ Resolu��o -------\n");
	printf("\n   Impress�o inversa");
	
	for(i=8;i>=0;i--){
		printf("\n            %d",num[i]);
	}	
	
	return 0;
}
