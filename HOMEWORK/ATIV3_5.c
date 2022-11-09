#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, aluno[15], cont=0;
	double nota, media,soma=0;
	
	printf("...::: Início do Programa :::...\n");
	
	for(i=0;i<15;i++){
		printf("\nDigite a nota do %dº Aluno: ", i+1);
		scanf("%lf", &nota);
		
		aluno[i] = nota;
		soma = soma+aluno[i];
		cont++;
	}
	
	media = soma/cont;
	
	printf("\n\nMédia geral: %.2f",media);
	cont=0;
	
	for(i=0;i<15;i++){
		if (aluno[i]<media){
			cont++;
		}
	}
	
	printf("\nQuantidade de alunos com nota abaixo da média: %d",cont);
	
	return 0;
}
