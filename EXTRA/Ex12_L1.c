#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que leia o nome de um aluno e as notas que ele obteve nas tr�s provas do semestre. 
	Ao final, o programa dever� informar o nome do aluno e a sua m�dia aritm�tica
	*/
	
	char name [35];
	float grade1, grade2, grade3, average;
	
	printf("...::: IN�CIO DO PROGRAMA :::...\n\n");
	
	printf("Nome do aluno (somente o primeiro nome): ");
	scanf("%s", &name);
	
	printf("\nNota da primeira prova: ");
	scanf("%f", &grade1);
	
	printf("\nNota da segunda prova: ");
	scanf("%f", &grade2);
	
	printf("\nNota da terceira prova: ");
	scanf("%f", &grade3);
	
	average = (grade1+grade2+grade3)/3;
	
	printf("\n\nAluno: %s\n", name);
	printf("M�dia: %.1f\n\n", average);
	
	return 0;
}
