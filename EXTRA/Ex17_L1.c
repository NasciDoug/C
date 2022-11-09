#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C  que efetue a leitura de quatro valores reais referentes a quatro notas escolares de um aluno 
	e apresente mensagem informando que o aluno está aprovado caso o valor da média escolar seja maior ou igual a 5. 
	Caso o aluno não seja aprovado, apresente mensagem informando que o aluno encontra-se reprovado. 
	Ao final, além das mensagens, apresente o valor da média do aluno.
	*/
	
	float grade1,grade2,grade3,grade4, average;
	char name[40];
	
	printf("...::: INÍCIO DO PROGRAMA :::...\n\n");
	
	printf("Nome do aluno (somente o primeiro nome): ");
	scanf("%s", &name);
	
	printf("\nInsira as quatro notas do aluno: ");
	printf("\nPrimeira nota: ");
	scanf("%f", &grade1);
	
	printf("\nSegunda nota: ");
	scanf("%f", &grade2);
	
	printf("\nTerceira nota: ");
	scanf("%f", &grade3);
	
	printf("\nQuarta nota: ");
	scanf("%f", &grade4);
	
	average = (grade2+grade2+grade3+grade4)/4;
	
	printf("\n\nAluno: %s", name);
	
	if(average>=5)
		printf("\nALUNO ESTÁ APROVADO!\n\n");
	else{
		printf("\nALUNO ESTÁ REPROVADO!");
		printf("\nMédia final: %.1f\n\n", average);
	}
	
	return 0;
}
