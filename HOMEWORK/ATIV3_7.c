#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int i, j;
	double num[10];
	
	printf("...::: In�cio do Programa :::...\n");
	
	for(i=0;i<10;i++){
		printf("\nDigite um n�mero qualquer: ");
		scanf("%lf", &num[i]);
	}
	
	printf("\nSubstistitui��o de negativos por 0: ");
	
	for(i=0;i<10;i++){
		if(num[i]<0){
			printf("\n   0.0");
		} else
			printf("\n   %.1f", num[i]);			
	}
	
	return 0;
}
