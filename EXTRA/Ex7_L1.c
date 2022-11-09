#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	/*Escrever um programa fonte na Linguagem C que resolva o seguinte problema: 
	uma cópia “xerox” custa R$ 0,50 por folha, mas acima de 200 folhas esse valor cai para R$ 0,30 por unidade. 
	Dado o total de cópias, informe o valor a ser pago.
	*/
	
	double precoXerox;
	int qtdXerox;
	
	printf("...::: INÍCIO DO PROGRAMA :::...\n\n");
	
	printf("Insira a quantidade de folhas: ");
	scanf("%d", &qtdXerox);
	
	if(qtdXerox<=200){
		precoXerox = 0.5*qtdXerox;
		printf("\nTotal: R$ %.2f\n\n", precoXerox);
	}
		
	else if (qtdXerox>200){
		precoXerox = 0.3*qtdXerox;
		printf("\nTotal: R$ %.2f\n\n", precoXerox);
	}	
	
	return 0;
}
