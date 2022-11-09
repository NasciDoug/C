#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double num[8],n,x,y,soma;
	int i;
	
	printf("...:::Início do Programa:::...\n");

		
	for(i=0;i<8;i++){	
		printf("\nDigite um número qualquer: ");
		scanf("%lf", &n);
		num[i] = n;	
	}

	if(num[i]==0)
		x = num[i];
	if(num[i]==8)
		y = num[i];
	
	soma = x+y;
	
	printf("\n\n%.2f + %.2f = %.2f", x, y, soma);
	
	return 0;
}
