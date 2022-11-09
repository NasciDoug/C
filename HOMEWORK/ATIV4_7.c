#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, payForm[5]; 
	double valor[5], total, dinheiro=0, cheque=0, credito=0;
	
	printf("...::: Início do Programa :::...\n");
	
	for(i=0;i<5;i++){
		printf("\n******* FORMAS DE PAGAMENTO *******%d",i+1);
		printf("\n 1 - Dinheiro\n 2 - Cheque\n 3 - Crédito");
		printf("\nDigite o número referente a sua forma de pagamento: ");
		scanf("%d", &payForm[i]);
		
		printf("\n\n Valor: ");
		scanf("%lf", &valor[i]);
		
		if(payForm[i] == 1)
			dinheiro = dinheiro+valor[i];
		else if(payForm[i] == 2)
			cheque = cheque+valor[i];
		else if (payForm[i] == 3)
			credito = credito+valor[i];		
	}	
	
	total = dinheiro+cheque+credito;
	
	printf("\nReceita Dinheiro: %.2f", dinheiro);
	printf("\nReceita Cheque: %.2f", cheque);
	printf("\nReceita Crédito: %.2f", credito);
	printf("\nReceita Total: %.2f", total);
	
	return 0;
}
