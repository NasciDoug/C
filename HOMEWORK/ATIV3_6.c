#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, j;
	double num[10];
	
	printf("...::: In�cio do Programa :::...\n");
	
	for(i=0;i<10;i++){
		printf("\nDigite um n�mero qualquer: ");
		scanf("%lf", &num[i]);
	}
	
	printf("\nN�meros que foram digitados mais de uma vez: ");
	
	for(i=0;i<10;i++){
		for(j = i+1; j<10;j++){
			if (num[i] == num[j])
				printf("\n       %.1f", num[i]);
		}
			
	}
	
	return 0;
}
