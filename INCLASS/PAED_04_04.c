#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i=1, j=2, k=3;
	double x=5.5, y=7.7;
	
	printf("A expressão => ((x+k) +7 < (y/k)) retournou %d", ((x+k) +7 < (y/k)));
	
	if ((x+k) +7 < (y/k))
		printf("\n\n---- Expressão avaliada como TRUE ----\n\n");
		
	else
	
		printf("\n\n---- Expressão avaliada como FALSE ----\n\n");
		
	return 0;
}
