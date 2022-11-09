#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, j;
	double nota[5], soma=0, media, maior;
	
	printf("...::: Início do Programa :::...\n");
	
	for(i=0;i<5;i++){
		printf("\nDigite a nota do %dº Aluno: ", i+1);
		scanf("%lf", &nota[i]);
		soma = soma+nota[i];
	}
	
	media=soma/5;
	
	printf("\n\n------- Resolução -------");
	printf("\nMédia dos alunos: %.2f", media);
	
	for(i=0;i<5;i++){
		for(j = i+1; j<5;j++){
			if (nota[j] < nota[i])
				maior = nota[i];
			else if (nota[j] > nota[i])
				maior = nota[j];
		}			
	}
	
	printf("\nMaior nota: %.2f", maior);
		
	return 0;
}
