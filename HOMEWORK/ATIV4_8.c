#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, n, voto[i],vencedor, totalVotos, candidato1=0, candidato2=0, votoBranco=0, votoNulo=0;
	
	printf("...::: Início do Programa :::...\n");
	
	printf("\nGostaria de simular uma votação dentro de uma população de quantos eleitores: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("\n\n***** Opções ****");
		printf("\n1- Candidato 1\n2- Candidato 2\n3 - Voto em branco\n4 - Voto nulo");
		printf("\nDigite o número correspondente ao seu voto: ");
		scanf("%d", voto);
		
		if (voto == 1){
			candidato1++;
		} else if (voto == 2){
			candidato2++;
		} else if (voto == 3){
			votoBranco++;
		} else{ 
			votoNulo++;
		}
	}
	
	
	totalVotos = candidato1+candidato2+votoBranco+votoNulo;
	
	printf("\n------ Resultado Urna ------\n");
	printf("\nCandidato 1: %d", candidato1);
	printf("\nCandidato 2: %d", candidato2);
	printf("\nVotos em branco: %d", votoBranco);
	printf("\nVotos nulos: %d", votoNulo);
	printf("\nVOTOS : %d", totalVotos);
	
	if (candidato1>candidato2){
		printf("\nCandidato 1 vencedor!!!");
		candidato1 = candidato1+votoBranco;
	}else{
		candidato2 = candidato2+votoBranco;
		printf("\nCandidato 2 vencedor!!!");
	}
	return 0;
}
