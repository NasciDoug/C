#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	float nota[3], media,P1, P2, P3;
	int i;
	
	printf("...::: Início do Programa :::...\n\n");
	
	for(i=0; i<3;i++){
		printf("Digite a Nota P%d: ", i+1);
		scanf ("%f", &nota[i]);
			if(i==0)
				P1 = nota[i];
			else if (i==1)
				P2 = nota[i]*2;
			else if (i==2)
				P3 = nota[i]*3;
		}
	
	for(i=0; i<3; i++){
		printf("Nota P%d: %.2f\n", i+1, nota[i]);
	}
	
	media = (P1+P2+P3)/6;

	printf("Média: %.2f\n", media);
	
	if (media>=5)
		printf("ALUNO APROVADO!!");
	else
		printf("ALUNO REPROVADO");
	
}


