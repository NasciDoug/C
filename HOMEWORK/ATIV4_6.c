#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	int num[10];
	
	printf("...::: Início do Programa :::...\n");
	
	for (i=0;i<10;i++){
		printf("\nDigite um número: ");
		scanf("%d", &num[i]);
	}
	
	for (i=0;i<10;i++){
		if(num[i]%2 == 0)
			num[i] = 99;
	}

	return 0;
}
