#include<stdio.h>

typedef struct{
	double NotaP1;
	double NotaP2;
	double NotaP3;
}Aluno;

void imprimeAluno(Aluno a){
	double media = (a.NotaP1 + a.NotaP2 + a.NotaP3)/3;
	printf("%.2f\n\n", media);
}

int main(){
	Aluno Turma[30], a;
	Turma[10].NotaP1 = 9.0;
	Turma[10].NotaP2 = 5.0;
	Turma[10].NotaP3 = 5.0;
	a = Turma[10];
	a.NotaP3 = 7.;
	imprimeAluno(a);
}
