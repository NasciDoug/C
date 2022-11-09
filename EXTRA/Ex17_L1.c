#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C  que efetue a leitura de quatro valores reais referentes a quatro notas escolares de um aluno 
	e apresente mensagem informando que o aluno est� aprovado caso o valor da m�dia escolar seja maior ou igual a 5. 
	Caso o aluno n�o seja aprovado, apresente mensagem informando que o aluno encontra-se reprovado. 
	Ao final, al�m das mensagens, apresente o valor da m�dia do aluno.
	*/
	
	float grade1,grade2,grade3,grade4, average;
	char name[40];
	
	printf("...::: IN�CIO DO PROGRAMA :::...\n\n");
	
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
		printf("\nALUNO EST� APROVADO!\n\n");
	else{
		printf("\nALUNO EST� REPROVADO!");
		printf("\nM�dia final: %.1f\n\n", average);
	}
	
	return 0;
}
