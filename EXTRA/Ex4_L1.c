#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que leia o nome de um aluno e as notas das três provas que ele obteve no semestre, 
	com pesos 2, 4 e 6. Ao final, o programa deverá exibir informar o nome do aluno e a sua média ponderada.
	*/
	
	char nome[35];
	double nota1, nota2, nota3, media;
	
	printf("...:::INÍCIO DO PROGRAMA :::...\n\n");
	
	printf("Aluno: ");
	scanf("%s", &nome);
	
	printf ("\nNota da primeira prova: ");
	scanf("%lf", &nota1);
	
	printf ("\nNota da segunda prova: ");
	scanf("%lf", &nota2);
	
	printf ("\nNota da terceira prova: ");
	scanf("%lf", &nota3);
	
	media = (nota1*2 + nota2*4 + nota3*6)/12; 
	
	printf("\n\nAluno: %s\n", nome);
	printf("Média Final: %.2f", media);
	
	return 0;
}
